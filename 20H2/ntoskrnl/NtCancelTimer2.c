/*
 * XREFs of NtCancelTimer2 @ 0x140330480
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x1402E0924 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtCancelTimer2(HANDLE TimerHandle, PT2_CANCEL_PARAMETERS Parameters)
{
  return ExpSetTimer2(TimerHandle, 0LL, 0LL, 0LL);
}
