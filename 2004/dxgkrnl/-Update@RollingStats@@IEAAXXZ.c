/*
 * XREFs of ?Update@RollingStats@@IEAAXXZ @ 0x1C006E5A0
 * Callers:
 *     ?ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@I@Z @ 0x1C006E004 (-ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@I@Z.c)
 *     ?GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z @ 0x1C006E108 (-GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z.c)
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C006E1D8 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 *     ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C006E420 (-ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C006E4F4 (-ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RollingStats::Update(RollingStats *this)
{
  double v2; // xmm0_8
  unsigned int v3; // r10d
  unsigned int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r9
  double v7; // xmm4_8
  __int64 v8; // rbx
  __int64 v9; // r11
  double v10; // xmm3_8
  double v11; // xmm2_8
  double v12; // xmm1_8
  double v13; // xmm1_8
  double v14; // xmm1_8
  __int64 v15; // r11
  double v16; // xmm2_8
  __int64 v17; // rbx
  __int64 v18; // r9

  if ( *((_BYTE *)this + 64) )
  {
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    v2 = 0.0;
    v3 = *((_DWORD *)this + 4);
    *((_QWORD *)this + 6) = 0x7FEFFFFFFFFFFFFFLL;
    v4 = v3;
    *((_QWORD *)this + 7) = 0xFFEFFFFFFFFFFFFFuLL;
    v5 = *((unsigned int *)this + 6);
    if ( (_DWORD)v5 )
    {
      v6 = *(_QWORD *)this;
      v7 = 0.0;
      v8 = *((_QWORD *)this + 1);
      v9 = (unsigned int)v5;
      v10 = DOUBLE_1_797693134862316e308;
      v11 = DOUBLE_N1_797693134862316e308;
      do
      {
        v12 = *(double *)(v6 + 8LL * v4);
        if ( v10 > v12 )
        {
          *((double *)this + 6) = v12;
          v10 = v12;
          v12 = *(double *)(v6 + 8LL * v4);
        }
        if ( v12 > v11 )
        {
          *((double *)this + 7) = v12;
          v11 = v12;
          v12 = *(double *)(v6 + 8LL * v4);
        }
        v13 = v12 * *(double *)(v8 + 8LL * v4);
        v4 = (v4 + 1) % (unsigned int)v5;
        v14 = v13 + v7;
        *((double *)this + 4) = v14;
        v7 = v14;
        --v9;
      }
      while ( v9 );
      v15 = *(_QWORD *)this;
      v16 = 0.0;
      v17 = *((_QWORD *)this + 1);
      v18 = v5;
      do
      {
        v2 = (*(double *)(v15 + 8LL * v3) - v14) * (*(double *)(v15 + 8LL * v3) - v14) * *(double *)(v17 + 8LL * v3)
           + v16;
        v3 = (v3 + 1) % (unsigned int)v5;
        *((double *)this + 5) = v2;
        v16 = v2;
        --v18;
      }
      while ( v18 );
    }
    *((_BYTE *)this + 64) = 0;
    *((double *)this + 5) = (double)(int)v5 * v2 / (double)((int)v5 - 1);
  }
}
