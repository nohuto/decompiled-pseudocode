/*
 * XREFs of __safecrt_wctomb_s @ 0x4B301240
 * Callers:
 *     __output_s @ 0x4B3008FA (__output_s.c)
 * Callees:
 *     _RtlUnicodeToMultiByteN@20 @ 0x4B2E0D70 (_RtlUnicodeToMultiByteN@20.c)
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __cdecl _safecrt_wctomb_s(ULONG *a1, PCHAR MultiByteString, ULONG MaxBytesInMultiByteString, WCHAR UnicodeString)
{
  ULONG v5; // eax
  size_t v6; // [esp-4h] [ebp-14h]
  ULONG BytesInMultiByteString; // [esp+Ch] [ebp-4h] BYREF

  if ( !MultiByteString && MaxBytesInMultiByteString )
  {
    if ( a1 )
      *a1 = 0;
    return 0;
  }
  if ( a1 )
    *a1 = -1;
  if ( MaxBytesInMultiByteString > 0x7FFFFFFF )
  {
    _invalid_parameter();
    return 22;
  }
  if ( MultiByteString )
  {
    BytesInMultiByteString = 0;
    if ( RtlUnicodeToMultiByteN(MultiByteString, MaxBytesInMultiByteString, &BytesInMultiByteString, &UnicodeString, 2u) < 0 )
    {
      if ( MaxBytesInMultiByteString )
      {
        LODWORD(v6) = MaxBytesInMultiByteString;
        memset(MultiByteString, 0, v6);
      }
      return 42;
    }
    if ( a1 )
    {
      v5 = BytesInMultiByteString;
      goto LABEL_19;
    }
  }
  else if ( a1 )
  {
    v5 = __mb_cur_max;
LABEL_19:
    *a1 = v5;
  }
  return 0;
}
