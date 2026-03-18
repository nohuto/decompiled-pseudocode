/*
 * XREFs of ?EndTrackedWorkload@DXGTRACKEDWORKLOAD@@IEAAJXZ @ 0x1C02BB370
 * Callers:
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C02BBEC0 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000B428 (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003942C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C006E0A8 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 *     ?Scale@RollingStats@@QEAAXN@Z @ 0x1C006E290 (-Scale@RollingStats@@QEAAXN@Z.c)
 *     ?SetEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAXI_N@Z @ 0x1C006E2D4 (-SetEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAXI_N@Z.c)
 *     ?DdiSetTrackedWorkloadPowerLevel@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL@@@Z @ 0x1C021E004 (-DdiSetTrackedWorkloadPowerLevel@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SETTRACKEDWORKLOADPOWERLE.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::EndTrackedWorkload(DXGTRACKEDWORKLOAD *this)
{
  unsigned int v1; // edi
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // r14d
  signed int v7; // r15d
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-40h]
  __int64 v14; // [rsp+28h] [rbp-38h]
  int v15; // [rsp+30h] [rbp-30h]
  unsigned int v16; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-1Ch] BYREF
  _DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL v18; // [rsp+48h] [rbp-18h] BYREF

  v1 = 0;
  LODWORD(v3) = 0;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_TrackedWorkloadDirectDeadline__private_reporting,
    0xF20B64u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_TrackedWorkload_logged_traits,
    0,
    v15);
  v17 = 0;
  v16 = 0;
  if ( TrackedWorkloadMonitor::GetTargetPowerLevel(
         (DXGTRACKEDWORKLOAD *)((char *)this + 328),
         (DXGTRACKEDWORKLOAD *)((char *)this + 232),
         &v17,
         &v16) )
  {
    v6 = v16;
    v7 = v17;
    v18.PowerLevel = v16;
    *(_QWORD *)&v18.EffectivePowerLevel = 0LL;
    if ( *((_DWORD *)this + 268) )
    {
      while ( 1 )
      {
        v8 = *((_QWORD *)this + v1 + 70);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
        {
          LODWORD(v14) = v6;
          LODWORD(v13) = v7;
          McTemplateK0pqq_EtwWriteTransfer(v4, &TrackedWorkloadSetPowerLevel, v5, *(_QWORD *)(v8 + 184), v13, v14);
        }
        v9 = ADAPTER_RENDER::DdiSetTrackedWorkloadPowerLevel(
               *(ADAPTER_RENDER **)(*(_QWORD *)(v8 + 16) + 16LL),
               *(void **)(v8 + 184),
               &v18);
        v3 = v9;
        if ( v9 < 0 )
          break;
        if ( ++v1 >= *((_DWORD *)this + 268) )
          goto LABEL_7;
      }
      v11 = WdLogNewEntry5_WdWarning(v4, v10, v5);
      *(_QWORD *)(v11 + 32) = 1710LL;
    }
    else
    {
LABEL_7:
      if ( v18.EffectivePowerLevel )
      {
        TrackedWorkloadMonitor::SetEffectivePowerLevel(
          (DXGTRACKEDWORKLOAD *)((char *)this + 328),
          v18.EffectivePowerLevel,
          v18.Flags & 1);
        RollingStats::Scale(
          (DXGTRACKEDWORKLOAD *)((char *)this + 232),
          (double)v7 / (double)(int)v18.EffectivePowerLevel);
        return (unsigned int)v3;
      }
      v3 = -1073741823LL;
      v11 = WdLogNewEntry5_WdWarning(v4, 0LL, v5);
      *(_QWORD *)(v11 + 32) = 1719LL;
    }
    *(_QWORD *)(v11 + 24) = v3;
    WdLogEvent5_WdWarning(v11);
  }
  return (unsigned int)v3;
}
