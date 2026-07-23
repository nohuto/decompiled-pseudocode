/*
 * XREFs of NtTestAlert @ 0x140608E20
 * Callers:
 *     <none>
 * Callees:
 *     KeTestAlertThread @ 0x1402654D0 (KeTestAlertThread.c)
 */

NTSTATUS NtTestAlert(void)
{
  return KeTestAlertThread(KeGetCurrentThread()->PreviousMode) != 0 ? 0x101 : 0;
}
