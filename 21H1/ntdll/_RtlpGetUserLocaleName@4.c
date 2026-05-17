/*
 * XREFs of _RtlpGetUserLocaleName@4 @ 0x4B3633E0
 * Callers:
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     _RtlpMatchUserLanguage@4 @ 0x4B363547 (_RtlpMatchUserLanguage@4.c)
 * Callees:
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _RtlpGetLocaleDataKey@0 @ 0x4B363354 (_RtlpGetLocaleDataKey@0.c)
 */

int __usercall RtlpGetUserLocaleName@<eax>(PUNICODE_STRING DestinationString@<ecx>, int a2@<ebp>)
{
  int LocaleDataKey; // eax
  int v5; // [esp-E4h] [ebp-F0h] BYREF
  _DWORD v6[2]; // [esp-E0h] [ebp-ECh] BYREF
  size_t v7; // [esp-D8h] [ebp-E4h]
  _DWORD v8[56]; // [esp-D4h] [ebp-E0h] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v8[53] = a2;
  v8[54] = retaddr;
  LocaleDataKey = RtlpGetLocaleDataKey();
  if ( !LocaleDataKey
    || ZwQueryValueKey(LocaleDataKey, (int)&`RtlpGetUserLocaleName'::`2'::KeyValueName, 2, (int)v6, 186, (int)&v5) < 0
    || v6[1] != 1
    || (v7 & 1) != 0
    || !v7
    || *((_WORD *)&v7 + (v7 >> 1) + 1)
    || v7 > DestinationString->MaximumLength )
  {
    return -1073741823;
  }
  memmove(DestinationString->Buffer, v8, v7);
  RtlInitUnicodeString(DestinationString, DestinationString->Buffer);
  return 0;
}
