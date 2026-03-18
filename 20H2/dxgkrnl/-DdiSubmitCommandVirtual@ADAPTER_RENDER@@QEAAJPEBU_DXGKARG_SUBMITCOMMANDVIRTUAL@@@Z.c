/*
 * XREFs of ?DdiSubmitCommandVirtual@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C00F63A0
 * Callers:
 *     ?ADAPTER_RENDER_DdiSubmitCommandVirtual@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C0003E60 (-ADAPTER_RENDER_DdiSubmitCommandVirtual@@YAJPEAVADAPTER_RENDER@@PEBU_DXGKARG_SUBMITCOMMANDVIRTUA.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0003C88 (W32GetThreadWin32Thread.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0155EC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiSubmitCommandVirtual(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *ThreadProperty; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // edi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbp
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  _QWORD *v21; // rax
  __int64 DmaBufferSize; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 Value; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v33; // rax
  void *v34; // rax
  __int64 ThreadWin32Thread; // rax
  _QWORD *v36; // rax
  unsigned __int8 v37; // cl
  _QWORD *v38; // rax
  __int64 v39; // rax
  int v40; // [rsp+20h] [rbp-88h] BYREF
  __int64 v41; // [rsp+28h] [rbp-80h]
  char v42; // [rsp+30h] [rbp-78h]
  _BYTE v43[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v40 = -1;
  v41 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v42 = 1;
    v40 = 5063;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5063);
  }
  else
  {
    v42 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v40, 5063LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  ThreadProperty = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_32;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v33 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v33 + 24) = 507LL;
    WdLogEvent5_WdAssertion(v33);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5);
  CurrentProcess = PsGetCurrentProcess(v12, v11);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && ProcessDxgProcess
    && (v34 = *(void **)(ProcessDxgProcess + 88)) != 0LL
    && v34 != &gDxgkWin32kEngInterface
    && (ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread)) != 0 )
  {
    ThreadProperty = *(struct DXGTHREAD **)(ThreadWin32Thread + 80);
  }
  else
  {
    ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
    if ( !ThreadProperty )
    {
      ThreadProperty = DxgkThreadObjectCreateDxgThread();
      if ( !ThreadProperty )
        goto LABEL_32;
    }
    ObfDereferenceObject(ThreadProperty);
  }
  if ( ThreadProperty )
  {
    v15 = *((_DWORD *)ThreadProperty + 8);
    goto LABEL_11;
  }
LABEL_32:
  v15 = 0;
LABEL_11:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v43,
    *((struct DXGADAPTER **)this + 2));
  v17 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_SUBMITCOMMANDVIRTUAL *))(*((_QWORD *)this + 2) + 840LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          a2);
  if ( v43[0] )
    KeUnstackDetachProcess(&ApcState);
  v20 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v20 )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16);
    v36[3] = 275LL;
    v36[4] = 16LL;
    v36[5] = this;
    v36[6] = CurrentIrql;
    v37 = KeGetCurrentIrql();
    v36[7] = v37;
    WdLogEvent5_WdCriticalError(v36);
  }
  if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v15 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v20, v16);
    v38[3] = 275LL;
    v38[4] = 38LL;
    v38[5] = *((int *)ThreadProperty + 8);
    v38[6] = v15;
    v38[7] = 0LL;
    WdLogEvent5_WdCriticalError(v38);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v16, v18, v19);
  v21[3] = v17;
  v21[4] = a2->hContext;
  v21[5] = a2->DmaBufferVirtualAddress;
  DmaBufferSize = a2->DmaBufferSize;
  v21[6] = DmaBufferSize;
  v26 = (_QWORD *)WdLogNewEntry5_WdTrace(DmaBufferSize, v23, v24, v25);
  v26[3] = a2->pDmaBufferPrivateData;
  v26[4] = a2->DmaBufferPrivateDataSize;
  v26[5] = a2->SubmissionFenceId;
  v26[6] = a2->NodeOrdinal;
  Value = a2->Flags.Value;
  v26[7] = Value;
  if ( (_DWORD)v17 != -1073741811 && (_DWORD)v17 )
  {
    v39 = WdLogNewEntry5_WdError(Value, v27);
    *(_QWORD *)(v39 + 24) = v17;
    WdLogEvent5_WdError(v39);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v40, v29);
  if ( v42 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v40);
  return (unsigned int)v17;
}
