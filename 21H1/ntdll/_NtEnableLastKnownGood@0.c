/*
 * XREFs of _NtEnableLastKnownGood@0 @ 0x4B2F3750
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS NtEnableLastKnownGood(void)
{
  return Wow64SystemServiceCall();
}
