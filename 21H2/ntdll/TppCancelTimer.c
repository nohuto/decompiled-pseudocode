/*
 * XREFs of TppCancelTimer @ 0x180012CB4
 * Callers:
 *     TpReleaseTimer @ 0x18000C500 (TpReleaseTimer.c)
 *     TppWaitCompletion @ 0x180010D20 (TppWaitCompletion.c)
 *     TpWaitForTimer @ 0x180011200 (TpWaitForTimer.c)
 *     TppCancelWait @ 0x180011E7C (TppCancelWait.c)
 *     TpSetTimerEx @ 0x1800126D0 (TpSetTimerEx.c)
 *     TppTimerpStopCallbackGeneration @ 0x180085790 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     TppPHDelete @ 0x1800135F8 (TppPHDelete.c)
 *     TppUpdateSubQueueTimer @ 0x180013B20 (TppUpdateSubQueueTimer.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppItePush @ 0x18004D0DC (TppItePush.c)
 *     NtWaitForAlertByThreadId @ 0x1800A1030 (NtWaitForAlertByThreadId.c)
 *     TppETWTimerCancelled @ 0x180112AE0 (TppETWTimerCancelled.c)
 */

char __fastcall TppCancelTimer(__int64 a1, _RTL_SRWLOCK *a2, char a3)
{
  char v3; // bl
  bool v6; // bp
  unsigned __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rdx
  _BYTE v12[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 1;
  v6 = (*(_BYTE *)(a1 + 354) & 2) != 0;
  if ( (*(_BYTE *)(a1 + 354) & 1) != 0 )
  {
    v9 = (unsigned __int64)&a2[16] + (-(__int64)((*(_BYTE *)(a1 + 354) & 2) != 0) & 0xFFFFFFFFFFFFFF88uLL);
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      TppETWTimerCancelled(v9, a1);
    RtlAcquireSRWLockExclusive(a2);
    if ( *(_BYTE *)(a1 + 352) )
    {
      TppPHDelete(v9 + 16, a1 + 248);
      TppPHDelete(v9 + 8, a1 + 288);
      LOBYTE(v11) = v6;
      TppUpdateSubQueueTimer(v9, v11);
      *(_BYTE *)(a1 + 352) = 0;
      RtlReleaseSRWLockExclusive(a2);
      *(_DWORD *)(a1 + 348) = 0;
      *(_QWORD *)(a1 + 328) = 0LL;
      *(_BYTE *)(a1 + 354) = 0;
      if ( !a3 )
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    }
    else
    {
      RtlReleaseSRWLockExclusive(a2);
      *(_BYTE *)(a1 + 354) |= 4u;
      TppItePush(a1 + 336, v12);
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
      NtWaitForAlertByThreadId((PVOID)(a1 + 336), 0LL);
      if ( a3 )
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
      return 0;
    }
    return v3;
  }
  else
  {
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( !a3 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 240));
    return 0;
  }
}
