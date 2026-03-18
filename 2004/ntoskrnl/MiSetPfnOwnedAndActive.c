/*
 * XREFs of MiSetPfnOwnedAndActive @ 0x14025F5D0
 * Callers:
 *     MiFindContiguousPages @ 0x140225A90 (MiFindContiguousPages.c)
 *     MiAssignNonPagedPoolPte @ 0x14025F380 (MiAssignNonPagedPoolPte.c)
 *     MiFindLargeNodePage @ 0x1403925A0 (MiFindLargeNodePage.c)
 *     MiRemoveMdlPages @ 0x1408C3460 (MiRemoveMdlPages.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiSetPfnOwnedAndActive(__int64 a1, char a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned __int8 v9; // al
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // rdi
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v17; // zf

  v9 = MiLockPageInline(a1);
  v12 = *(unsigned __int8 *)(a1 + 34);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_QWORD *)a1 = 0LL;
  v13 = v9;
  if ( (unsigned int)v12 >> 6 != a4 )
  {
    MiChangePageAttribute(a1, a4, 1LL);
    LOBYTE(v12) = *(_BYTE *)(a1 + 34);
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  if ( a5 )
    *(_WORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 8) = a3;
  LOBYTE(v12) = v12 & 0xF8 | 6;
  *(_BYTE *)(a1 + 34) = v12;
  if ( (a2 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
    *(_QWORD *)(a1 + 16) = MiSwizzleInvalidPte(128LL, v10, v12, v11);
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
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v13 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v17 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v17 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v13);
  return result;
}
