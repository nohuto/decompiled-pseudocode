/*
 * XREFs of ?PowerWaking@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000D920
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@@Z @ 0x1C001120C (-InvokeStateful@FxPrePostCallback@@QEAAJPEAW4FxCxCallbackProgress@@W4FxCxCallbackCleanupAction@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgPnp::PowerWaking(FxPkgPnp *This)
{
  unsigned __int64 ObjectHandleUnchecked; // rax
  int v3; // edx
  __int64 v4; // r9
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  FxCxCallbackProgress progress; // [rsp+30h] [rbp+8h] BYREF

  progress = FxCxCallbackProgressInitialized;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  *(_DWORD *)(v4 + 40) = v3;
  *(_QWORD *)(v4 + 32) = ObjectHandleUnchecked;
  if ( FxPrePostCallback::InvokeStateful((FxPrePostCallback *)v4, &progress, FxCxCleanupAfterPreOrClientFailure) < 0 )
    return (unsigned __int8)progress < FxCxCallbackProgressClientSucceeded ? 852 : 862;
  if ( This->m_SleepStudyTrackReferences == 1 )
  {
    m_SleepStudy = This->m_SleepStudy;
    if ( m_SleepStudy )
    {
      if ( m_SleepStudy->ComponentPowerRef )
      {
        if ( unk_1C00AB348 )
          unk_1C00AB348();
      }
    }
  }
  return 858LL;
}
