/*
 * XREFs of ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C0345DD8
 * Callers:
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0346F60 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000BD74 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z @ 0x1C0081B14 (-Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z.c)
 *     ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x1C0344CCC (-EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ.c)
 *     ?FindInstancePair@DXGTRACKEDWORKLOAD@@IEAA_NPEAPEAUWorkloadInstancePair@1@@Z @ 0x1C0344EA0 (-FindInstancePair@DXGTRACKEDWORKLOAD@@IEAA_NPEAPEAUWorkloadInstancePair@1@@Z.c)
 *     ?GetInstanceForPair@DXGTRACKEDWORKLOAD@@IEAA_N_N_KPEAUWorkloadInstancePair@1@@Z @ 0x1C0345010 (-GetInstanceForPair@DXGTRACKEDWORKLOAD@@IEAA_N_N_KPEAUWorkloadInstancePair@1@@Z.c)
 *     ?Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z @ 0x1C0345CC0 (-Update@MonitoredFenceHelper@@QEAAJPEAVDXGDEVICE@@_K1@Z.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::UpdateTrackedWorkload(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        const struct _D3DKMT_UPDATETRACKEDWORKLOAD *a3,
        __int64 a4)
{
  unsigned int v6; // r14d
  unsigned int VBlankOffsetHundredsNS; // edx
  unsigned int v9; // ecx
  unsigned int AbsoluteQPC_high; // eax
  struct DXGTRACKEDWORKLOAD::WorkloadInstancePair *v11; // rbx
  int v12; // edi
  LARGE_INTEGER v13; // r8
  LARGE_INTEGER v14; // r9
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  const wchar_t *v21; // r9
  _BYTE v23[8]; // [rsp+50h] [rbp-48h] BYREF
  DXGPUSHLOCK *v24; // [rsp+58h] [rbp-40h]
  int v25; // [rsp+60h] [rbp-38h]
  struct DXGTRACKEDWORKLOAD::WorkloadInstancePair *v26; // [rsp+A8h] [rbp+10h] BYREF

  v26 = 0LL;
  v6 = 0;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v23, (struct _KTHREAD **)this + 5, 0);
  DXGPUSHLOCK::AcquireExclusive(v24);
  VBlankOffsetHundredsNS = a3->FinishDeadline.VBlankOffsetHundredsNS;
  v9 = *((_DWORD *)this + 28);
  v25 = 2;
  if ( VBlankOffsetHundredsNS >= v9
    || (AbsoluteQPC_high = HIDWORD(a3->FinishDeadline.AbsoluteQPC), AbsoluteQPC_high >= v9)
    || VBlankOffsetHundredsNS == AbsoluteQPC_high )
  {
    v6 = -1073741811;
    v20 = 1826LL;
    WdLogSingleEntry2(2LL, -1073741811LL, 1826LL);
    v21 = L"Invalid index, returning 0x%I64x";
    goto LABEL_18;
  }
  *((_QWORD *)this + 39) = a3->GPUCalibrationTimestamp;
  if ( DXGTRACKEDWORKLOAD::FindInstancePair(this, &v26) )
  {
    v11 = v26;
    if ( !DXGTRACKEDWORKLOAD::GetInstanceForPair(
            this,
            a3->BeginTrackedWorkloadIndex != 0,
            a3->FenceSubmissionValue,
            v26) )
    {
      v12 = a3->BeginTrackedWorkloadIndex != 0 ? -1073741811 : -2147483622;
      WdLogSingleEntry4(2LL, this, a3->FenceSubmissionValue, v12, 1842LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"TrackedWorkload 0x%I64x: Unable to find entry for pairID %d, returning 0x%I64x",
        (__int64)this,
        a3->FenceSubmissionValue,
        v12,
        1842LL,
        0LL);
      v6 = v12;
      goto LABEL_19;
    }
    *((_BYTE *)v11 + 120) = 1;
    *(_DWORD *)v11 = a3->FinishDeadline.VBlankOffsetHundredsNS;
    *((_DWORD *)v11 + 2) = HIDWORD(a3->FinishDeadline.AbsoluteQPC);
    *((_BYTE *)v11 + 4) = a3->BeginTrackedWorkloadIndex != 0;
    *((_BYTE *)v11 + 12) = a3->EndTrackedWorkloadIndex != 0;
    *((_QWORD *)v11 + 2) = a3->FenceCompletedValue;
    *((_QWORD *)v11 + 5) = *(_QWORD *)&a3[1].hDevice;
    *((_QWORD *)v11 + 6) = a3->CPUCalibrationTimestamp;
    *((LARGE_INTEGER *)v11 + 14) = KeQueryPerformanceCounter(0LL);
    if ( *((_BYTE *)v11 + 12) )
      goto LABEL_19;
    v15 = *((_DWORD *)this + 286);
    if ( !v15 )
    {
      v16 = *(_QWORD *)&a3->FinishDeadline.Type;
      *((_QWORD *)v11 + 3) = v16;
      if ( v16 - *((_QWORD *)v11 + 14) < 0 )
        TrackedWorkloadMonitor::Boost(
          (DXGTRACKEDWORKLOAD *)((char *)this + 328),
          (DXGTRACKEDWORKLOAD *)((char *)this + 232));
LABEL_12:
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_TrackedWorkloadDirectDeadline__private_reporting,
        0xF20B64u,
        v13.QuadPart,
        v14.QuadPart,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_ForceEnhancedMultiSessionRemoteVsyncEmulation_logged_traits,
        0);
      v6 = DXGTRACKEDWORKLOAD::EndTrackedWorkload(this, v17, v18, v19);
      goto LABEL_19;
    }
    if ( v15 != 1 )
    {
      v6 = -1073741811;
      WdLogSingleEntry3(2LL, *((int *)this + 286), -1073741811LL, 1881LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Unknown deadline type %d, returning 0x%I64x",
        *((int *)this + 286),
        -1073741811LL,
        1881LL,
        0LL,
        0LL);
      goto LABEL_19;
    }
    *((_BYTE *)v11 + 104) = 1;
    *((_QWORD *)v11 + 3) = 0LL;
    if ( (int)MonitoredFenceHelper::Update(
                (struct DXGTRACKEDWORKLOAD::WorkloadInstancePair *)((char *)v11 + 56),
                *((struct ADAPTER_RENDER ***)this + 2),
                *(_QWORD *)&a3->FinishDeadline.Type,
                a4) >= 0 )
      goto LABEL_12;
    v6 = -1073741811;
    v20 = 1874LL;
    WdLogSingleEntry2(2LL, -1073741811LL, 1874LL);
    v21 = L"Couldn't update fence, returning 0x%I64x";
LABEL_18:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v21, -1073741811LL, v20, 0LL, 0LL, 0LL);
    goto LABEL_19;
  }
  v6 = -2147483622;
  WdLogSingleEntry3(2LL, this, -2147483622LL, 1835LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"TrackedWorkload 0x%I64x: Unable to find available entry, returning 0x%I64x",
    (__int64)this,
    -2147483622LL,
    1835LL,
    0LL,
    0LL);
LABEL_19:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  return v6;
}
