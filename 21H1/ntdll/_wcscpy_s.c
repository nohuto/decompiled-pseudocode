/*
 * XREFs of _wcscpy_s @ 0x4B300590
 * Callers:
 *     _RtlConvertSidToUnicodeString@12 @ 0x4B2D3990 (_RtlConvertSidToUnicodeString@12.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

errno_t __cdecl wcscpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  rsize_t v3; // edx
  const wchar_t *v4; // ecx
  wchar_t v5; // ax
  errno_t v7; // [esp-4h] [ebp-Ch]

  if ( Destination && (v3 = SizeInWords) != 0 )
  {
    v4 = Source;
    if ( !Source )
    {
      v7 = 22;
LABEL_9:
      *Destination = 0;
      _invalid_parameter();
      return v7;
    }
    do
    {
      v5 = *v4;
      *(const wchar_t *)((char *)v4 + (char *)Destination - (char *)Source) = *v4;
      ++v4;
      if ( !v5 )
        break;
      --v3;
    }
    while ( v3 );
    if ( !v3 )
    {
      v7 = 34;
      goto LABEL_9;
    }
    return 0;
  }
  else
  {
    _invalid_parameter();
    return 22;
  }
}
