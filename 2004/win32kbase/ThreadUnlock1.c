/*
 * XREFs of ThreadUnlock1 @ 0x1C00899B0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0010F90 (xxxEnumDisplayMonitors.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0017B30 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0017D48 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C0018AB0 (xxxActivateKeyboardLayout.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0018B70 (xxxInternalActivateKeyboardLayout.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00692B8 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     xxxDestroyThreadInfo @ 0x1C0074C34 (xxxDestroyThreadInfo.c)
 *     DestroyThreadsObjects @ 0x1C00955C0 (DestroyThreadsObjects.c)
 * Callees:
 *     IS_USERCRIT_NOTOWNED_ATALL @ 0x1C0016FCC (IS_USERCRIT_NOTOWNED_ATALL.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C0017000 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C007447C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C011AF88 (AddToDeferredUserCritThreadUnlockList.c)
 */

__int64 __fastcall ThreadUnlock1(__int64 a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  struct _HANDLEENTRY *v9; // rdi
  char v10; // al
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v13; // rcx
  __int64 CurrentThreadProcess; // rax
  char *v15; // rcx

  v1 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v4, v3),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v13),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v1 = *ThreadWin32Thread;
  }
  v6 = *(_QWORD **)(v1 + 408);
  *(_QWORD *)(v1 + 408) = *v6;
  v7 = v6[1];
  if ( v7 )
  {
    GetDomainLockRef(14LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 8), 0xFFFFFFFF) == 1 )
    {
      v9 = (struct _HANDLEENTRY *)((char *)qword_1C024AD48
                                 + dword_1C024AD50 * (unsigned int)(unsigned __int16)*(_DWORD *)v7);
      v10 = *((_BYTE *)v9 + 25);
      if ( (v10 & 1) != 0 && (v10 & 2) == 0 )
      {
        if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() || (unsigned int)IS_USERCRIT_NOTOWNED_ATALL() )
        {
          GetDomainLockRef(12LL);
          v15 = (char *)gpKernelHandleTable + 24 * (unsigned __int16)*(_DWORD *)v7;
          if ( !*((_QWORD *)v15 + 2) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
            AddToDeferredUserCritThreadUnlockList(v15);
          }
        }
        else
        {
          HMDestroyUnlockedObjectWorker(v9);
        }
        return 0LL;
      }
    }
  }
  return v7;
}
