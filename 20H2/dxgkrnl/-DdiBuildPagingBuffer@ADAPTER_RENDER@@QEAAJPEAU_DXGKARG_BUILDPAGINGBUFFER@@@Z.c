/*
 * XREFs of ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00F5C90
 * Callers:
 *     ?ADAPTER_RENDER_DdiBuildPagingBuffer@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0003C70 (-ADAPTER_RENDER_DdiBuildPagingBuffer@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
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
 *     ?DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00F5EE0 (-DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0155EC0 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiBuildPagingBuffer(
        ADAPTER_RENDER *this,
        struct _DXGKARG_BUILDPAGINGBUFFER *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // r15
  struct DXGTHREAD *ThreadProperty; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  int CurrentProcessSessionId; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rbp
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // rsi
  ADAPTER_RENDER *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  void *v25; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  unsigned __int8 v29; // cl
  _QWORD *v30; // rax
  __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-88h] BYREF
  __int64 v33; // [rsp+28h] [rbp-80h]
  char v34; // [rsp+30h] [rbp-78h]
  _BYTE v35[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 5016;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5016);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 5016LL);
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  ThreadProperty = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_32;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v27 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v27 + 24) = 507LL;
    WdLogEvent5_WdAssertion(v27);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5);
  CurrentProcess = PsGetCurrentProcess(v12, v11);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && ProcessDxgProcess
    && (v25 = *(void **)(ProcessDxgProcess + 88)) != 0LL
    && v25 != &gDxgkWin32kEngInterface
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
    (DXGVALIDATIONPROCESSATTACH *)v35,
    *((struct DXGADAPTER **)this + 2));
  v17 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_BUILDPAGINGBUFFER *))(*((_QWORD *)this + 2) + 448LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          a2);
  if ( v35[0] )
    KeUnstackDetachProcess(&ApcState);
  v18 = (ADAPTER_RENDER *)KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v18 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v16);
    v28[3] = 275LL;
    v28[4] = 16LL;
    v28[5] = this;
    v28[6] = CurrentIrql;
    v29 = KeGetCurrentIrql();
    v28[7] = v29;
    WdLogEvent5_WdCriticalError(v28);
  }
  if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v15 )
  {
    v30 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v16);
    v30[3] = 275LL;
    v30[4] = 38LL;
    v30[5] = *((int *)ThreadProperty + 8);
    v30[6] = v15;
    v30[7] = 0LL;
    WdLogEvent5_WdCriticalError(v30);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  ADAPTER_RENDER::DxgkrnlLogBuildPagingBufferInformation(v18, v17, a2);
  if ( (_DWORD)v17 && (_DWORD)v17 != -1071775743 && (_DWORD)v17 != -1071775486 )
  {
    v31 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v31 + 24) = v17;
    WdLogEvent5_WdError(v31);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v21);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v32);
  return (unsigned int)v17;
}
