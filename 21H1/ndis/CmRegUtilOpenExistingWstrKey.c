/*
 * XREFs of CmRegUtilOpenExistingWstrKey @ 0x1C0128DEC
 * Callers:
 *     PiRegStateOpenClassKey @ 0x1C0128648 (PiRegStateOpenClassKey.c)
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C01289D8 (PpRegStateReadCreateClassCreationSettings.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0035780 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilOpenExistingUcKey @ 0x1C0128D78 (CmRegUtilOpenExistingUcKey.c)
 */

int __fastcall CmRegUtilOpenExistingWstrKey(__int64 a1, const WCHAR *a2)
{
  int result; // eax
  _QWORD *v3; // r9
  ACCESS_MASK v4; // r10d
  void *v5; // r11
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  DestinationString = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&DestinationString, a2);
  if ( result >= 0 )
    return CmRegUtilOpenExistingUcKey(v5, &DestinationString, v4, v3);
  return result;
}
