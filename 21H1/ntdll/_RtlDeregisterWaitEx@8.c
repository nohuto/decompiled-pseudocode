/*
 * XREFs of _RtlDeregisterWaitEx@8 @ 0x4B2A8010
 * Callers:
 *     _RtlDeregisterWait@4 @ 0x4B385450 (_RtlDeregisterWait@4.c)
 * Callees:
 *     _RtlDeregisterWaitEx@8 @ 0x4B2A8010 (_RtlDeregisterWaitEx@8.c)
 *     _TpWaitOutstandingCallbackCount@4 @ 0x4B2A8156 (_TpWaitOutstandingCallbackCount@4.c)
 *     _RtlpTpWaitRundown@4 @ 0x4B2A81AB (_RtlpTpWaitRundown@4.c)
 *     _TpWaitForWait@8 @ 0x4B2B1D80 (_TpWaitForWait@8.c)
 *     _TpReleaseWait@4 @ 0x4B2B1E70 (_TpReleaseWait@4.c)
 *     _RtlpTpRevertCapture@8 @ 0x4B2B1FBA (_RtlpTpRevertCapture@8.c)
 *     _RtlpTpResumeImpersonation@4 @ 0x4B2B221A (_RtlpTpResumeImpersonation@4.c)
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __cdecl RtlDeregisterWaitEx(HANDLE WaitHandle, HANDLE CompletionEvent)
{
  NTSTATUS v2; // esi
  int v3; // esi
  int v4; // eax
  int v6; // [esp+10h] [ebp-28h]
  HANDLE TokenHandle; // [esp+18h] [ebp-20h] BYREF
  int v8; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v8 = -1073741823;
  TokenHandle = 0;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( !WaitHandle )
    return -1073741585;
  ms_exc.registration.TryLevel = 0;
  v2 = RtlpTpRevertCapture(&TokenHandle);
  v8 = v2;
  if ( v2 >= 0 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)WaitHandle + 2);
    v3 = 1;
    ms_exc.registration.TryLevel = 1;
    *((_DWORD *)WaitHandle + 1) |= 8u;
    TpSetWaitEx(*((PTP_WAIT *)WaitHandle + 6), 0, 0, 0);
    ms_exc.registration.TryLevel = 0;
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)WaitHandle + 2);
    _InterlockedOr((volatile signed __int32 *)WaitHandle + 3, 1u);
    if ( (*((_BYTE *)WaitHandle + 4) & 4) == 0
      || (void *)*((_DWORD *)WaitHandle + 12) != NtCurrentTeb()->ClientId.UniqueThread )
    {
      v3 = 0;
    }
    if ( CompletionEvent == (HANDLE)-1 )
    {
      if ( !v3 )
        TpWaitForWait(*((PTP_WAIT *)WaitHandle + 6), 0);
    }
    else if ( CompletionEvent )
    {
      *((_DWORD *)WaitHandle + 11) = CompletionEvent;
    }
    v6 = TpWaitOutstandingCallbackCount(*((_DWORD *)WaitHandle + 6));
    TpReleaseWait(*((PTP_WAIT *)WaitHandle + 6));
    if ( (_InterlockedAnd((volatile signed __int32 *)WaitHandle + 3, 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpWaitRundown(WaitHandle);
      v4 = 0;
    }
    else
    {
      v4 = v6;
    }
    if ( v4 )
      v2 = v3 != 0 ? 0 : 259;
    else
      v2 = 0;
    v8 = v2;
  }
  ms_exc.registration.TryLevel = -2;
  RtlpTpResumeImpersonation(TokenHandle, 1261076738);
  return v2;
}
