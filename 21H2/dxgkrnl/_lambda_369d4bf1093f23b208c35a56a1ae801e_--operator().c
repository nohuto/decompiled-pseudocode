/*
 * XREFs of _lambda_369d4bf1093f23b208c35a56a1ae801e_::operator() @ 0x1C0157008
 * Callers:
 *     ?VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0383010 (-VmBusUpdateMonitorMapping@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1C0058FA8 (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 *     ?RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z @ 0x1C0059464 (-RemoveMapping@HOSTVMMONITORMAPPING@@QEAAJPEAXU_LUID@@I0_N@Z.c)
 */

__int64 __fastcall lambda_369d4bf1093f23b208c35a56a1ae801e_::operator()(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 *v11; // rdx
  struct DXGGLOBAL *v12; // r11
  struct _LUID *v13; // r10
  __int64 v14; // rax
  __int64 v15; // r8
  struct _LUID v16; // [rsp+50h] [rbp-38h] BYREF
  DWORD LowPart; // [rsp+58h] [rbp-30h]
  int v18; // [rsp+5Ch] [rbp-2Ch]
  __int64 v19; // [rsp+60h] [rbp-28h]
  int v20; // [rsp+68h] [rbp-20h]
  __int64 v21; // [rsp+6Ch] [rbp-1Ch]
  int v22; // [rsp+74h] [rbp-14h]
  __int64 v23; // [rsp+78h] [rbp-10h]

  v5 = *(_QWORD *)(*(_QWORD *)(**a1 + 96) + 608LL);
  if ( *(_DWORD *)(v5 + 392) >= 0x23u )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_VAIL_Vsync_Projection__private_reporting,
      0x14BC4A8u,
      a3,
      a4,
      (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
      1);
    if ( *(_QWORD *)(v5 + 320) )
    {
      v9 = a1[1];
      if ( *(_DWORD *)(*v9 + 36) < 0x10u )
      {
        if ( *(_DWORD *)(*v9 + 40) < 2u )
        {
          wil_details_FeatureReporting_ReportUsageToService(
            (__int64)&Feature_VAIL_Fake_Monitor_Projection__private_reporting,
            0x146C4AAu,
            v7,
            v8,
            (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
            0);
          Global = DXGGLOBAL_GetGlobal();
          v11 = *a1;
          v12 = Global;
          v13 = (struct _LUID *)*a1[1];
          v14 = **a1;
          if ( (v13[5].LowPart & 1) != 0 )
          {
            v15 = *(_QWORD *)(*(_QWORD *)(v14 + 96) + 608LL);
            v18 = 0;
            v21 = 0LL;
            v22 = 0;
            v19 = *(_QWORD *)(*v11 + 104) + 160LL;
            v16 = v13[3];
            LowPart = v13[4].LowPart;
            v23 = *(_QWORD *)(v15 + 320) + 32LL * (unsigned int)v13[4].HighPart + 8;
            v20 = *(_DWORD *)(v15 + 392);
            return HOSTVMMONITORMAPPING::AddMapping((KSPIN_LOCK *)v12 + 38115, &v16);
          }
          else
          {
            return HOSTVMMONITORMAPPING::RemoveMapping(
                     (struct DXGGLOBAL *)((char *)v12 + 304920),
                     (void *)(*(_QWORD *)(v14 + 104) + 160LL),
                     v13[3],
                     v13[4].LowPart,
                     0LL);
          }
        }
        else
        {
          WdLogSingleEntry1(2LL, 8077LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Flags.Unused was not zero, failing request",
            8077LL,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225714LL;
        }
      }
      else
      {
        WdLogSingleEntry1(2LL, 8071LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"SharedDataIndex was not out of range, failing request",
          8071LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return 3221225713LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, 8065LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Shared page is not enabled", 8065LL, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 8052LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Message is not supported from this guest VM",
      8052LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
}
