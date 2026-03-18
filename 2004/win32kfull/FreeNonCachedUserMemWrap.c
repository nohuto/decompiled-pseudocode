/*
 * XREFs of FreeNonCachedUserMemWrap @ 0x1C00FC620
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z @ 0x1C0152D58 (-DestroyUMPDHeap@@YAXPEAU_UMPDHEAP@@@Z.c)
 */

void __fastcall FreeNonCachedUserMemWrap(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *ThreadWin32Thread; // rax
  struct _UMPDHEAP *v8; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v11; // rcx
  __int64 CurrentThreadProcess; // rax

  if ( *(_DWORD *)(a1 + 424) && *(_DWORD *)(a1 + 408) == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
  {
    *(_QWORD *)(a1 + 392) = 0LL;
  }
  else if ( *(_QWORD *)(a1 + 56) )
  {
    CurrentThread = KeGetCurrentThread();
    v3 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(a1)
      || (CurrentProcess = PsGetCurrentProcess(v5, v4, v6),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v11),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v3 = *ThreadWin32Thread;
    }
    v8 = *(struct _UMPDHEAP **)(a1 + 56);
    if ( *(struct _UMPDHEAP **)(v3 + 56) != v8 )
      DestroyUMPDHeap(v8);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
}
