/*
 * XREFs of NtMITSetKeyboardInputRoutingPolicy @ 0x1C005D760
 * Callers:
 *     <none>
 * Callees:
 *     SetKeyboardInputRoutingPolicy @ 0x1C005D840 (SetKeyboardInputRoutingPolicy.c)
 */

__int64 __fastcall NtMITSetKeyboardInputRoutingPolicy(unsigned int a1)
{
  CInputThread *v1; // rsi
  unsigned int CurrentThreadId; // eax
  int v4; // ebx
  unsigned int v5; // edi
  CInputThread *v6; // rdi
  int v7; // ebx

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v4 = *((_DWORD *)v1 + 10);
  v5 = CurrentThreadId;
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 == v4
    && (v6 = gpInputThread,
        KeEnterCriticalRegion(),
        ExAcquirePushLockSharedEx(v6, 0LL),
        v7 = *((_DWORD *)v6 + 4),
        ExReleasePushLockSharedEx(v6, 0LL),
        KeLeaveCriticalRegion(),
        v7 == 2) )
  {
    return SetKeyboardInputRoutingPolicy(a1);
  }
  else
  {
    return 3221225506LL;
  }
}
