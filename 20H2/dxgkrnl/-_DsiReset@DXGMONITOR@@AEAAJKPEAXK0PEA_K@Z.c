/*
 * XREFs of ?_DsiReset@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z @ 0x1C02FA4E8
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C013AD00 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?Feature_MonitorIoctlTesting__private_IsEnabled@@YAHXZ @ 0x1C0026E14 (-Feature_MonitorIoctlTesting__private_IsEnabled@@YAHXZ.c)
 *     ?DdiDsiReset@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGK_DSI_RESET@@@Z @ 0x1C02196AC (-DdiDsiReset@ADAPTER_DISPLAY@@QEAAJIPEAU_DXGK_DSI_RESET@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_DsiReset(
        DXGMONITOR *this,
        __int64 a2,
        struct _DXGK_DSI_RESET *a3,
        unsigned int a4,
        struct _DXGK_DSI_RESET *a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v6; // rbp
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  ADAPTER_DISPLAY *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct _FAST_MUTEX *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  int v34; // [rsp+30h] [rbp-28h]

  v6 = a4;
  v8 = (unsigned int)a2;
  if ( !a3 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a6 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  *a6 = 0LL;
  v13 = *((_QWORD *)this + 4);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v14);
    v13 = *((_QWORD *)this + 4);
  }
  v15 = *(ADAPTER_DISPLAY **)(v13 + 8);
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v16);
  }
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_MipiDsi2__private_reporting,
    0x11CEF90u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_ProductizeSpecializedDisplays_logged_traits,
    1,
    v34);
  if ( !(unsigned __int8)ExIsManufacturingModeEnabled()
    && !(unsigned int)Feature_MonitorIoctlTesting__private_IsEnabled()
    || (v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL) + 216LL)
                                    + 64LL)
                        + 40LL),
        *(_DWORD *)(v19 + 28) < 0xC002u)
    || (*((_DWORD *)this + 10) & 2) == 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v19, v17, v18);
    WdLogEvent5_WdWarning(v20);
    return 3221225659LL;
  }
  if ( (unsigned int)v8 < 8 )
  {
    v22 = WdLogNewEntry5_WdError(v19, v17);
    *(_QWORD *)(v22 + 24) = 8LL;
    *(_QWORD *)(v22 + 32) = v8;
LABEL_18:
    WdLogEvent5_WdError(v22);
    return 3221225507LL;
  }
  if ( (_DWORD)v8 != (_DWORD)v6 )
  {
    v22 = WdLogNewEntry5_WdError(v19, v17);
    *(_QWORD *)(v22 + 24) = v8;
    *(_QWORD *)(v22 + 32) = v6;
    goto LABEL_18;
  }
  if ( a3 != a5 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v19, v17);
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = (struct _FAST_MUTEX *)((char *)this + 1256);
  *a6 = v6;
  if ( this == (DXGMONITOR *)-1256LL )
  {
    v25 = WdLogNewEntry5_WdAssertion(v19, v17);
    WdLogEvent5_WdAssertion(v25);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)((char *)this + 1256));
  v28 = (int)ADAPTER_DISPLAY::DdiDsiReset(v15, *((_DWORD *)this + 11), a3);
  if ( !v24 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v27, v26);
    WdLogEvent5_WdAssertion(v29);
  }
  KeReleaseGuardedMutex(v24);
  if ( (int)v28 < 0 )
  {
    v33 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v33 + 24) = v28;
    WdLogEvent5_WdWarning(v33);
  }
  return 0LL;
}
