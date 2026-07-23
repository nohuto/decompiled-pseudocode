/*
 * XREFs of __wctomb_s_l @ 0x4B2FED67
 * Callers:
 *     _wctomb_s @ 0x4B2FEDF3 (_wctomb_s.c)
 * Callees:
 *     _RtlUnicodeToMultiByteN@20 @ 0x4B2E0D70 (_RtlUnicodeToMultiByteN@20.c)
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __errno @ 0x4B33D420 (__errno.c)
 */

errno_t __cdecl _wctomb_s_l(int *SizeConverted, char *MbCh, size_t SizeInBytes, wchar_t WCh, _locale_t Locale)
{
  int v6; // eax
  ULONG BytesInMultiByteString; // [esp+4h] [ebp-4h] BYREF

  if ( !MbCh && (_DWORD)SizeInBytes )
  {
    if ( SizeConverted )
      *SizeConverted = 0;
    return 0;
  }
  if ( SizeConverted )
    *SizeConverted = -1;
  if ( (unsigned int)SizeInBytes > 0x7FFFFFFF )
  {
    _invalid_parameter();
    return 22;
  }
  if ( MbCh )
  {
    if ( RtlUnicodeToMultiByteN(MbCh, SizeInBytes, &BytesInMultiByteString, (PCWCH)&SizeInBytes + 2, 2u) < 0 )
    {
      *_errno() = 42;
      return *_errno();
    }
    if ( SizeConverted )
    {
      v6 = BytesInMultiByteString;
      goto LABEL_16;
    }
  }
  else if ( SizeConverted )
  {
    v6 = __mb_cur_max;
LABEL_16:
    *SizeConverted = v6;
  }
  return 0;
}
