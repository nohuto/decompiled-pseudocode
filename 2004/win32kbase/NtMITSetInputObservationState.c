/*
 * XREFs of NtMITSetInputObservationState @ 0x1C0130370
 * Callers:
 *     <none>
 * Callees:
 *     SetUMInputObservationState @ 0x1C01AC014 (SetUMInputObservationState.c)
 */

__int64 __fastcall NtMITSetInputObservationState(unsigned int a1, unsigned int a2, unsigned int a3)
{
  CInputThread *v3; // rsi
  unsigned int CurrentThreadId; // eax
  int v8; // ebx
  unsigned int v9; // edi

  v3 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v8 = *((_DWORD *)v3 + 10);
  v9 = CurrentThreadId;
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  if ( v9 == v8 )
    return SetUMInputObservationState(a1, a2, a3);
  else
    return 3221225506LL;
}
