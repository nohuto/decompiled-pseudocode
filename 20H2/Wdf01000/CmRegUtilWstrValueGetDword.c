/*
 * XREFs of CmRegUtilWstrValueGetDword @ 0x1C00C5B44
 * Callers:
 *     PiRegStateReadStackCreationSettingsFromKey @ 0x1C00C5120 (PiRegStateReadStackCreationSettingsFromKey.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C008E510 (WdmlibRtlInitUnicodeStringEx.c)
 *     CmRegUtilUcValueGetDword @ 0x1C00C5860 (CmRegUtilUcValueGetDword.c)
 */

NTSTATUS __fastcall CmRegUtilWstrValueGetDword(
        void *KeyHandle,
        wchar_t *ValueName,
        unsigned int Value,
        unsigned int *a4)
{
  NTSTATUS result; // eax
  unsigned int v5; // r8d
  unsigned int *v6; // r9
  void *v7; // r10
  _UNICODE_STRING unicodeStringValueName; // [rsp+20h] [rbp-18h] BYREF

  unicodeStringValueName = 0LL;
  result = WdmlibRtlInitUnicodeStringEx(&unicodeStringValueName, ValueName);
  if ( result >= 0 )
    return CmRegUtilUcValueGetDword(v7, &unicodeStringValueName, v5, v6);
  return result;
}
