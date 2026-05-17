/*
 * XREFs of TppCancelTimer @ 0x180012CB4
 * Callers:
 *     TpReleaseTimer @ 0x18000C500 (TpReleaseTimer.c)
 *     TppWaitCompletion @ 0x180010D20 (TppWaitCompletion.c)
 *     TpWaitForTimer @ 0x180011200 (TpWaitForTimer.c)
 *     TppCancelWait @ 0x180011E7C (TppCancelWait.c)
 *     TpSetTimerEx @ 0x1800126D0 (TpSetTimerEx.c)
 *     TppTimerpStopCallbackGeneration @ 0x1800851C0 (TppTimerpStopCallbackGeneration.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     TppPHDelete @ 0x1800135F8 (TppPHDelete.c)
 *     TppUpdateSubQueueTimer @ 0x180013B20 (TppUpdateSubQueueTimer.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     TppItePush @ 0x180052A9C (TppItePush.c)
 *     NtWaitForAlertByThreadId @ 0x1800A0800 (NtWaitForAlertByThreadId.c)
 *     TppETWTimerCancelled @ 0x180112770 (TppETWTimerCancelled.c)
 */

char __fastcall TppCancelTimer(__int64 a1, volatile signed __int64 *a2, char a3)
{
  char v3; // bl
  bool v6; // bp
  unsigned __int64 v9; // rcx
  char *v10; // r13
  __int64 v11; // rcx
  __int64 v12; // rdx
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 1;
  v6 = (*(_BYTE *)(a1 + 354) & 2) != 0;
  if ( (*(_BYTE *)(a1 + 354) & 1) != 0 )
  {
    v9 = -(__int64)((*(_BYTE *)(a1 + 354) & 2) != 0) & 0xFFFFFFFFFFFFFF88uLL;
    v10 = (char *)a2 + v9 + 128;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9, a2) )
      v11 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v11 = 2147353478LL;
    if ( *(_BYTE *)v11 )
      TppETWTimerCancelled(v10, a1);
    RtlAcquireSRWLockExclusive(a2);
    if ( *(_BYTE *)(a1 + 352) )
    {
      TppPHDelete(v10 + 16, a1 + 248);
      TppPHDelete(v10 + 8, a1 + 288);
      LOBYTE(v12) = v6;
      TppUpdateSubQueueTimer(v10, v12);
      *(_BYTE *)(a1 + 352) = 0;
      RtlReleaseSRWLockExclusive(a2);
      *(_DWORD *)(a1 + 348) = 0;
      *(_QWORD *)(a1 + 328) = 0LL;
      *(_BYTE *)(a1 + 354) = 0;
      if ( !a3 )
        RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    }
    else
    {
      RtlReleaseSRWLockExclusive(a2);
      *(_BYTE *)(a1 + 354) |= 4u;
      TppItePush(a1 + 336, v13);
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
      NtWaitForAlertByThreadId(a1 + 336, 0LL);
      if ( a3 )
        RtlAcquireSRWLockExclusive(a1 + 240);
      return 0;
    }
    return v3;
  }
  else
  {
    *(_QWORD *)(a1 + 328) = 0LL;
    if ( !a3 )
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 240));
    return 0;
  }
}
