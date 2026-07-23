/*
 * XREFs of _RtlpIsCustomLocale@4 @ 0x4B2D92D8
 * Callers:
 *     _RtlGetParentLocaleName@16 @ 0x4B2D41A0 (_RtlGetParentLocaleName@16.c)
 *     _RtlLocaleNameToLcid@12 @ 0x4B2D5860 (_RtlLocaleNameToLcid@12.c)
 *     _RtlIsValidLocaleName@8 @ 0x4B3630F0 (_RtlIsValidLocaleName@8.c)
 * Callees:
 *     _RtlpGetCustomCultureRegKey@0 @ 0x4B2D934B (_RtlpGetCustomCultureRegKey@0.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

bool __thiscall RtlpIsCustomLocale(PCWSTR SourceString)
{
  void *CustomCultureRegKey; // edi
  bool result; // al
  ULONG ResultLength; // [esp+14h] [ebp-ACh] BYREF
  _UNICODE_STRING DestinationString; // [esp+18h] [ebp-A8h] BYREF
  _BYTE KeyValueInformation[156]; // [esp+20h] [ebp-A0h] BYREF

  CustomCultureRegKey = (void *)RtlpGetCustomCultureRegKey();
  result = 0;
  if ( CustomCultureRegKey )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( ZwQueryValueKey(
             CustomCultureRegKey,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x78u,
             &ResultLength) >= 0 )
        return 1;
    }
  }
  return result;
}
