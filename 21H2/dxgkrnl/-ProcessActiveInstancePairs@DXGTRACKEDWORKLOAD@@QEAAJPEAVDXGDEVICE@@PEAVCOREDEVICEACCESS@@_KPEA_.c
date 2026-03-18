/*
 * XREFs of ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C03451D4
 * Callers:
 *     ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH@Z @ 0x1C0344EF4 (-GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAIPEAH.c)
 *     NtDxgkGetTrackedWorkloadStatistics @ 0x1C0346A50 (NtDxgkGetTrackedWorkloadStatistics.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0346F60 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?QPCFromGPUTimestamp@DXGTRACKEDWORKLOAD@@IEAA_N_K00PEA_K@Z @ 0x1C005A170 (-QPCFromGPUTimestamp@DXGTRACKEDWORKLOAD@@IEAA_N_K00PEA_K@Z.c)
 *     McTemplateK0pxqqxxxdx_EtwWriteTransfer @ 0x1C005A9C0 (McTemplateK0pxqqxxxdx_EtwWriteTransfer.c)
 *     ?Add@CumulativeStats@@QEAAXN@Z @ 0x1C0081AA8 (-Add@CumulativeStats@@QEAAXN@Z.c)
 *     ?Add@RollingStats@@QEAAXN@Z @ 0x1C0081AEC (-Add@RollingStats@@QEAAXN@Z.c)
 *     ?Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z @ 0x1C0081B14 (-Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z.c)
 *     ?GetCurrentEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAIXZ @ 0x1C0081C18 (-GetCurrentEffectivePowerLevel@TrackedWorkloadMonitor@@QEAAIXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkLock2Internal @ 0x1C0317934 (DxgkLock2Internal.c)
 *     DxgkUnlock2Internal @ 0x1C0317BFC (DxgkUnlock2Internal.c)
 */

__int64 __fastcall DXGTRACKEDWORKLOAD::ProcessActiveInstancePairs(
        DXGTRACKEDWORKLOAD *this,
        struct DXGDEVICE *a2,
        struct COREDEVICEACCESS *a3,
        unsigned __int64 a4,
        unsigned __int64 *a5)
{
  __int64 v5; // r15
  unsigned __int64 *pData; // rsi
  unsigned int v10; // r12d
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int *v16; // rbx
  unsigned __int64 v17; // rax
  struct DXGPROCESS *Current; // rax
  int v19; // eax
  __int64 v20; // rcx
  double v21; // xmm0_8
  __int64 v22; // rcx
  double v23; // xmm1_8
  __int64 v24; // rax
  __int64 v25; // r9
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  double v30; // xmm0_8
  __int64 v31; // rax
  double v32; // xmm6_8
  double v33; // xmm2_8
  double v34; // xmm1_8
  double v35; // xmm7_8
  int CurrentEffectivePowerLevel; // eax
  __int64 v37; // r8
  const EVENT_DESCRIPTOR *v38; // rdx
  __int64 v39; // rcx
  struct DXGPROCESS *v40; // rax
  __int64 v41; // [rsp+30h] [rbp-A9h]
  __int64 v42; // [rsp+38h] [rbp-A1h]
  __int64 v43; // [rsp+58h] [rbp-81h]
  __int64 v44; // [rsp+60h] [rbp-79h]
  struct _D3DKMT_UNLOCK2 v45; // [rsp+68h] [rbp-71h] BYREF
  struct _D3DKMT_LOCK2 v46; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v47[8]; // [rsp+88h] [rbp-51h] BYREF
  DXGPUSHLOCK *v48; // [rsp+90h] [rbp-49h]
  int v49; // [rsp+98h] [rbp-41h]
  unsigned __int64 v50; // [rsp+138h] [rbp+5Fh] BYREF
  struct COREDEVICEACCESS *v51; // [rsp+148h] [rbp+6Fh]
  unsigned __int64 v52; // [rsp+150h] [rbp+77h]

  v52 = a4;
  v51 = a3;
  LODWORD(v5) = 0;
  if ( !*((_QWORD *)this + 39) )
    return 0LL;
  v45 = 0LL;
  memset(&v46, 0, sizeof(v46));
  if ( a4 < *((_QWORD *)this + 12) )
    return (unsigned int)v5;
  pData = a5;
  v10 = 0;
  v11 = -1LL;
  LODWORD(v51) = 0;
  if ( *((_DWORD *)this + 26) )
  {
    while ( 1 )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v47, (struct _KTHREAD **)this + 5, 0);
      DXGPUSHLOCK::AcquireExclusive(v48);
      v49 = 2;
      v16 = (unsigned int *)(*((_QWORD *)this + 4) + 136LL * v10);
      if ( !*((_BYTE *)v16 + 32) || *((_BYTE *)v16 + 104) )
        goto LABEL_41;
      v17 = *((_QWORD *)v16 + 2);
      if ( v17 > v52 )
      {
        v11 = *((_QWORD *)this + 12);
        if ( v11 >= v17 )
          v11 = *((_QWORD *)v16 + 2);
        goto LABEL_41;
      }
      if ( !pData )
      {
        v46.hDevice = *((_DWORD *)a2 + 109);
        v46.hAllocation = *((_DWORD *)this + 21);
        Current = DXGPROCESS::GetCurrent(v13, v12, v14, v15);
        v19 = DxgkLock2Internal(a2, *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL), (__int64)Current, &v46);
        v5 = v19;
        if ( v19 < 0 )
        {
          WdLogSingleEntry3(2LL, this, v19, 1484LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"TrackedWorkload 0x%I64x: Unable to lock query result buffer, returning 0x%I64x",
            (__int64)this,
            v5,
            1484LL,
            0LL,
            0LL);
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
          return (unsigned int)v5;
        }
        pData = (unsigned __int64 *)v46.pData;
      }
      v20 = pData[v16[2]] - pData[*v16];
      v21 = v20 < 0
          ? (double)(int)(v20 & 1 | ((unsigned __int64)v20 >> 1))
          + (double)(int)(v20 & 1 | ((unsigned __int64)v20 >> 1))
          : (double)(int)v20;
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
      *(double *)(*((_QWORD *)v16 + 16) + 16LL) = v21 / v23 * 1000.0 + *(double *)(*((_QWORD *)v16 + 16) + 16LL);
      if ( !*((_BYTE *)v16 + 12) )
        break;
LABEL_40:
      *(_BYTE *)(*v16 + *((_QWORD *)this + 11)) = 0;
      *(_BYTE *)(v16[2] + *((_QWORD *)this + 11)) = 0;
      *((_BYTE *)v16 + 32) = 0;
LABEL_41:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
      LODWORD(v51) = ++v10;
      if ( v10 >= *((_DWORD *)this + 26) )
        goto LABEL_42;
    }
    v25 = v16[2];
    v26 = *((_QWORD *)v16 + 6);
    v27 = *((_QWORD *)v16 + 5);
    v50 = 0LL;
    if ( !DXGTRACKEDWORKLOAD::QPCFromGPUTimestamp(this, v27, v26, pData[v25], &v50) )
    {
LABEL_39:
      **((_BYTE **)v16 + 16) = 0;
      goto LABEL_40;
    }
    v28 = *((_QWORD *)v16 + 3) - v50;
    v29 = *((_QWORD *)this + 40);
    if ( v29 < 0 )
    {
      v31 = *((_QWORD *)this + 40) & 1LL | (*((_QWORD *)this + 40) >> 1);
      v30 = (double)(int)v31 + (double)(int)v31;
    }
    else
    {
      v30 = (double)(int)v29;
    }
    v32 = (double)(int)v28 / v30 * 1000.0;
    if ( *((_BYTE *)v16 + 120) )
    {
      *((_QWORD *)this + 38) += v28 >> 63;
      CumulativeStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 192), v32);
    }
    RollingStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 120), *(double *)(*((_QWORD *)v16 + 16) + 16LL));
    v33 = DOUBLE_300_0;
    v34 = *(double *)(*((_QWORD *)v16 + 16) + 16LL);
    if ( v34 + v32 > 0.0 )
      v33 = v34 * 100.0 / (v34 + v32);
    v35 = fmin(300.0, fmax(5.0, v33));
    RollingStats::Add((DXGTRACKEDWORKLOAD *)((char *)this + 232), v35);
    if ( bTracingEnabled )
    {
      KeQueryPerformanceCounter(0LL);
      if ( v32 >= 0.0 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
        {
          CurrentEffectivePowerLevel = TrackedWorkloadMonitor::GetCurrentEffectivePowerLevel((DXGTRACKEDWORKLOAD *)((char *)this + 328));
          v44 = *((_QWORD *)this + 38);
          LODWORD(v43) = (int)v32;
          v38 = (const EVENT_DESCRIPTOR *)&TrackedWorkloadDeadline;
          goto LABEL_35;
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      {
        CurrentEffectivePowerLevel = TrackedWorkloadMonitor::GetCurrentEffectivePowerLevel((DXGTRACKEDWORKLOAD *)((char *)this + 328));
        v44 = *((_QWORD *)this + 38);
        LODWORD(v43) = (int)v32;
        v38 = (const EVENT_DESCRIPTOR *)&TrackedWorkloadDeadlineMissed;
LABEL_35:
        LODWORD(v42) = (int)v35;
        LODWORD(v41) = CurrentEffectivePowerLevel;
        McTemplateK0pxqqxxxdx_EtwWriteTransfer(
          *((_QWORD *)v16 + 14),
          v38,
          v37,
          this,
          v37,
          v41,
          v42,
          *((_QWORD *)v16 + 14),
          *((_QWORD *)v16 + 3),
          v50,
          v43,
          v44,
          v45,
          *(_OWORD *)&v46.hDevice);
      }
    }
    if ( v32 < 0.0 )
      TrackedWorkloadMonitor::Boost(
        (DXGTRACKEDWORKLOAD *)((char *)this + 328),
        (DXGTRACKEDWORKLOAD *)((char *)this + 232));
    v10 = (unsigned int)v51;
    goto LABEL_39;
  }
LABEL_42:
  if ( !pData
    || (v39 = *((unsigned int *)this + 21), !(_DWORD)v39)
    || (v45.hDevice = *((_DWORD *)a2 + 109),
        v45.hAllocation = v39,
        v40 = DXGPROCESS::GetCurrent(v39, (__int64)a2, (__int64)a3, a4),
        LODWORD(v5) = DxgkUnlock2Internal(a2, *(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL), (__int64)v40, &v45),
        (int)v5 >= 0) )
  {
    if ( v11 != -1LL )
      *((_QWORD *)this + 12) = v11;
  }
  return (unsigned int)v5;
}
