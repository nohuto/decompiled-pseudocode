/*
 * XREFs of ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C015BBF4
 * Callers:
 *     ?ADAPTER_RENDER_DdiPatch@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PATCH@@@Z @ 0x1C00024E0 (-ADAPTER_RENDER_DdiPatch@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_PATCH@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C000B800 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C000B8C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C000BB00 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C017D000 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiPatch(ADAPTER_RENDER *this, const struct _DXGKARG_PATCH *a2, __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r15
  struct DXGTHREAD *v7; // rbx
  struct DXGTHREAD *Current; // rax
  int v9; // esi
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 DmaBufferPrivateDataSubmissionStartOffset; // rcx
  __int64 v18; // rdx
  _QWORD *v19; // rax
  __int64 PatchLocationListSize; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  KIRQL v26; // al
  int v27; // [rsp+50h] [rbp-29h] BYREF
  __int64 v28; // [rsp+58h] [rbp-21h]
  char v29; // [rsp+60h] [rbp-19h]
  _BYTE v30[8]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-9h] BYREF

  v27 = -1;
  v28 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v29 = 1;
    v27 = 5008;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5008);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 5008);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u && (Current = DXGTHREAD::GetCurrent(), (v7 = Current) != 0LL) )
    v9 = *((_DWORD *)Current + 12);
  else
    v9 = 0;
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v30,
    *((struct DXGADAPTER **)this + 2));
  v10 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_PATCH *))(*((_QWORD *)this + 2) + 512LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
          a2);
  if ( v30[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v26 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v26);
  }
  if ( v7 )
  {
    v12 = *((int *)v7 + 12);
    if ( (_DWORD)v12 != v9 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, v12, v9, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
  v13[3] = v10;
  v13[4] = a2->hDevice;
  v13[5] = a2->DmaBufferSegmentId;
  v13[6] = a2->DmaBufferPhysicalAddress.QuadPart;
  DmaBufferSize = a2->DmaBufferSize;
  v13[7] = DmaBufferSize;
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v15);
  v16[3] = a2->DmaBufferSubmissionStartOffset;
  v16[4] = a2->DmaBufferSubmissionEndOffset;
  v16[5] = a2->pDmaBufferPrivateData;
  v16[6] = a2->DmaBufferPrivateDataSize;
  DmaBufferPrivateDataSubmissionStartOffset = a2->DmaBufferPrivateDataSubmissionStartOffset;
  v16[7] = DmaBufferPrivateDataSubmissionStartOffset;
  v19 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferPrivateDataSubmissionStartOffset, v18);
  v19[3] = a2->DmaBufferPrivateDataSubmissionEndOffset;
  v19[4] = a2->pAllocationList;
  v19[5] = a2->AllocationListSize;
  v19[6] = a2->pPatchLocationList;
  PatchLocationListSize = a2->PatchLocationListSize;
  v19[7] = PatchLocationListSize;
  v22 = (_QWORD *)WdLogNewEntry5_WdTrace(PatchLocationListSize, v21);
  v22[3] = a2->PatchLocationListSubmissionStart;
  v22[4] = a2->PatchLocationListSubmissionLength;
  v22[5] = a2->SubmissionFenceId;
  v22[6] = a2->Flags.Value;
  if ( (_DWORD)v10 )
  {
    WdLogSingleEntry1(2LL, v10);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v10,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v27);
  return (unsigned int)v10;
}
