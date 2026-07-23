/*
 * XREFs of _ZwQueryKey@20 @ 0x4B2F2AC0
 * Callers:
 *     _LdrpCodeAuthzInitialize@0 @ 0x4B2E82F2 (_LdrpCodeAuthzInitialize@0.c)
 *     _RtlpValidateKeyTrust@8 @ 0x4B2EB243 (_RtlpValidateKeyTrust@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwQueryKey(
        HANDLE KeyHandle,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  return Wow64SystemServiceCall();
}
