/*
 * XREFs of NtMITSetKeyboardOverriderState @ 0x1C0130420
 * Callers:
 *     <none>
 * Callees:
 *     _anonymous_namespace_::GetKeyboardProcessor @ 0x1C006A414 (_anonymous_namespace_--GetKeyboardProcessor.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 */

__int64 __fastcall NtMITSetKeyboardOverriderState(int a1)
{
  CInputThread *v1; // rsi
  unsigned int CurrentThreadId; // eax
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 KeyboardProcessor; // rcx
  __int32 v9; // eax

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v4 = *((_DWORD *)v1 + 10);
  v5 = CurrentThreadId;
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 == v4 )
  {
    KeyboardProcessor = anonymous_namespace_::GetKeyboardProcessor();
    v9 = 0;
    if ( KeyboardProcessor )
    {
      LOBYTE(v9) = a1 != 0;
      _InterlockedExchange((volatile __int32 *)(KeyboardProcessor + 24), v9);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL, v6);
    return 0LL;
  }
}
