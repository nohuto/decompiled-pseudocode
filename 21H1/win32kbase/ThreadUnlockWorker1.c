/*
 * XREFs of ThreadUnlockWorker1 @ 0x1C000FE20
 * Callers:
 *     <none>
 * Callees:
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C004E800 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     IS_USERCRIT_NOTOWNED_ATALL @ 0x1C005AD7C (IS_USERCRIT_NOTOWNED_ATALL.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C007049C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     AddToDeferredUserCritThreadUnlockList @ 0x1C0121C98 (AddToDeferredUserCritThreadUnlockList.c)
 */

__int64 ThreadUnlockWorker1()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rbx
  struct _HANDLEENTRY *v7; // rdi
  char v8; // al
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v3, v2),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v1 = *ThreadWin32Thread;
  }
  v5 = *(_QWORD **)(v1 + 408);
  *(_QWORD *)(v1 + 408) = *v5;
  v6 = v5[1];
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
    {
      v7 = (struct _HANDLEENTRY *)((char *)qword_1C0250D48
                                 + dword_1C0250D50 * (unsigned int)(unsigned __int16)*(_DWORD *)v6);
      v8 = *((_BYTE *)v7 + 25);
      if ( (v8 & 1) != 0 && (v8 & 2) == 0 )
      {
        if ( (unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() || (unsigned int)IS_USERCRIT_NOTOWNED_ATALL() )
        {
          GetDomainLockRef(12LL);
          if ( !*((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*(_DWORD *)v6 + 2) )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
            AddToDeferredUserCritThreadUnlockList();
          }
        }
        else
        {
          HMDestroyUnlockedObjectWorker(v7);
        }
        return 0LL;
      }
    }
  }
  return v6;
}
