/*
 * XREFs of ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C0127EA0
 * Callers:
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C01032D0 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0126F74 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0127C48 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0227A08 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0003C88 (W32GetThreadWin32Thread.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0003D20 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0003DE0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0003E80 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4MOCKDRIVERSTATE_VALIDATE_TYPE@@PEAX@Z @ 0x1C0009A0C (-ValidateMockDriverState@MOCKDRIVERSTATE@@QEAAXW4MOCKDRIVERSTATE_VALIDATE_TYPE@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0157070 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDestroyAllocation(
        ADAPTER_RENDER *this,
        const struct _DXGKARG_DESTROYALLOCATION *a2,
        __int64 a3)
{
  char v3; // r14
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  MOCKDRIVERSTATE *v21; // rcx
  const HANDLE *pAllocationList; // rax
  unsigned __int8 CurrentIrql; // r12
  struct DXGTHREAD *ThreadProperty; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  int CurrentProcessSessionId; // r14d
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r14
  __int64 v35; // rcx
  _QWORD *v36; // rax
  const HANDLE *v37; // rcx
  HANDLE v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  void *v43; // rax
  __int64 ThreadWin32Thread; // rax
  int v45; // r9d
  struct DXGTHREAD *Current; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v49; // rax
  unsigned __int8 v50; // cl
  _QWORD *v51; // rax
  __int64 v52; // rax
  int v53; // [rsp+28h] [rbp-69h]
  int v54; // [rsp+30h] [rbp-61h] BYREF
  __int64 v55; // [rsp+38h] [rbp-59h]
  char v56; // [rsp+40h] [rbp-51h]
  _DWORD v57[2]; // [rsp+48h] [rbp-49h] BYREF
  const HANDLE *v58; // [rsp+50h] [rbp-41h]
  char v59; // [rsp+58h] [rbp-39h]
  int v60; // [rsp+59h] [rbp-38h]
  __int16 v61; // [rsp+5Dh] [rbp-34h]
  char v62; // [rsp+5Fh] [rbp-32h]
  __int64 v63; // [rsp+60h] [rbp-31h]
  __int128 v64; // [rsp+68h] [rbp-29h]
  char v65[8]; // [rsp+78h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-11h] BYREF

  v3 = a3;
  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
    return 0LL;
  v6 = 0;
  v54 = -1;
  v55 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v56 = 1;
    v54 = 5005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 5005);
  }
  else
  {
    v56 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v54, 5005LL);
  CurrentProcess = PsGetCurrentProcess(v8, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v12, v11)) == 0LL
    || (v14 = *((_QWORD *)Current + 1)) == 0 )
  {
    v14 = v13;
  }
  v53 = 0;
  v15 = v14 + 112;
  if ( !v14 )
    v15 = 0LL;
  if ( v15 && *(struct _KTHREAD **)(v15 + 8) == KeGetCurrentThread() )
  {
    v47 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v47 + 24) = 1571LL;
    WdLogEvent5_WdAssertion(v47);
  }
  if ( v14 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v15, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v45 = *(_DWORD *)(v15 + 24);
        if ( v45 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v16, &EventBlockThread, v17, v45);
      }
      ExAcquirePushLockExclusiveEx(v15, 0LL);
    }
    *(_QWORD *)(v15 + 8) = KeGetCurrentThread();
    v53 = 2;
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  if ( !v3 )
  {
    v20 = *((_QWORD *)this + 2);
    v63 = 0LL;
    v57[1] = 0;
    v60 = 0;
    v21 = *(MOCKDRIVERSTATE **)(v20 + 4488);
    v61 = 0;
    v62 = 0;
    v57[0] = a2->NumAllocations;
    pAllocationList = a2->pAllocationList;
    v64 = 0LL;
    v58 = pAllocationList;
    v59 = 0;
    DWORD2(v64) = 1;
    MOCKDRIVERSTATE::ValidateMockDriverState(v21, 0, (struct _MOCKDRIVERSTATE_VALIDATE_PLANE *)v57);
  }
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  CurrentIrql = KeGetCurrentIrql();
  ThreadProperty = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v48 = WdLogNewEntry5_WdAssertion(v19, v18);
      *(_QWORD *)(v48 + 24) = 507LL;
      WdLogEvent5_WdAssertion(v48);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v19, v18);
    v29 = PsGetCurrentProcess(v28, v27);
    v30 = PsGetProcessDxgProcess(v29);
    if ( CurrentProcessSessionId )
    {
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
      {
        if ( v30 )
        {
          v43 = *(void **)(v30 + 88);
          if ( v43 )
          {
            if ( v43 != &gDxgkWin32kEngInterface )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
              if ( ThreadWin32Thread )
              {
                ThreadProperty = *(struct DXGTHREAD **)(ThreadWin32Thread + 80);
LABEL_24:
                if ( ThreadProperty )
                  v6 = *((_DWORD *)ThreadProperty + 8);
                else
                  v6 = 0;
                goto LABEL_26;
              }
            }
          }
        }
      }
    }
    ThreadProperty = (struct DXGTHREAD *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
    if ( ThreadProperty || (ThreadProperty = DxgkThreadObjectCreateDxgThread()) != 0LL )
    {
      ObfDereferenceObject(ThreadProperty);
      goto LABEL_24;
    }
    v6 = 0;
    ThreadProperty = 0LL;
  }
LABEL_26:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v65,
    *((struct DXGADAPTER **)this + 2));
  v34 = (*(int (__fastcall **)(_QWORD, const struct _DXGKARG_DESTROYALLOCATION *))(*((_QWORD *)this + 2) + 384LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 272LL),
          a2);
  if ( v65[0] )
    KeUnstackDetachProcess(&ApcState);
  v35 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v35 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v31);
    v49[3] = 275LL;
    v49[4] = 16LL;
    v49[5] = this;
    v49[6] = CurrentIrql;
    v50 = KeGetCurrentIrql();
    v49[7] = v50;
    WdLogEvent5_WdCriticalError(v49);
  }
  if ( ThreadProperty && *((_DWORD *)ThreadProperty + 8) != v6 )
  {
    v51 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v31);
    v51[3] = 275LL;
    v51[4] = 38LL;
    v51[5] = *((int *)ThreadProperty + 8);
    v51[6] = v6;
    v51[7] = 0LL;
    WdLogEvent5_WdCriticalError(v51);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4364LL));
  v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v35, v31, v32, v33);
  v36[3] = v34;
  v36[4] = a2->Flags.Value;
  v36[5] = a2->hResource;
  v36[6] = a2->NumAllocations;
  v37 = a2->pAllocationList;
  if ( v37 )
    v38 = *v37;
  else
    v38 = 0LL;
  v36[7] = v38;
  if ( (_DWORD)v34 )
  {
    v52 = WdLogNewEntry5_WdError(v37, v38);
    *(_QWORD *)(v52 + 24) = v34;
    WdLogEvent5_WdError(v52);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v53 == 2 )
  {
    *(_QWORD *)(v15 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v15, 0LL);
    KeLeaveCriticalRegion();
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v54, v39);
  if ( v56 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v54);
  }
  return (unsigned int)v34;
}
