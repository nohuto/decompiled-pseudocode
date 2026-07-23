/*
 * XREFs of NtCancelTimer2 @ 0x140250950
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetTimer2 @ 0x14026E384 (ExpSetTimer2.c)
 */

NTSTATUS __cdecl NtCancelTimer2(HANDLE TimerHandle, PT2_CANCEL_PARAMETERS Parameters)
{
  return ExpSetTimer2(TimerHandle);
}
