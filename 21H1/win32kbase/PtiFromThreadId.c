/*
 * XREFs of PtiFromThreadId @ 0x1C001B650
 * Callers:
 *     NtMITPostThreadEventMessage @ 0x1C01360B0 (NtMITPostThreadEventMessage.c)
 *     NtMITSetLastInputRecipient @ 0x1C01364D0 (NtMITSetLastInputRecipient.c)
 * Callees:
 *     LockThreadByClientId @ 0x1C001B714 (LockThreadByClientId.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PtiFromThreadId(int a1)
{
  HANDLE v1; // rdi
  __int64 ThreadWin32Thread; // rbx
  int v3; // eax
  PETHREAD Thread; // [rsp+48h] [rbp+10h] BYREF

  Thread = 0LL;
  v1 = (HANDLE)a1;
  if ( (int)LockThreadByClientId(a1, &Thread) < 0 )
    return 0LL;
  if ( PsIsThreadTerminating(Thread) )
    ThreadWin32Thread = 0LL;
  else
    ThreadWin32Thread = W32GetThreadWin32Thread(Thread);
  if ( ThreadWin32Thread )
  {
    if ( PsGetThreadId(*(PETHREAD *)ThreadWin32Thread) == v1
      && (v3 = *(_DWORD *)(ThreadWin32Thread + 480), (v3 & 0x1000000) != 0) )
    {
      if ( (v3 & 1) != 0 )
        ThreadWin32Thread = 0LL;
    }
    else
    {
      ThreadWin32Thread = 0LL;
    }
  }
  ObfDereferenceObject(Thread);
  return ThreadWin32Thread;
}
