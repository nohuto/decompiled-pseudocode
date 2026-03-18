/*
 * XREFs of WmipFindRegEntryByProviderId @ 0x140272900
 * Callers:
 *     WmipForwardWmiIrp @ 0x14064675C (WmipForwardWmiIrp.c)
 *     IoWMISystemControl @ 0x14070D574 (IoWMISystemControl.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x14021E3C0 (KxReleaseSpinLock.c)
 *     WmipDoFindRegEntryByProviderId @ 0x140272990 (WmipDoFindRegEntryByProviderId.c)
 *     KeReleaseMutex @ 0x140284E90 (KeReleaseMutex.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall WmipFindRegEntryByProviderId(unsigned int a1)
{
  unsigned __int64 v2; // rdi
  __int64 RegEntryByProviderId; // rax
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf

  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v2 = KeAcquireSpinLockRaiseToDpc(&WmipRegistrationSpinLock);
  RegEntryByProviderId = WmipDoFindRegEntryByProviderId(a1);
  v4 = RegEntryByProviderId;
  if ( RegEntryByProviderId )
    _InterlockedIncrement((volatile signed __int32 *)(RegEntryByProviderId + 48));
  KxReleaseSpinLock(&WmipRegistrationSpinLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  KeReleaseMutex(&WmipSMMutex, 0);
  return v4;
}
