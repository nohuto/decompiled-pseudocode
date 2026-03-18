/*
 * XREFs of MiLockProtoPage @ 0x14024C4D8
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402E67E8 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiMakeProtoAddressValid @ 0x14024C5E0 (MiMakeProtoAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall MiLockProtoPage(ULONG_PTR a1, unsigned __int64 a2, char a3)
{
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  if ( a2 )
  {
    v14 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v6 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v14) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v7 = (unsigned __int8)MiLockPageInline(v6);
    MiRemoveLockedPageChargeAndDecRef(v6);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a2 = -1LL << ((unsigned __int8)v7 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)a2;
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    if ( !a1 )
      return 0LL;
  }
  LOBYTE(a2) = a3;
  MiUnlockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26], a2);
  MiMakeProtoAddressValid(a1);
  MiLockWorkingSetShared(&Process[1].ActiveProcessors.StaticBitmap[26]);
  return a1;
}
