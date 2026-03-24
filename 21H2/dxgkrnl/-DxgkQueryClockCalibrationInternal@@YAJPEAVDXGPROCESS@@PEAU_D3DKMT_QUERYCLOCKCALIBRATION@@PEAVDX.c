/*
 * XREFs of ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C00D6A20
 * Callers:
 *     ?VmBusQueryClockCalibrationCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DAA70 (-VmBusQueryClockCalibrationCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusQueryClockCalibration@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02453B0 (-VmBusQueryClockCalibration@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004130 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007578 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007658 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009DE0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C003C1F8 (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     ?IsClockCalibrationSupportedv2@ADAPTER_RENDER@@QEBAEXZ @ 0x1C003EF58 (-IsClockCalibrationSupportedv2@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C00F7CD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@@Z @ 0x1C024ABE4 (-VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUE.c)
 */

__int64 __fastcall DxgkQueryClockCalibrationInternal(
        struct DXGPROCESS *a1,
        struct _D3DKMT_QUERYCLOCKCALIBRATION *a2,
        struct DXGADAPTER *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  int PairingAdapters; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  struct DXGADAPTER *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 PhysicalAdapterIndex; // rax
  __int64 v21; // rax
  __int64 NodeOrdinal; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int ClockCalibration; // eax
  __int64 v28; // rdx
  ADAPTER_RENDER *v29; // rcx
  struct _DXGK_GPUCLOCKDATA *v30; // r9
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  struct DXGADAPTER *v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+50h] [rbp-B0h]
  char v38; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v40[144]; // [rsp+70h] [rbp-90h] BYREF

  v36 = -1;
  v37 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 2125;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2125);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 2125LL);
  if ( a3 )
  {
    v35 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(a3, 0, &v35, &v39, 0LL, 0LL, 0);
    if ( PairingAdapters < 0 )
    {
      v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v14 + 24) = a3;
      WdLogEvent5_WdWarning(v14);
      goto LABEL_29;
    }
    v15 = v35;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v40, v35, 0LL);
    PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v40, 0LL);
    DXGADAPTER::ReleaseReference(v15);
    if ( PairingAdapters < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
      v19[3] = v15;
LABEL_25:
      WdLogEvent5_WdWarning(v19);
      goto LABEL_28;
    }
    PhysicalAdapterIndex = a2->PhysicalAdapterIndex;
    if ( (unsigned int)PhysicalAdapterIndex >= *((_DWORD *)v15 + 70) )
    {
      v21 = WdLogNewEntry5_WdWarning(v17, v16, v18);
      NodeOrdinal = a2->PhysicalAdapterIndex;
LABEL_15:
      *(_QWORD *)(v21 + 24) = NodeOrdinal;
      WdLogEvent5_WdWarning(v21);
      PairingAdapters = -1073741811;
LABEL_28:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40, v24);
      goto LABEL_29;
    }
    v23 = *(unsigned __int16 *)(360 * PhysicalAdapterIndex + *((_QWORD *)v15 + 323));
    if ( a2->NodeOrdinal >= (unsigned int)v23 )
    {
      v21 = WdLogNewEntry5_WdWarning(v23, v16, v18);
      NodeOrdinal = a2->NodeOrdinal;
      goto LABEL_15;
    }
    *(_OWORD *)&a2->ClockData.GpuFrequency = 0LL;
    a2->ClockData.CpuClockCounter = 0LL;
    a2->ClockData.Flags.Value = 0;
    if ( *((_BYTE *)v15 + 209) )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v23, v16) + 408) < 0x15u )
      {
        PairingAdapters = -1073741822;
LABEL_23:
        if ( PairingAdapters >= 0 )
        {
          PairingAdapters = 0;
          goto LABEL_28;
        }
        v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26);
        v19[3] = PairingAdapters;
        v19[4] = a2->NodeOrdinal;
        v19[5] = a2->PhysicalAdapterIndex;
        goto LABEL_25;
      }
      ClockCalibration = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryClockCalibration(
                           (struct DXGADAPTER *)((char *)v15 + 4240),
                           a1,
                           a2);
    }
    else
    {
      if ( !ADAPTER_RENDER::IsClockCalibrationSupportedv2(*((ADAPTER_RENDER **)v15 + 338)) )
      {
        v31 = WdLogNewEntry5_WdError(v29, v28);
        *(_QWORD *)(v31 + 24) = 9566LL;
        WdLogEvent5_WdError(v31);
        PairingAdapters = -1073741823;
        goto LABEL_28;
      }
      ClockCalibration = ADAPTER_RENDER::DdiCalibrateGpuClock(v29, a2->NodeOrdinal, a2->PhysicalAdapterIndex, v30);
    }
    PairingAdapters = ClockCalibration;
    goto LABEL_23;
  }
  v8 = WdLogNewEntry5_WdError(v7, v6);
  *(_QWORD *)(v8 + 24) = a1;
  *(_QWORD *)(v8 + 32) = a2->hAdapter;
  WdLogEvent5_WdError(v8);
  PairingAdapters = -1073741811;
LABEL_29:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v9);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v36);
  return (unsigned int)PairingAdapters;
}
