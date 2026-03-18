/*
 * XREFs of MiSetPfnOwnedAndActive @ 0x1402B8600
 * Callers:
 *     MiFindContiguousPages @ 0x14027EAE0 (MiFindContiguousPages.c)
 *     MiAssignNonPagedPoolPte @ 0x1402B83B0 (MiAssignNonPagedPoolPte.c)
 *     MiFindLargeNodePage @ 0x1403919F0 (MiFindLargeNodePage.c)
 *     MiRemoveMdlPages @ 0x1408C2110 (MiRemoveMdlPages.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetPfnOwnedAndActive(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  char v7; // r14
  unsigned __int8 v9; // al
  unsigned int v10; // r8d
  unsigned __int64 v11; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v15; // zf

  v7 = a2;
  v9 = MiLockPageInline(a1, a2, a3);
  v10 = *(unsigned __int8 *)(a1 + 34);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_QWORD *)a1 = 0LL;
  v11 = v9;
  if ( v10 >> 6 != a4 )
  {
    MiChangePageAttribute(a1, a4, 1LL);
    LOBYTE(v10) = *(_BYTE *)(a1 + 34);
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  if ( a5 )
    *(_WORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 34) = v10 & 0xF8 | 6;
  if ( (v7 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
    *(_QWORD *)(a1 + 16) = MiSwizzleInvalidPte(128LL);
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        v15 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v15 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v11);
  return result;
}
