/*
 * XREFs of _lambda_7d3cd37763849674b9723316c3f03de5_::operator() @ 0x1C0233828
 * Callers:
 *     ?VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024C530 (-VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0008898 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AddMapping@REMOTEVSYNCMAPPING@@QEAAJPEAUREMOTE_VYSNC_MAPPING@1@@Z @ 0x1C004D4D0 (-AddMapping@REMOTEVSYNCMAPPING@@QEAAJPEAUREMOTE_VYSNC_MAPPING@1@@Z.c)
 *     ?RemoveMapping@REMOTEVSYNCMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x1C004D808 (-RemoveMapping@REMOTEVSYNCMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z.c)
 */

__int64 __fastcall lambda_7d3cd37763849674b9723316c3f03de5_::operator()(__int64 **a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  KSPIN_LOCK *v8; // rcx
  __int64 v9; // r8
  __int64 *v10; // rax
  int v11; // [rsp+30h] [rbp-38h]
  int v12; // [rsp+30h] [rbp-38h]
  struct _LUID v13; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+48h] [rbp-20h]
  int v15; // [rsp+4Ch] [rbp-1Ch]
  __int64 v16; // [rsp+50h] [rbp-18h]
  __int64 v17; // [rsp+58h] [rbp-10h]

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_VAIL_Vsync_Projection__private_reporting,
    0x14BC4A8u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1,
    v11);
  v3 = **a1;
  if ( *(_DWORD *)(v3 + 48) < 2u )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_VAIL_Fake_Monitor_Projection__private_reporting,
      0x146C4AAu,
      0LL,
      0LL,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_TrackedWorkload_logged_traits,
      0,
      v12);
    v8 = (KSPIN_LOCK *)((char *)DXGGLOBAL::GetGlobal(v7, v6) + 304552);
    v9 = **a1;
    v10 = a1[1];
    if ( (*(_DWORD *)(v9 + 48) & 1) != 0 )
    {
      v15 = 0;
      v16 = *(_QWORD *)(*v10 + 32);
      v13 = *(struct _LUID *)(v9 + 24);
      v14 = *(_DWORD *)(v9 + 32);
      v17 = *(_QWORD *)(v9 + 40);
      return REMOTEVSYNCMAPPING::AddMapping(v8, &v13);
    }
    else
    {
      return REMOTEVSYNCMAPPING::RemoveMapping(
               (REMOTEVSYNCMAPPING *)v8,
               *(void **)(*v10 + 32),
               *(struct _LUID *)(v9 + 24),
               *(_DWORD *)(v9 + 32),
               *(void **)(v9 + 40));
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(v2, v3);
    *(_QWORD *)(v4 + 24) = 6814LL;
    WdLogEvent5_WdError(v4);
    return 3221225714LL;
  }
}
