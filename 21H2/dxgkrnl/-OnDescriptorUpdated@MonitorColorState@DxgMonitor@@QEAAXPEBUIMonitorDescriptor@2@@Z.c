/*
 * XREFs of ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C02099B0
 * Callers:
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C02095AC (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C01BC350 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z @ 0x1C01E5394 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z.c)
 *     ?_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C0209C14 (-_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C0209FFC (-_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C020A04C (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C020A0A8 (-_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C020A10C (-_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnDescriptorUpdated(
        DxgMonitor::MonitorColorState *this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  _DWORD *v4; // r15
  char v5; // r12
  char v6; // r13
  int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  int *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  unsigned int v16; // eax
  unsigned int v17; // eax
  DxgMonitor::MonitorColorState *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  double v23; // xmm0_8
  double v24; // xmm1_8
  int v25; // eax
  double v26; // xmm0_8
  int v27; // eax
  double v28; // xmm0_8
  int v29; // eax
  double v30; // xmm1_8
  int v31; // eax
  double v32; // xmm0_8
  int v33; // eax
  double v34; // xmm0_8
  int v35; // ecx
  double v36; // xmm0_8
  __int64 v37; // rax
  __int64 v38; // rax
  double v39; // xmm0_8
  double v40; // xmm1_8
  int v41; // eax
  double v42; // xmm0_8
  int v43; // eax
  double v44; // xmm0_8
  int v45; // eax
  double v46; // xmm1_8
  int v47; // eax
  double v48; // xmm0_8
  int v49; // eax
  double v50; // xmm1_8
  int v51; // eax
  double v52; // xmm0_8
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  int v57; // eax
  int v58; // [rsp+40h] [rbp-49h]
  _OWORD v59[5]; // [rsp+50h] [rbp-39h] BYREF

  DxgMonitor::MonitorColorState::_RetrieveHDRParamDriverOverrides(this);
  *(_QWORD *)&v59[3] = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  DWORD2(v59[3]) = 0;
  v4 = (_DWORD *)((char *)this + 288);
  *((_OWORD *)this + 2) = 0LL;
  BYTE12(v59[3]) = 0;
  v5 = 0;
  *((_OWORD *)this + 3) = 0LL;
  v6 = 0;
  *((_OWORD *)this + 4) = v59[3];
  *((_DWORD *)this + 72) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  if ( a2 )
  {
    v5 = 1;
    v6 = 1;
    v7 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *, char *))(*(_QWORD *)a2 + 128LL))(
           a2,
           (char *)this + 36,
           (char *)this + 16);
    v8 = v7;
    if ( v7 < 0 )
    {
      v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
      WdLogSingleEntry2(3LL, v8, v9);
      v5 = 0;
    }
    v10 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *))(*(_QWORD *)a2 + 120LL))(
            a2,
            (char *)this + 44);
    v11 = v10;
    if ( v10 < 0 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
      WdLogSingleEntry2(3LL, v11, v19);
      v5 = 0;
    }
    *((_BYTE *)this + 76) = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *))(*(_QWORD *)a2 + 176LL))(a2);
    v12 = (int *)((char *)this + 296);
    v58 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, char *, char *, char *))(*(_QWORD *)a2 + 160LL))(
            a2,
            (char *)this + 288,
            (char *)this + 292,
            (char *)this + 296);
    if ( v58 < 0 )
    {
      v15 = WdLogNewEntry5_WdTrace(v14, v13);
      *(_QWORD *)(v15 + 24) = v58;
      v6 = 0;
      *(_QWORD *)(v15 + 32) = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
      v12 = (int *)((char *)this + 296);
    }
    memset(v59, 0, sizeof(v59));
    if ( (*(int (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, _OWORD *))(*(_QWORD *)a2 + 168LL))(
           a2,
           v59) >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 64LL))(v20) || !BYTE8(v59[4]) )
      {
        v37 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
        if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v37 + 64LL))(v37)
          || (v38 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this),
              (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v38 + 72LL))(v38)) )
        {
          v39 = *((double *)v59 + 1) * 10000.0;
          v40 = *((double *)&v59[1] + 1) * 1024.0;
          *((_BYTE *)this + 340) = LOBYTE(v59[0]) != 0;
          v41 = (int)v39;
          *((_DWORD *)this + 92) = 320;
          *((_DWORD *)this + 93) = 337;
          v42 = *(double *)&v59[1] * 10000.0;
          *((_DWORD *)this + 94) = v41;
          v43 = (int)v42;
          v44 = *(double *)&v59[2] * 1024.0;
          *((_DWORD *)this + 95) = v43;
          v45 = (int)(v40 + 0.5);
          v46 = *((double *)&v59[2] + 1);
          *((_DWORD *)this + 86) = v45;
          v47 = (int)(v44 + 0.5);
          v48 = *(double *)&v59[3] * 1024.0;
          *((_DWORD *)this + 87) = v47;
          v49 = (int)(v46 * 1024.0 + 0.5);
          v50 = *((double *)&v59[3] + 1);
          *((_DWORD *)this + 88) = v49;
          v51 = (int)(v48 + 0.5);
          v52 = *(double *)&v59[4];
          *((_DWORD *)this + 89) = v51;
          *((_DWORD *)this + 90) = (int)(v50 * 1024.0 + 0.5);
          *((_DWORD *)this + 91) = (int)(v52 * 1024.0 + 0.5);
        }
      }
      else
      {
        wil_details_FeatureReporting_ReportUsageToService(
          (__int64)&Feature_DolbyVision_Default_On__private_reporting,
          0x13DE0A8u,
          v21,
          v22,
          (const struct FEATURE_LOGGED_TRAITS *)&Feature_SupportComputeOnlyAdapters_logged_traits,
          1);
        v23 = *((double *)&v59[1] + 1);
        v24 = *((double *)&v59[2] + 1);
        *((_DWORD *)this + 105) = 0;
        *((_BYTE *)this + 341) = 1;
        *((_BYTE *)this + 428) = 1;
        *((_DWORD *)this + 100) = 964069926;
        *((_DWORD *)this + 101) = -1686232824;
        *((_DWORD *)this + 102) = 138811898;
        *((_DWORD *)this + 103) = 1076903406;
        *((_DWORD *)this + 104) = 1000;
        *((_DWORD *)this + 106) = 61473790;
        v25 = (int)(v23 * 1024.0 + 0.5);
        v26 = *(double *)&v59[2] * 1024.0;
        *((_DWORD *)this + 11) = v25;
        v27 = (int)(v26 + 0.5);
        v28 = *(double *)&v59[3] * 1024.0;
        *((_DWORD *)this + 12) = v27;
        v29 = (int)(v24 * 1024.0 + 0.5);
        v30 = *((double *)&v59[3] + 1);
        *((_DWORD *)this + 13) = v29;
        v31 = (int)(v28 + 0.5);
        v32 = *(double *)&v59[4] * 1024.0;
        *((_DWORD *)this + 14) = v31;
        *((_DWORD *)this + 15) = (int)(v30 * 1024.0 + 0.5);
        v33 = (int)(v32 + 0.5);
        v34 = *(double *)&v59[1] * 10000.0;
        *((_DWORD *)this + 16) = v33;
        v35 = (int)v34;
        v36 = *((double *)v59 + 1) * 10000.0;
        *((_DWORD *)this + 73) = v35;
        *v12 = v35;
        *v4 = (int)v36;
      }
    }
  }
  if ( v5 )
  {
    if ( *((_DWORD *)this + 68) <= 3u )
    {
      v53 = *((_OWORD *)this + 1);
      *((_DWORD *)this + 68) = 3;
      v54 = *((_OWORD *)this + 2);
      *((_OWORD *)this + 13) = v53;
      v55 = *((_OWORD *)this + 3);
      *((_OWORD *)this + 14) = v54;
      v56 = *((_OWORD *)this + 4);
      *((_OWORD *)this + 15) = v55;
      *((_OWORD *)this + 16) = v56;
    }
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogSingleEntry1(3LL, v16);
    if ( !*((_DWORD *)this + 68) )
      DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(this);
  }
  if ( v6 )
  {
    if ( *((_DWORD *)this + 84) <= 4u )
    {
      v57 = *((_DWORD *)this + 74);
      *((_QWORD *)this + 39) = *(_QWORD *)v4;
      *((_DWORD *)this + 80) = v57;
      *(_QWORD *)((char *)this + 324) = *((_QWORD *)this + 39);
      *((_DWORD *)this + 83) = v57;
      *((_DWORD *)this + 84) = 4;
      DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this);
    }
  }
  else
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    WdLogSingleEntry1(3LL, v17);
    if ( !*((_DWORD *)this + 84) )
      DxgMonitor::MonitorColorState::_SetLuminanceValuesToSDR(this);
  }
  DxgMonitor::MonitorColorState::_UpdateHDRParamsIfRequired(this);
  DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 0, 0);
  DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v18);
}
