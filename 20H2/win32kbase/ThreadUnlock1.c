/*
 * XREFs of ThreadUnlock1 @ 0x1C0044210
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C002F2E0 (xxxEnumDisplayMonitors.c)
 *     DestroyThreadsObjects @ 0x1C0051B28 (DestroyThreadsObjects.c)
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C008832C (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0088548 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C00892B0 (xxxActivateKeyboardLayout.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0089370 (xxxInternalActivateKeyboardLayout.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C00A6E9C (--1CThreadLockInputDest@@QEAA@XZ.c)
 * Callees:
 *     IS_USERCRIT_NOTOWNED_ATALL @ 0x1C002131C (IS_USERCRIT_NOTOWNED_ATALL.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C0021350 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0055648 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C01194C8 (AddToDeferredUserCritThreadUnlockList.c)
 */

__int64 ThreadUnlock1()
{
  __int64 v0; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rbx
  struct _HANDLEENTRY *v8; // rdi
  char v9; // al
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax
  char *v13; // rcx

  v0 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v3, v2),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v0 = *ThreadWin32Thread;
  }
  v5 = *(_QWORD **)(v0 + 416);
  *(_QWORD *)(v0 + 416) = *v5;
  v6 = v5[1];
  if ( v6 )
  {
    GetDomainLockRef(14LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
    {
      v8 = (struct _HANDLEENTRY *)((char *)qword_1C0248D48
                                 + dword_1C0248D50 * (unsigned int)(unsigned __int16)*(_DWORD *)v6);
      v9 = *((_BYTE *)v8 + 25);
      if ( (v9 & 1) != 0 && (v9 & 2) == 0 )
      {
        if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() || (unsigned int)IS_USERCRIT_NOTOWNED_ATALL() )
        {
          GetDomainLockRef(12LL);
          v13 = (char *)gpKernelHandleTable + 24 * (unsigned __int16)*(_DWORD *)v6;
          if ( !*((_QWORD *)v13 + 2) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
            AddToDeferredUserCritThreadUnlockList(v13);
          }
        }
        else
        {
          HMDestroyUnlockedObjectWorker(v8);
        }
        return 0LL;
      }
    }
  }
  return v6;
}
