/*
 * XREFs of NtTestAlert @ 0x140704950
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x140299000 (KeTestAlertThread.c)
 */

__int64 NtTestAlert()
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode) != 0 ? 0x101 : 0;
}
