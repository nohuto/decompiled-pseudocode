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

int __usercall RtlpGetUserLocaleName@<eax>(PUNICODE_STRING DestinationString@<ecx>, int a2@<ebp>, int a3@<esi>)
{
  void *LocaleDataKey; // eax
  size_t v6; // [esp-104h] [ebp-110h]
  ULONG v7; // [esp-E4h] [ebp-F0h] BYREF
  _DWORD v8[2]; // [esp-E0h] [ebp-ECh] BYREF
  unsigned int v9; // [esp-D8h] [ebp-E4h]
  _DWORD v10[56]; // [esp-D4h] [ebp-E0h] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v10[53] = a2;
  v10[54] = retaddr;
  HIDWORD(v6) = a3;
  LocaleDataKey = (void *)RtlpGetLocaleDataKey();
  if ( !LocaleDataKey
    || ZwQueryValueKey(
         LocaleDataKey,
         (PUNICODE_STRING)&`RtlpGetUserLocaleName'::`2'::KeyValueName,
         KeyValuePartialInformation,
         v8,
         0xBAu,
         &v7) < 0
    || v8[1] != 1
    || (v9 & 1) != 0
    || !v9
    || *((_WORD *)&v9 + (v9 >> 1) + 1)
    || v9 > DestinationString->MaximumLength )
  {
    return -1073741823;
  }
  LODWORD(v6) = v9;
  memmove(DestinationString->Buffer, v10, v6);
  RtlInitUnicodeString(DestinationString, (PCWSTR)DestinationString->Buffer);
  return 0;
}
