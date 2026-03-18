/*
 * XREFs of ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C007CDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C0016F18 (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 */

__int64 __fastcall FxPkgPnp::PowerD0Starting(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  int v3; // edx
  __int64 v4; // r9
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  progress = FxCxCallbackProgressInitialized;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  *(_DWORD *)(v4 + 40) = v3;
  *(_QWORD *)(v4 + 32) = ObjectHandleUnchecked;
  if ( (int)FxPrePostCallback::InvokeStateful((FxPrePostCallback *)v4, &progress, FxCxCleanupAfterPreOrClientFailure) < 0 )
    return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 836 : 861;
  if ( This->m_SleepStudyTrackReferences == 1 )
  {
    m_SleepStudy = This->m_SleepStudy;
    if ( m_SleepStudy )
    {
      if ( m_SleepStudy->ComponentPowerRef )
        SleepstudyHelper_ResetComponentsStartTime();
    }
  }
  return 784LL;
}
