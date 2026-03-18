/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0xD77EC
 * Callers:
 *     ?RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0xD7734 (-RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
 *     ?RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z @ 0xD9756 (-RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x9998E (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringValidateDestWorker(
        PCUNICODE_STRING DestinationString,
        wchar_t **ppszDest,
        size_t *pcchDest,
        size_t *pcchDestLength,
        const size_t cchMax,
        ULONG dwFlags)
{
  _DWORD *v6; // edx
  unsigned __int16 *v7; // ecx
  _DWORD *v8; // ebx
  unsigned __int16 *v9; // esi
  int v10; // edx
  size_t v12; // [esp+0h] [ebp-Ch]
  ULONG v13; // [esp+4h] [ebp-8h]

  v8 = v6;
  v9 = v7;
  *v6 = 0;
  *(_DWORD *)&DestinationString->Length = 0;
  if ( ppszDest )
    *ppszDest = 0;
  v10 = RtlUnicodeStringValidateWorker(0, v12, v13);
  if ( v10 >= 0 )
  {
    if ( v9 )
    {
      *v8 = *((_DWORD *)v9 + 1);
      *(_DWORD *)&DestinationString->Length = v9[1] >> 1;
      if ( ppszDest )
        *ppszDest = (wchar_t *)(*v9 >> 1);
    }
  }
  return v10;
}
