/*
 * XREFs of RtlpValidateKeyTrust @ 0x1800463A8
 * Callers:
 *     RtlpCallQueryRegistryRoutine @ 0x180045FC4 (RtlpCallQueryRegistryRoutine.c)
 * Callees:
 *     ZwQueryKey @ 0x18009D8C0 (ZwQueryKey.c)
 */

NTSTATUS __fastcall RtlpValidateKeyTrust(void *a1, __int16 a2)
{
  NTSTATUS result; // eax
  char KeyInformation; // [rsp+48h] [rbp+10h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp+18h] BYREF

  if ( (a2 & 0x100) != 0 )
    return 0;
  result = ZwQueryKey(a1, KeyTrustInformation, &KeyInformation, 4u, &ResultLength);
  if ( result >= 0 )
  {
    if ( (KeyInformation & 1) != 0 )
      return 0;
    result = -1073741790;
  }
  if ( result != -1073741431 )
    __fastfail(9u);
  return result;
}
