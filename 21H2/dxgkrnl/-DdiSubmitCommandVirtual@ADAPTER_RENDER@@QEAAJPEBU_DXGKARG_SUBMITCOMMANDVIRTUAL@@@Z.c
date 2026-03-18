/*
 * XREFs of ?DdiSubmitCommandVirtual@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C017C460
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommandVirtual@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C000BAE0 (-ADAPTER_RENDER_DdiSubmitCommandVirtual@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDVIRTUA.c)
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
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C018B028 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommandVirtual(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *a2,
        __int64 a3)
{
  KIRQL CurrentIrql; // al
  __int64 v6; // r15
  struct DXGTHREAD *v7; // rbx
  int v8; // ebp
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  KIRQL v19; // al
  struct DXGTHREAD *DxgThread; // [rsp+50h] [rbp-88h] BYREF
  int v21; // [rsp+58h] [rbp-80h] BYREF
  __int64 v22; // [rsp+60h] [rbp-78h]
  char v23; // [rsp+68h] [rbp-70h]
  _BYTE v24[8]; // [rsp+70h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-60h] BYREF

  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 5063;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5063);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 5063);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  CurrentIrql = KeGetCurrentIrql();
  v6 = CurrentIrql;
  v7 = 0LL;
  if ( CurrentIrql < 2u
    && (DxgThread = 0LL, (int)PsTlsGetValue(g_DxgkThreadTlsId, &DxgThread) >= 0)
    && ((v7 = DxgThread) != 0LL || (DxgThread = DxgkThreadObjectCreateDxgThread(), (v7 = DxgThread) != 0LL)) )
  {
    v8 = *((_DWORD *)v7 + 12);
  }
  else
  {
    v8 = 0;
  }
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v24,
    *((struct DXGADAPTER **)this + 2));
  v9 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *))(*((_QWORD *)this + 2) + 928LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 280LL),
         a2);
  if ( v24[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( (_BYTE)v6 != KeGetCurrentIrql() )
  {
    v19 = KeGetCurrentIrql();
    WdLogSingleEntry5(0LL, 275LL, 16LL, this, v6, v19);
  }
  if ( v7 )
  {
    v11 = *((int *)v7 + 12);
    if ( (_DWORD)v11 != v8 )
      WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)v7 + 12), v8, 0LL);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4484LL));
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
  v12[3] = v9;
  v12[4] = a2->hContext;
  v12[5] = a2->DmaBufferVirtualAddress;
  DmaBufferSize = a2->DmaBufferSize;
  v12[6] = DmaBufferSize;
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v14);
  v15[3] = a2->pDmaBufferPrivateData;
  v15[4] = a2->DmaBufferPrivateDataSize;
  v15[5] = a2->SubmissionFenceId;
  v15[6] = a2->NodeOrdinal;
  v15[7] = a2->Flags.Value;
  if ( (_DWORD)v9 != -1073741811 && (_DWORD)v9 )
  {
    WdLogSingleEntry1(2LL, v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Driver returned an invalid NTSTATUS code: 0x%I64x",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v21);
  return (unsigned int)v9;
}
