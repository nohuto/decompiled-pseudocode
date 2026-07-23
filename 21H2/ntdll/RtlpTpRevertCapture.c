/*
 * XREFs of RtlpTpRevertCapture @ 0x18000BD78
 * Callers:
 *     RtlDeleteTimer @ 0x180009C00 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180009D50 (RtlCreateTimer.c)
 *     RtlDeregisterWaitEx @ 0x18000B5B0 (RtlDeregisterWaitEx.c)
 *     RtlQueueWorkItem @ 0x18000B780 (RtlQueueWorkItem.c)
 *     RtlRegisterWait @ 0x18000BE70 (RtlRegisterWait.c)
 *     RtlUpdateTimer @ 0x180082400 (RtlUpdateTimer.c)
 *     RtlCreateTimerQueue @ 0x180083040 (RtlCreateTimerQueue.c)
 *     RtlDeleteTimerQueueEx @ 0x180084D60 (RtlDeleteTimerQueueEx.c)
 *     RtlSetIoCompletionCallback @ 0x180112F80 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009D7A0 (NtSetInformationThread.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     NtOpenThreadToken @ 0x18009DA80 (NtOpenThreadToken.c)
 */

NTSTATUS __fastcall RtlpTpRevertCapture(PHANDLE TokenHandle, int a2)
{
  NTSTATUS result; // eax
  NTSTATUS v4; // edi
  __int64 ThreadInformation; // [rsp+30h] [rbp+8h] BYREF

  *TokenHandle = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    return 0;
  result = NtOpenThreadToken((HANDLE)0xFFFFFFFFFFFFFFFELL, a2 != 0 ? 6 : 4, 1u, TokenHandle);
  if ( result >= 0 )
  {
    ThreadInformation = 0LL;
    v4 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    if ( v4 < 0 )
    {
      NtClose(*TokenHandle);
      *TokenHandle = 0LL;
      return v4;
    }
    return 0;
  }
  return result;
}
