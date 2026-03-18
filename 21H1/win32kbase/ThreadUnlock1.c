/*
 * XREFs of ThreadUnlock1 @ 0x1C00828E0
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00579C8 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C0058730 (xxxActivateKeyboardLayout.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C00587F0 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0059540 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C005F774 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     DestroyThreadsObjects @ 0x1C0071190 (DestroyThreadsObjects.c)
 *     xxxDestroyThreadInfo @ 0x1C0071CF4 (xxxDestroyThreadInfo.c)
 *     xxxEnumDisplayMonitors @ 0x1C00A6620 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C004E800 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     IS_USERCRIT_NOTOWNED_ATALL @ 0x1C005AD7C (IS_USERCRIT_NOTOWNED_ATALL.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C007049C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C0121C98 (AddToDeferredUserCritThreadUnlockList.c)
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
      v9 = (struct _HANDLEENTRY *)((char *)qword_1C0250D48
                                 + dword_1C0250D50 * (unsigned int)(unsigned __int16)*(_DWORD *)v7);
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
