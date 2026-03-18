/*
 * XREFs of ?DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C021C980
 * Callers:
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EDCB0 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00098E0 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPresentToHwQueue(ADAPTER_RENDER *this, void *a2, struct _DXGKARG_PRESENT *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *v12; // rdi
  struct DXGTHREAD *v13; // rax
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 (__fastcall *v18)(void *, struct _DXGKARG_PRESENT *); // rax
  int v19; // ebx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int8 v22; // cl
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 DmaSize; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  int v33; // [rsp+20h] [rbp-49h] BYREF
  __int64 v34; // [rsp+28h] [rbp-41h]
  char v35; // [rsp+30h] [rbp-39h]
  _BYTE v36[24]; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v37[8]; // [rsp+50h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+58h] [rbp-11h] BYREF

  v33 = -1;
  v34 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v35 = 1;
    v33 = 5135;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 5135);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 5135LL);
  Current = DXGPROCESS::GetCurrent(v7, v6);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v36, Current);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v12 = 0LL;
  if ( CurrentIrql < 2u && (v13 = DXGTHREAD::GetCurrent(v10, v9), (v12 = v13) != 0LL) )
    v14 = *((_DWORD *)v13 + 8);
  else
    v14 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v37,
    *((struct DXGADAPTER **)this + 2));
  v18 = *(__int64 (__fastcall **)(void *, struct _DXGKARG_PRESENT *))(*((_QWORD *)this + 2) + 1288LL);
  if ( v18 )
    v19 = v18(a2, a3);
  else
    v19 = -1073741822;
  if ( v37[0] )
    KeUnstackDetachProcess(&ApcState);
  v20 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v20 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v15);
    v21[3] = 275LL;
    v21[4] = 16LL;
    v21[5] = this;
    v21[6] = CurrentIrql;
    v22 = KeGetCurrentIrql();
    v21[7] = v22;
    WdLogEvent5_WdCriticalError(v21);
  }
  if ( v12 && *((_DWORD *)v12 + 8) != v14 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v15);
    v23[3] = 275LL;
    v23[4] = 38LL;
    v24 = *((int *)v12 + 8);
    v23[7] = 0LL;
    v23[5] = v24;
    v23[6] = v14;
    WdLogEvent5_WdCriticalError(v23);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v25 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v15, v16, v17);
  v25[3] = v19;
  v25[4] = a2;
  v25[5] = a3->SubRectCnt;
  v25[6] = a3->pDmaBuffer;
  DmaSize = a3->DmaSize;
  v25[7] = DmaSize;
  if ( v19 <= -1073741670 )
  {
    if ( v19 == -1073741670
      || v19 == -1073741822
      || v19 == -1073741816
      || v19 == -1073741801
      || v19 == -1073741795
      || v19 == -1073741674 )
    {
      goto LABEL_32;
    }
LABEL_31:
    v28 = WdLogNewEntry5_WdError(DmaSize, v26);
    *(_QWORD *)(v28 + 24) = v19;
    WdLogEvent5_WdError(v28);
    goto LABEL_32;
  }
  if ( v19 != -1071775743 && v19 != -1071775736 && v19 != -1071775232 && v19 )
    goto LABEL_31;
LABEL_32:
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v29);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v33);
  return (unsigned int)v19;
}
