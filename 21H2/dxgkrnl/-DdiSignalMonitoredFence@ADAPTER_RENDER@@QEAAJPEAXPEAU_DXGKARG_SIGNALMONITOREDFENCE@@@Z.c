/*
 * XREFs of ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1C0222AD8
 * Callers:
 *     ?ADAPTER_RENDER_DdiSignalMonitoredFence@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1C004B930 (-ADAPTER_RENDER_DdiSignalMonitoredFence@@YAJPEAVADAPTER_RENDER@@PEAXPEAU_DXGKARG_SIGNALMONITORED.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0172460 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 *     ?SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z @ 0x1C0225456 (-SignalRenderKmMonitoredFence@DXGCONTEXT@@CAJPEAU_DXGKARG_RENDER@@PEAV1@PEAVDXGHWQUEUE@@_K@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A4D0 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSignalMonitoredFence(
        ADAPTER_RENDER *this,
        void *a2,
        struct _DXGKARG_SIGNALMONITOREDFENCE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGPROCESS *Current; // rax
  KIRQL CurrentIrql; // al
  __int64 v12; // r12
  struct DXGTHREAD *v13; // rdi
  struct DXGTHREAD *v14; // rax
  int v15; // r14d
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  KIRQL v19; // al
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v24; // [rsp+50h] [rbp-49h] BYREF
  __int64 v25; // [rsp+58h] [rbp-41h]
  char v26; // [rsp+60h] [rbp-39h]
  _BYTE v27[24]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v28[8]; // [rsp+80h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-11h] BYREF

  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 5134;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 5134);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 5134);
  if ( a3->KernelSubmissionType )
    Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  else
    Current = 0LL;
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v27, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  CurrentIrql = KeGetCurrentIrql();
  v12 = CurrentIrql;
  v13 = 0LL;
  if ( CurrentIrql < 2u && (v14 = DXGTHREAD::GetCurrent(), (v13 = v14) != 0LL) )
    v15 = *((_DWORD *)v14 + 12);
  else
    v15 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v28,
    *((struct DXGADAPTER **)this + 2));
  v16 = (*(int (__fastcall **)(void *, struct _DXGKARG_SIGNALMONITOREDFENCE *))(*((_QWORD *)this + 2) + 1336LL))(a2, a3);
  if ( v28[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v12 != KeGetCurrentIrql() )
  {
    v19 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v12, v19);
  }
  if ( v13 )
  {
    v18 = *((int *)v13 + 12);
    if ( (_DWORD)v18 != v15 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v13 + 12), v15, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, v17);
  v20[3] = v16;
  v20[4] = a2;
  v20[5] = a3->pDmaBuffer;
  v20[6] = a3->DmaSize;
  if ( (_DWORD)v16 != -1071775743 && (_DWORD)v16 != -1071775232 && (_DWORD)v16 )
  {
    WdLogSingleEntry1(2LL, v16);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v16,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v24);
  return (unsigned int)v16;
}
