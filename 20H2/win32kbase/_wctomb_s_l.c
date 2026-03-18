/*
 * XREFs of _wctomb_s_l @ 0x1C00CD6D4
 * Callers:
 *     wctomb_s @ 0x1C00CD78C (wctomb_s.c)
 * Callees:
 *     ?MarkInvalid@CIgnoreInputQueue@@EEAAXXZ @ 0x1C009B020 (-MarkInvalid@CIgnoreInputQueue@@EEAAXXZ.c)
 *     RtlUnicodeToMultiByteN_0 @ 0x1C00CD8FB (RtlUnicodeToMultiByteN_0.c)
 */

errno_t __cdecl wctomb_s_l(int *SizeConverted, char *MbCh, size_t SizeInBytes, wchar_t WCh, _locale_t Locale)
{
  errno_t result; // eax
  ULONG BytesInMultiByteString; // [rsp+48h] [rbp+10h] BYREF
  WCHAR UnicodeString; // [rsp+58h] [rbp+20h] BYREF

  UnicodeString = WCh;
  if ( MbCh || !SizeInBytes )
  {
    if ( SizeConverted )
      *SizeConverted = -1;
    if ( SizeInBytes > 0x7FFFFFFF )
    {
      CIgnoreInputQueue::MarkInvalid(0LL);
      return 22;
    }
    if ( MbCh )
    {
      BytesInMultiByteString = 0;
      if ( RtlUnicodeToMultiByteN_0(MbCh, SizeInBytes, &BytesInMultiByteString, &UnicodeString, 2u) < 0 )
      {
        result = 42;
        gbl_errno = 42;
        return result;
      }
      if ( SizeConverted )
        *SizeConverted = BytesInMultiByteString;
    }
    else if ( SizeConverted )
    {
      *SizeConverted = _mb_cur_max;
    }
  }
  else if ( SizeConverted )
  {
    *SizeConverted = 0;
  }
  return 0;
}
