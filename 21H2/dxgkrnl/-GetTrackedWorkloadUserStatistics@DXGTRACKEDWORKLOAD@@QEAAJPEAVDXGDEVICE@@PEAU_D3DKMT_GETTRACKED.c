/*
 * XREFs of ?GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORKLOADSTATISTICS@@@Z @ 0x1C02BCAD8
 * Callers:
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C02BDDF0 (NtDxgkGetTrackedWorkloadStatistics.c)
 * Callees:
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?GetStats@CumulativeStats@@QEAAXPEAN000PEA_K@Z @ 0x1C006EF44 (-GetStats@CumulativeStats@@QEAAXPEAN000PEA_K@Z.c)
 *     ?IsSaturated@TrackedWorkloadMonitor@@QEAA_NXZ @ 0x1C006F188 (-IsSaturated@TrackedWorkloadMonitor@@QEAA_NXZ.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::GetTrackedWorkloadUserStatistics(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        struct _D3DKMT_GETTRACKEDWORKLOADSTATISTICS *a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  CumulativeStats *v7; // rcx
  double v8; // xmm0_8
  double v9; // xmm1_8
  __int64 v10; // rax
  double v11; // xmm0_8
  __int64 v12; // rax
  double v14; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-8h] BYREF
  double v16; // [rsp+60h] [rbp+20h] BYREF
  double v17; // [rsp+68h] [rbp+28h] BYREF
  double v18; // [rsp+78h] [rbp+38h] BYREF

  v17 = *(double *)&a2;
  memset(a3, 0, 0x250uLL);
  v7 = (DXGTRACKEDWORKLOAD *)((char *)this + 192);
  if ( *((_DWORD *)this + 48) )
  {
    v15 = 0LL;
    v17 = 0.0;
    v16 = 0.0;
    v18 = 0.0;
    v14 = 0.0;
    CumulativeStats::GetStats(v7, &v17, &v16, &v18, &v14, &v15);
    v8 = v16 * 10000.0;
    v9 = v18 * 10000.0;
    a3[9].MissedDeadlines = (unsigned int)(int)(v17 * 10000.0);
    v10 = (unsigned int)(int)v8;
    v11 = v14;
    *(_QWORD *)&a3[9].Flags.0 = v10;
    a3[9].DeadlineOffsetHundredsNS.Variance = (unsigned int)(int)v9;
    *(_QWORD *)&a3[10].hDevice = (unsigned int)(int)(v11 * 10000.0);
    a3[10].DeadlineOffsetHundredsNS.Mean = v15;
    a3[10].DeadlineOffsetHundredsNS.Minimum = *((_QWORD *)this + 38);
    LODWORD(a3[10].DeadlineOffsetHundredsNS.Maximum) = a3[10].DeadlineOffsetHundredsNS.Maximum & 0xFFFFFFFE | TrackedWorkloadMonitor::IsSaturated((DXGTRACKEDWORKLOAD *)((char *)this + 328));
  }
  else
  {
    LODWORD(a3[10].DeadlineOffsetHundredsNS.Maximum) = 2;
    v12 = WdLogNewEntry5_WdWarning(v7, v5, v6);
    *(_QWORD *)(v12 + 24) = 1767LL;
    WdLogEvent5_WdWarning(v12);
  }
  return 0LL;
}
