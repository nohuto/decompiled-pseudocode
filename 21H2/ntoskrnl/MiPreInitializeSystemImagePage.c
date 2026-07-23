/*
 * XREFs of MiPreInitializeSystemImagePage @ 0x140298DE8
 * Callers:
 *     MiAllocateDriverPage @ 0x1406A8D58 (MiAllocateDriverPage.c)
 * Callees:
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPreInitializeSystemImagePage(__int64 a1)
{
  unsigned __int8 v2; // al
  char v3; // dl
  unsigned __int64 v4; // rdi
  char v5; // al
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v9; // zf

  v2 = MiLockPageInline(a1);
  v3 = *(_BYTE *)(a1 + 34);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  v4 = v2;
  *(_BYTE *)(a1 + 34) = v3 & 0xF8 | 5;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  v5 = *(_BYTE *)(a1 + 34) & 0xC7;
  *(_WORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 34) = v5;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v9 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v9 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return result;
}
