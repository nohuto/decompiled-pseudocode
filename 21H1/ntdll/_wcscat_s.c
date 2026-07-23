/*
 * XREFs of _wcscat_s @ 0x4B300500
 * Callers:
 *     _BuildOverlayFilePath@20 @ 0x4B2B8CDD (_BuildOverlayFilePath@20.c)
 *     _RtlConvertSidToUnicodeString@12 @ 0x4B2D3990 (_RtlConvertSidToUnicodeString@12.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  int v3; // edx
  __int16 *v4; // esi
  wchar_t *v5; // edi
  char *v6; // edi
  __int16 v7; // ax
  errno_t v9; // [esp-4h] [ebp-10h]

  if ( Destination && (v3 = SizeInWords) != 0 )
  {
    v4 = (__int16 *)HIDWORD(SizeInWords);
    if ( !HIDWORD(SizeInWords) )
      goto LABEL_14;
    v5 = Destination;
    do
    {
      if ( !*v5 )
        break;
      ++v5;
      --v3;
    }
    while ( v3 );
    if ( v3 )
    {
      v6 = (char *)v5 - HIDWORD(SizeInWords);
      do
      {
        v7 = *v4;
        *(__int16 *)((char *)v4 + (_DWORD)v6) = *v4;
        ++v4;
        if ( !v7 )
          break;
        --v3;
      }
      while ( v3 );
      if ( v3 )
        return 0;
      v9 = 34;
    }
    else
    {
LABEL_14:
      v9 = 22;
    }
    *Destination = 0;
    _invalid_parameter();
    return v9;
  }
  else
  {
    _invalid_parameter();
    return 22;
  }
}
