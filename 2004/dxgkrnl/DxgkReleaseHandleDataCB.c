/*
 * XREFs of DxgkReleaseHandleDataCB @ 0x1C014E880
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D47C (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C00FAE40 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ @ 0x1C0157070 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@XZ.c)
 */

void __fastcall DxgkReleaseHandleDataCB(__int64 *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  struct DXGTHREAD *Current; // rax
  __int64 v11; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v13; // rax
  int CurrentProcessSessionId; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  void *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int *ThreadProperty; // rbx
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // r9d
  __int64 v35; // rsi
  struct _EX_RUNDOWN_REF *v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v40; // rax
  __int64 v41; // rax
  char v42[8]; // [rsp+20h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-60h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v42);
    CurrentProcess = PsGetCurrentProcess(v4, v3);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v9 = ProcessDxgProcess;
    if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
      || (Current = DXGTHREAD::GetCurrent(v8, v7)) == 0LL
      || (v11 = *((_QWORD *)Current + 1)) == 0 )
    {
      v11 = v9;
    }
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v13 + 24) = 507LL;
      WdLogEvent5_WdAssertion(v13);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7);
    v17 = PsGetCurrentProcess(v16, v15);
    v18 = PsGetProcessDxgProcess(v17);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && v18
      && (v19 = *(void **)(v18 + 88)) != 0LL
      && v19 != &gDxgkWin32kEngInterface
      && (!(unsigned __int8)KeIsAttachedProcess()
       || (v22 = PsGetCurrentProcess(v21, v20),
           ProcessSessionId = PsGetProcessSessionIdEx(v22),
           CurrentThreadProcess = PsGetCurrentThreadProcess(),
           ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)))
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      ThreadProperty = *(int **)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      ThreadProperty = (int *)PsGetThreadProperty(KeGetCurrentThread(), 0x68547844uLL, 0);
      if ( ThreadProperty || (ThreadProperty = (int *)DxgkThreadObjectCreateDxgThread()) != 0LL )
        ObfDereferenceObject(ThreadProperty);
      else
        ThreadProperty = 0LL;
    }
    v29 = v11 + 208;
    if ( v11 != -208 && *(struct _KTHREAD **)(v11 + 216) == KeGetCurrentThread() )
    {
      v30 = WdLogNewEntry5_WdAssertion(v27, v26);
      *(_QWORD *)(v30 + 24) = 1571LL;
      WdLogEvent5_WdAssertion(v30);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v34 = *(_DWORD *)(v11 + 232);
        if ( v34 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v32, &EventBlockThread, v33, v34);
      }
      ExAcquirePushLockSharedEx(v11 + 208, 0LL);
    }
    v35 = *((int *)a1 + 2);
    if ( (_DWORD)v35 == 1 )
    {
      v36 = (struct _EX_RUNDOWN_REF *)(v1 + 88);
    }
    else
    {
      if ( (_DWORD)v35 != 2 )
      {
        v41 = WdLogNewEntry5_WdError(v32, v31);
        *(_QWORD *)(v41 + 24) = v35;
        WdLogEvent5_WdError(v41);
LABEL_40:
        ExReleasePushLockSharedEx(v29, 0LL);
        KeLeaveCriticalRegion();
        if ( v42[0] )
          KeUnstackDetachProcess(&ApcState);
        return;
      }
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v1 + 80), v31);
      v36 = (struct _EX_RUNDOWN_REF *)(v1 + 72);
    }
    ExReleaseRundownProtection(v36);
    if ( ThreadProperty )
    {
      if ( --ThreadProperty[8] < 0 )
      {
        v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v37);
        v40[3] = 275LL;
        v40[4] = 38LL;
        v40[5] = ThreadProperty[8];
        v40[6] = 0LL;
        v40[7] = 0LL;
        WdLogEvent5_WdCriticalError(v40);
      }
    }
    goto LABEL_40;
  }
}
