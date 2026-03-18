/*
 * XREFs of ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C003B40C
 * Callers:
 *     ?PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ @ 0x1C003B02C (-PerformClockCalibration@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?ADAPTER_RENDER_DdiCalibrateGpuClock@@YAJPEAVADAPTER_RENDER@@IIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C0041360 (-ADAPTER_RENDER_DdiCalibrateGpuClock@@YAJPEAVADAPTER_RENDER@@IIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C00D57F8 (-DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDX.c)
 *     DxgkQueryClockCalibration @ 0x1C0225290 (DxgkQueryClockCalibration.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCalibrateGpuClock(
        ADAPTER_RENDER *this,
        unsigned int a2,
        __int64 a3,
        struct _DXGK_GPUCLOCKDATA *a4)
{
  unsigned int v5; // edi
  __int64 v7; // r13
  unsigned __int8 CurrentIrql; // r14
  struct DXGTHREAD *v9; // rbx
  struct DXGTHREAD *Current; // rax
  int v11; // esi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rcx
  _QWORD *v15; // rax
  unsigned __int8 v16; // cl
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v27; // [rsp+30h] [rbp-49h]
  int v28; // [rsp+38h] [rbp-41h] BYREF
  __int64 v29; // [rsp+40h] [rbp-39h]
  char v30; // [rsp+48h] [rbp-31h]
  _BYTE v31[8]; // [rsp+50h] [rbp-29h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-21h] BYREF

  v28 = -1;
  v29 = 0LL;
  v5 = a3;
  v27 = a3;
  v7 = a2;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v30 = 1;
    v28 = 5056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5056);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 5056LL);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v9 = Current) != 0LL) )
    v11 = *((_DWORD *)Current + 8);
  else
    v11 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v31,
    *((struct DXGADAPTER **)this + 2));
  v13 = (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD, struct _DXGK_GPUCLOCKDATA *))(*((_QWORD *)this + 2) + 816LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          (unsigned int)v7,
          v5,
          a4);
  if ( v31[0] )
    KeUnstackDetachProcess(&ApcState);
  v14 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v14 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v12);
    v15[3] = 275LL;
    v15[4] = 16LL;
    v15[5] = this;
    v15[6] = CurrentIrql;
    v16 = KeGetCurrentIrql();
    v15[7] = v16;
    WdLogEvent5_WdCriticalError(v15);
  }
  if ( v9 && *((_DWORD *)v9 + 8) != v11 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v12);
    v17[3] = 275LL;
    v17[4] = 38LL;
    v18 = *((int *)v9 + 8);
    v17[7] = 0LL;
    v17[5] = v18;
    v17[6] = v11;
    WdLogEvent5_WdCriticalError(v17);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v19 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v19[5] = v27;
  v19[3] = v13;
  v19[4] = v7;
  v19[6] = a4->GpuFrequency;
  WdLogEvent5_WdEvent(v19);
  v20 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v20 + 24) = a4->GpuClockCounter;
  *(_QWORD *)(v20 + 32) = a4->CpuClockCounter;
  WdLogEvent5_WdEvent(v20);
  if ( (_DWORD)v13 != -1073741811 && (_DWORD)v13 )
  {
    v23 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v23 + 24) = v13;
    WdLogEvent5_WdError(v23);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v21);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v28);
  return (unsigned int)v13;
}
