/*
 * XREFs of _lambda_908f0e8ad16bb8359ff8641d3c1ab648_::operator() @ 0x1C01572B4
 * Callers:
 *     ?VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0383080 (-VmBusVsyncControl@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1C0058FA8 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x1C0059464 (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z.c)
 */

__int64 __fastcall lambda_908f0e8ad16bb8359ff8641d3c1ab648_::operator()(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  KSPIN_LOCK *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // rdx
  struct _LUID v13; // [rsp+50h] [rbp-38h] BYREF
  int v14; // [rsp+58h] [rbp-30h]
  int v15; // [rsp+5Ch] [rbp-2Ch]
  __int64 v16; // [rsp+60h] [rbp-28h]
  int v17; // [rsp+68h] [rbp-20h]
  int v18; // [rsp+6Ch] [rbp-1Ch]
  __int64 v19; // [rsp+70h] [rbp-18h]
  __int64 v20; // [rsp+78h] [rbp-10h]

  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_VAIL_Vsync_Projection__private_reporting,
    0x14BC4A8u,
    a3,
    a4,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
    1);
  v7 = **a1;
  if ( *(_QWORD *)(v7 + 40) )
  {
    if ( *(_DWORD *)(v7 + 48) < 2u )
    {
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_VAIL_Fake_Monitor_Projection__private_reporting,
        0x146C4AAu,
        v5,
        v6,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
        0);
      v9 = (KSPIN_LOCK *)((char *)DXGGLOBAL_GetGlobal() + 304920);
      v10 = **a1;
      v11 = *a1[1];
      if ( (*(_DWORD *)(v10 + 48) & 1) != 0 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(v11 + 96) + 608LL);
        v15 = 0;
        v18 = 0;
        v20 = 0LL;
        v16 = *(_QWORD *)(v11 + 104) + 160LL;
        v13 = *(struct _LUID *)(v10 + 24);
        v14 = *(_DWORD *)(v10 + 32);
        v19 = *(_QWORD *)(v10 + 40);
        v17 = *(_DWORD *)(v12 + 392);
        return HOSTVMMONITORMAPPING::AddMapping(v9, &v13);
      }
      else
      {
        return HOSTVMMONITORMAPPING::RemoveMapping(
                 (HOSTVMMONITORMAPPING *)v9,
                 (void *)(*(_QWORD *)(v11 + 104) + 160LL),
                 *(struct _LUID *)(v10 + 24),
                 *(_DWORD *)(v10 + 32),
                 *(void **)(v10 + 40));
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, 7874LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Flags.Unused was not zero, failing request",
        7874LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225714LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 7868LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"pGuestVsyncEvent is zero, failing request",
      7868LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225713LL;
  }
}
