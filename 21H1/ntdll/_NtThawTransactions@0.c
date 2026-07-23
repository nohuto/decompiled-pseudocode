/*
 * XREFs of _NtThawTransactions@0 @ 0x4B2F45A0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS NtThawTransactions(void)
{
  return Wow64SystemServiceCall();
}
