/*
 * XREFs of ViFaultsInitializeAppsList @ 0x1409D9F60
 * Callers:
 *     VfInitVerifierComponents @ 0x1409C3E50 (VfInitVerifierComponents.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ViFaultsAddAllApps @ 0x1409D9B0C (ViFaultsAddAllApps.c)
 */

__int64 ViFaultsInitializeAppsList()
{
  unsigned int v0; // ebx
  unsigned __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v5; // eax
  bool v6; // zf

  v0 = 0;
  v1 = KeAcquireSpinLockRaiseToDpc(&ViFaultInjectionLock);
  qword_140C1CB28 = (__int64)&ViFaultApplicationsList;
  ViFaultApplicationsList = &ViFaultApplicationsList;
  KxReleaseSpinLock(&ViFaultInjectionLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v5 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
        v6 = (v5 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v5;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v1);
  if ( VerifierFaultApplicationsBufferSize != -1 && (unsigned int)(VerifierFaultApplicationsBufferSize - 2) <= 0xFE )
    return (unsigned int)ViFaultsAddAllApps(
                           VerifierFaultApplicationsBuffer,
                           ((unsigned __int64)(unsigned int)VerifierFaultApplicationsBufferSize - 2) >> 1);
  return v0;
}
