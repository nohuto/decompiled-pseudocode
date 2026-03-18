/*
 * XREFs of DxgkUnload @ 0x1C02614A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     DxgkEtwShutdown @ 0x1C0043BA0 (DxgkEtwShutdown.c)
 *     ?DxgkDiagShutdown@@YAJXZ @ 0x1C0043F80 (-DxgkDiagShutdown@@YAJXZ.c)
 *     ?DxgkCleanupTelemetry@@YAXXZ @ 0x1C004BAA0 (-DxgkCleanupTelemetry@@YAXXZ.c)
 *     MonitorCleanupGlobal @ 0x1C005D19C (MonitorCleanupGlobal.c)
 *     ?wil_UninitializeFeatureStaging@@YAXXZ @ 0x1C00DAF2C (-wil_UninitializeFeatureStaging@@YAXXZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0268C94 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 *     ?LPMDisplayCleanupGlobal@@YAXXZ @ 0x1C0275B48 (-LPMDisplayCleanupGlobal@@YAXXZ.c)
 *     DpiCleanUpGlobalState @ 0x1C02C73FC (DpiCleanUpGlobalState.c)
 *     DxgkCleanupPower @ 0x1C02C7868 (DxgkCleanupPower.c)
 */

void DxgkUnload()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  PsSetCreateProcessNotifyRoutineEx((PCREATE_PROCESS_NOTIFY_ROUTINE_EX)DxgkProcessNotify, 1u);
  v2 = WdLogNewEntry5_WdError(v1, v0);
  *(_QWORD *)(v2 + 24) = 1402LL;
  WdLogEvent5_WdError(v2);
  SMgrUnregisterSessionChangeCallout(DxgkNotifySessionStateChange);
  MonitorCleanupGlobal(v4, v3, v5, v6);
  LPMDisplayCleanupGlobal();
  if ( CCD_BTL::m_pGlobalBtl )
  {
    (*(void (__fastcall **)(struct CCD_BTL *, __int64))(*(_QWORD *)CCD_BTL::m_pGlobalBtl + 8LL))(
      CCD_BTL::m_pGlobalBtl,
      1LL);
    CCD_BTL::m_pGlobalBtl = 0LL;
  }
  DxgkCleanupPower();
  DpiCleanUpGlobalState();
  if ( byte_1C00B2105 )
    KeDeregisterBugCheckReasonCallback(&CallbackRecord);
  DxgkEtwShutdown();
  if ( gScreenStudyEventSubscription )
  {
    ExUnsubscribeWnfStateChange(gScreenStudyEventSubscription);
    gScreenStudyEventSubscription = 0LL;
  }
  DxgkCleanupTelemetry();
  DxgkDiagShutdown();
  if ( g_pDeviceObject )
  {
    IoUnregisterShutdownNotification((PDEVICE_OBJECT)g_pDeviceObject);
    IoDeleteDevice((PDEVICE_OBJECT)g_pDeviceObject);
    g_pDeviceObject = 0LL;
  }
  DXGGLOBAL::DestroyGlobal();
  wil_UninitializeFeatureStaging();
}
