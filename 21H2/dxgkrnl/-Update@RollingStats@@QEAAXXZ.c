/*
 * XREFs of ?Update@RollingStats@@QEAAXXZ @ 0x1C0082120
 * Callers:
 *     ?ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@PEBUTrackedWorkloadStateInfo@@I@Z @ 0x1C0081B58 (-ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@PEBUTrackedW.c)
 *     ?GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z @ 0x1C0081C78 (-GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z.c)
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1C0081D48 (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 *     ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C0081FA8 (-ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1C0082078 (-ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RollingStats::Update(RollingStats *this)
{
  unsigned int v2; // r10d
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // r9
  double v6; // xmm3_8
  __int64 v7; // rbx
  double v8; // xmm4_8
  double v9; // xmm2_8
  __int64 v10; // r11
  double v11; // xmm1_8
  double v12; // xmm0_8
  double v13; // xmm0_8
  __int64 v14; // r11
  __int64 v15; // r9
  double v16; // xmm0_8

  if ( *((_BYTE *)this + 64) )
  {
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
    v2 = *((_DWORD *)this + 4);
    v3 = v2;
    *((_QWORD *)this + 6) = 0x7FEFFFFFFFFFFFFFLL;
    *((_QWORD *)this + 7) = 0xFFEFFFFFFFFFFFFFuLL;
    v4 = *((unsigned int *)this + 6);
    if ( (_DWORD)v4 )
    {
      v5 = *(_QWORD *)this;
      v6 = 0.0;
      v7 = *((_QWORD *)this + 1);
      v8 = 0.0;
      v9 = DOUBLE_1_797693134862316e308;
      v10 = (unsigned int)v4;
      v11 = DOUBLE_N1_797693134862316e308;
      do
      {
        v12 = *(double *)(v5 + 8LL * v3);
        if ( v9 > v12 )
        {
          *((double *)this + 6) = v12;
          v9 = v12;
          v12 = *(double *)(v5 + 8LL * v3);
        }
        if ( v12 > v11 )
        {
          *((double *)this + 7) = v12;
          v11 = v12;
          v12 = *(double *)(v5 + 8LL * v3);
        }
        v13 = v12 * *(double *)(v7 + 8LL * v3);
        v3 = (v3 + 1) % (unsigned int)v4;
        v8 = v8 + v13;
        *((double *)this + 4) = v8;
        --v10;
      }
      while ( v10 );
      v14 = v5;
      v15 = v4;
      do
      {
        v16 = (*(double *)(v14 + 8LL * v2) - v8) * (*(double *)(v14 + 8LL * v2) - v8) * *(double *)(v7 + 8LL * v2) + v6;
        v2 = (v2 + 1) % (unsigned int)v4;
        *((double *)this + 5) = v16;
        v6 = v16;
        --v15;
      }
      while ( v15 );
    }
    else
    {
      v16 = 0.0;
    }
    *((_BYTE *)this + 64) = 0;
    *((double *)this + 5) = (double)(int)v4 * v16 / (double)((int)v4 - 1);
  }
}
