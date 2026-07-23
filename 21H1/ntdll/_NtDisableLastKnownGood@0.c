/*
 * XREFs of _NtDisableLastKnownGood@0 @ 0x4B2F3720
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS NtDisableLastKnownGood(void)
{
  return Wow64SystemServiceCall();
}
