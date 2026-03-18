/*
 * XREFs of ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02B82D8
 * Callers:
 *     ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH@Z @ 0x1C02B8010 (-GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C02B9500 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C02B9A70 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?QPCFromGPUTimestamp@DXGTRACKEDWORKLOAD@@IEAA_N_K00PEA_K@Z @ 0x1C004C240 (-QPCFromGPUTimestamp@DXGTRACKEDWORKLOAD@@IEAA_N_K00PEA_K@Z.c)
 *     McTemplateK0xxqxxx_EtwWriteTransfer @ 0x1C004C328 (McTemplateK0xxqxxx_EtwWriteTransfer.c)
 *     ?Add@CumulativeStats@@QEAAXN@Z @ 0x1C006CDD0 (-Add@CumulativeStats@@QEAAXN@Z.c)
 *     ?Add@RollingStats@@QEAAXN@Z @ 0x1C006CE14 (-Add@RollingStats@@QEAAXN@Z.c)
 *     ?Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z @ 0x1C006CE3C (-Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z.c)
 *     ?GetCurrentPowerLevel@TrackedWorkloadMonitor@@QEAAIXZ @ 0x1C006CF18 (-GetCurrentPowerLevel@TrackedWorkloadMonitor@@QEAAIXZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0102370 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0141CE0 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  struct DXGDEVICE *v8; // rax
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // r15
  unsigned int v12; // r13d
  struct _KTHREAD **i; // rax
  unsigned int *v14; // rdi
  unsigned __int64 v15; // rax
  UINT v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  double v21; // xmm0_8
  __int64 v22; // rcx
  double v23; // xmm1_8
  __int64 v24; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // r12
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  double v31; // xmm0_8
  __int64 v32; // rax
  double v33; // xmm6_8
  double v34; // xmm7_8
  double v35; // xmm0_8
  int CurrentPowerLevel; // eax
  __int64 v37; // r8
  const EVENT_DESCRIPTOR *v38; // rdx
  struct RollingStats *v39; // r8
  _QWORD *v40; // rax
  __int64 v41; // [rsp+30h] [rbp-D8h]
  struct _D3DKMT_UNLOCK v42; // [rsp+58h] [rbp-B0h] BYREF
  DXGPUSHLOCK *v43[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct _D3DKMT_LOCK v44[3]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v45; // [rsp+158h] [rbp+50h] BYREF
  DXGDEVICE *v46; // [rsp+160h] [rbp+58h]
  struct COREDEVICEACCESS *v47; // [rsp+168h] [rbp+60h]
  unsigned __int64 v48; // [rsp+170h] [rbp+68h]

  v48 = a4;
  v47 = a3;
  v46 = a2;
  LODWORD(v5) = 0;
  v6 = a4;
  v8 = a2;
  if ( !*((_QWORD *)this + 39) )
    return 0LL;
  memset(&v44[0].PrivateDriverData, 0, sizeof(struct _D3DKMT_LOCK));
  v42 = 0LL;
  if ( a4 < *((_QWORD *)this + 12) )
    return (unsigned int)v5;
  v10 = a5;
  v11 = -1LL;
  v12 = 0;
  if ( !*((_DWORD *)this + 26) )
    goto LABEL_46;
  for ( i = (struct _KTHREAD **)((char *)this + 40); ; i = (struct _KTHREAD **)((char *)this + 40) )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43, i, 0);
    DXGPUSHLOCK::AcquireExclusive(v43[1]);
    v44[0].hDevice = 2;
    v14 = (unsigned int *)(*((_QWORD *)this + 4) + 136LL * v12);
    if ( !*((_BYTE *)v14 + 32) || *((_BYTE *)v14 + 104) )
      goto LABEL_42;
    v15 = *((_QWORD *)v14 + 2);
    if ( v15 <= v6 )
    {
      if ( !v10 )
      {
        v16 = *((_DWORD *)this + 21);
        LODWORD(v44[0].GpuVirtualAddress) |= 0xDu;
        v44[0].NumPages = v16;
        v17 = DXGDEVICE::Lock(v46, (struct _D3DKMT_LOCK *)&v44[0].PrivateDriverData, v47);
        v5 = v17;
        if ( v17 < 0 )
        {
          v40 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
          v40[3] = this;
          v40[4] = v5;
          v40[5] = 1411LL;
          WdLogEvent5_WdError(v40);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
          return (unsigned int)v5;
        }
        v10 = *(unsigned __int64 **)&v44[0].Flags.0;
      }
      v20 = v10[v14[2]] - v10[*v14];
      if ( v20 < 0 )
        v21 = (double)(int)(v20 & 1 | ((unsigned __int64)v20 >> 1))
            + (double)(int)(v20 & 1 | ((unsigned __int64)v20 >> 1));
      else
        v21 = (double)(int)v20;
      v22 = *((_QWORD *)this + 39);
      if ( v22 < 0 )
      {
        v24 = *((_QWORD *)this + 39) & 1LL | (*((_QWORD *)this + 39) >> 1);
        v23 = (double)(int)v24 + (double)(int)v24;
      }
      else
      {
        v23 = (double)(int)v22;
      }
      *(double *)(*((_QWORD *)v14 + 16) + 16LL) = v21 / v23 * 1000.0 + *(double *)(*((_QWORD *)v14 + 16) + 16LL);
      if ( *((_BYTE *)v14 + 12) )
        goto LABEL_41;
      v25 = v14[2];
      v26 = *((_QWORD *)v14 + 6);
      v27 = *((_QWORD *)v14 + 5);
      v45 = 0LL;
      if ( !DXGTRACKEDWORKLOAD::QPCFromGPUTimestamp(this, v27, v26, v10[v25], &v45) )
      {
LABEL_40:
        **((_BYTE **)v14 + 16) = 0;
LABEL_41:
        *(_BYTE *)(*v14 + *((_QWORD *)this + 11)) = 0;
        *(_BYTE *)(v14[2] + *((_QWORD *)this + 11)) = 0;
        *((_BYTE *)v14 + 32) = 0;
        goto LABEL_42;
      }
      v28 = v45;
      v29 = *((_QWORD *)this + 40);
      v30 = *((_QWORD *)v14 + 3) - v45;
      if ( v29 < 0 )
      {
        v32 = *((_QWORD *)this + 40) & 1LL | (*((_QWORD *)this + 40) >> 1);
        v31 = (double)(int)v32 + (double)(int)v32;
      }
      else
      {
        v31 = (double)(int)v29;
      }
      v33 = (double)(int)v30 / v31 * 1000.0;
      if ( *((_BYTE *)v14 + 120) )
      {
        *((_QWORD *)this + 38) += v30 >> 63;
        CumulativeStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 192), v33);
      }
      RollingStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 120), *(double *)(*((_QWORD *)v14 + 16) + 16LL));
      v34 = DOUBLE_300_0;
      v35 = *(double *)(*((_QWORD *)v14 + 16) + 16LL) + v33;
      if ( v35 > 0.0 )
        v34 = *(double *)(*((_QWORD *)v14 + 16) + 16LL) * 100.0 / v35;
      if ( bTracingEnabled )
      {
        KeQueryPerformanceCounter(0LL);
        if ( v33 >= 0.0 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
          {
            CurrentPowerLevel = TrackedWorkloadMonitor::GetCurrentPowerLevel((DXGTRACKEDWORKLOAD *)((char *)this + 328));
            v38 = (const EVENT_DESCRIPTOR *)&TrackedWorkloadDeadline;
            goto LABEL_36;
          }
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
        {
          CurrentPowerLevel = TrackedWorkloadMonitor::GetCurrentPowerLevel((DXGTRACKEDWORKLOAD *)((char *)this + 328));
          v38 = (const EVENT_DESCRIPTOR *)&TrackedWorkloadDeadlineMissed;
LABEL_36:
          LODWORD(v41) = CurrentPowerLevel;
          McTemplateK0xxqxxx_EtwWriteTransfer(
            *((_QWORD *)v14 + 14),
            v38,
            v37,
            this,
            v37,
            v41,
            *((_QWORD *)v14 + 14),
            *((_QWORD *)v14 + 3),
            v28);
        }
      }
      RollingStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 232), fmin(300.0, fmax(5.0, v34)));
      if ( v33 < 0.0 )
        TrackedWorkloadMonitor::Boost((DXGTRACKEDWORKLOAD *)((char *)this + 328), v39);
      v6 = v48;
      goto LABEL_40;
    }
    v11 = *((_QWORD *)this + 12);
    if ( v11 >= v15 )
      v11 = *((_QWORD *)v14 + 2);
LABEL_42:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v43);
    if ( ++v12 >= *((_DWORD *)this + 26) )
      break;
  }
  v8 = v46;
LABEL_46:
  if ( !v10
    || !*((_DWORD *)this + 21)
    || (v42.NumAllocations = 1,
        v42.phAllocations = &v44[0].NumPages,
        LODWORD(v5) = DXGDEVICE::Unlock(v8, &v42, 0LL),
        (int)v5 >= 0) )
  {
    if ( v11 != -1LL )
      *((_QWORD *)this + 12) = v11;
  }
  return (unsigned int)v5;
}
