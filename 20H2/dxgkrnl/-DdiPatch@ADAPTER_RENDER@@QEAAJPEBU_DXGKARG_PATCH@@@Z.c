/*
 * XREFs of ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C0154C94
 * Callers:
 *     ?ADAPTER_RENDER_DdiPatch@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PATCH@@@Z @ 0x1C0016810 (-ADAPTER_RENDER_DdiPatch@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PATCH@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00F9DB0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPatch(ADAPTER_RENDER *this, const struct _DXGKARG_PATCH *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *v8; // rbx
  struct DXGTHREAD *Current; // rax
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // rcx
  _QWORD *v16; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rax
  __int64 DmaBufferPrivateDataSubmissionStartOffset; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 PatchLocationListSize; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 Value; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD *v38; // rax
  unsigned __int8 v39; // cl
  _QWORD *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // [rsp+20h] [rbp-60h] BYREF
  __int64 v44; // [rsp+28h] [rbp-58h]
  char v45; // [rsp+30h] [rbp-50h]
  _BYTE v46[8]; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-40h] BYREF

  v43 = -1;
  v44 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v45 = 1;
    v43 = 5008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5008);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 5008LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  v8 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(v6, v5), (v8 = Current) != 0LL) )
    v10 = *((_DWORD *)Current + 8);
  else
    v10 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v46,
    *((struct DXGADAPTER **)this + 2));
  v14 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_PATCH *))(*((_QWORD *)this + 2) + 424LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          a2);
  if ( v46[0] )
    KeUnstackDetachProcess(&ApcState);
  v15 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v15 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v11);
    v38[3] = 275LL;
    v38[4] = 16LL;
    v38[5] = this;
    v38[6] = CurrentIrql;
    v39 = KeGetCurrentIrql();
    v38[7] = v39;
    WdLogEvent5_WdCriticalError(v38);
  }
  if ( v8 && *((_DWORD *)v8 + 8) != v10 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v11);
    v40[3] = 275LL;
    v40[4] = 38LL;
    v41 = *((int *)v8 + 8);
    v40[7] = 0LL;
    v40[5] = v41;
    v40[6] = v10;
    WdLogEvent5_WdCriticalError(v40);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v11, v12, v13);
  v16[3] = v14;
  v16[4] = a2->hDevice;
  v16[5] = a2->DmaBufferSegmentId;
  v16[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  DmaBufferSize = a2->DmaBufferSize;
  v16[7] = DmaBufferSize;
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v18, v19, v20);
  v21[3] = a2->DmaBufferSubmissionStartOffset;
  v21[4] = a2->DmaBufferSubmissionEndOffset;
  v21[5] = a2->pDmaBufferPrivateData;
  v21[6] = a2->DmaBufferPrivateDataSize;
  DmaBufferPrivateDataSubmissionStartOffset = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v21[7] = DmaBufferPrivateDataSubmissionStartOffset;
  v26 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferPrivateDataSubmissionStartOffset, v23, v24, v25);
  v26[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v26[4] = a2->pAllocationList;
  v26[5] = a2->AllocationListSize;
  v26[6] = a2->pPatchLocationList;
  PatchLocationListSize = a2->PatchLocationListSize;
  v26[7] = PatchLocationListSize;
  v31 = (_QWORD *)WdLogNewEntry5_WdTrace(PatchLocationListSize, v28, v29, v30);
  v31[3] = a2->PatchLocationListSubmissionStart;
  v31[4] = a2->PatchLocationListSubmissionLength;
  v31[5] = a2->SubmissionFenceId;
  Value = a2->Flags.Value;
  v31[6] = Value;
  if ( (_DWORD)v14 )
  {
    v42 = WdLogNewEntry5_WdError(Value, v32);
    *(_QWORD *)(v42 + 24) = v14;
    WdLogEvent5_WdError(v42);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43, v34);
  if ( v45 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v43);
  return (unsigned int)v14;
}
