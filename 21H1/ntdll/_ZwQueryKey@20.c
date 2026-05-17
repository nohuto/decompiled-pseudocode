/*
 * XREFs of _ZwQueryKey@20 @ 0x4B2F2AC0
 * Callers:
 *     _LdrpCodeAuthzInitialize@0 @ 0x4B2E82F2 (_LdrpCodeAuthzInitialize@0.c)
 *     _RtlpValidateKeyTrust@8 @ 0x4B2EB243 (_RtlpValidateKeyTrust@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwQueryKey(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
