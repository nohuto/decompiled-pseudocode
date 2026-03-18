/*
 * XREFs of NtMITDispatchCompletion @ 0x1C0064710
 * Callers:
 *     <none>
 * Callees:
 *     UserDispatchMITCompletion @ 0x1C00647BC (UserDispatchMITCompletion.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 */

__int64 __fastcall NtMITDispatchCompletion(__int64 a1, __int64 a2)
{
  CInputThread *v2; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi

  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = *((_DWORD *)v2 + 10);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 == v6 )
    UserDispatchMITCompletion(a1, a2);
  else
    UserSetLastError(5LL);
  return 0LL;
}
