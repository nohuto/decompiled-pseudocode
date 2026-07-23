/*
 * XREFs of _RtlpValidateKeyTrust@8 @ 0x4B2EB243
 * Callers:
 *     _RtlpCallQueryRegistryRoutine@28 @ 0x4B2EB0AD (_RtlpCallQueryRegistryRoutine@28.c)
 * Callees:
 *     _ZwQueryKey@20 @ 0x4B2F2AC0 (_ZwQueryKey@20.c)
 */

NTSTATUS __fastcall RtlpValidateKeyTrust(HANDLE KeyHandle, __int16 a2)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [esp+0h] [ebp-8h] BYREF
  _BYTE KeyInformation[4]; // [esp+4h] [ebp-4h] BYREF

  if ( (a2 & 0x100) != 0 )
    return 0;
  result = ZwQueryKey(KeyHandle, KeyTrustInformation, KeyInformation, 4u, &ResultLength);
  if ( result >= 0 )
  {
    if ( (KeyInformation[0] & 1) != 0 )
      return 0;
    result = -1073741790;
  }
  if ( result != -1073741431 )
    __fastfail(9u);
  return result;
}
