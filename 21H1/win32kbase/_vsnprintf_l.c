/*
 * XREFs of _vsnprintf_l @ 0x1C00CC218
 * Callers:
 *     _vsnprintf @ 0x1C00CC1F8 (_vsnprintf.c)
 * Callees:
 *     ?MarkInvalid@CIgnoreInputQueue@@EEAAXXZ @ 0x1C002D010 (-MarkInvalid@CIgnoreInputQueue@@EEAAXXZ.c)
 *     _flsbuf @ 0x1C00CC854 (_flsbuf.c)
 *     _output_l @ 0x1C00CC864 (_output_l.c)
 */

int __cdecl vsnprintf_l(char *DstBuf, size_t MaxCount, const char *Format, _locale_t Locale, va_list ArgList)
{
  int v6; // edi
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( Format && (!MaxCount || DstBuf) )
  {
    File._flag = 66;
    File._base = DstBuf;
    if ( MaxCount > 0x7FFFFFFF )
      LODWORD(MaxCount) = 0x7FFFFFFF;
    File._ptr = DstBuf;
    File._cnt = MaxCount;
    v6 = output_l(&File, Format, Locale, ArgList);
    if ( DstBuf )
    {
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *File._ptr = 0;
    }
    return v6;
  }
  else
  {
    CIgnoreInputQueue::MarkInvalid(0LL);
    return -1;
  }
}
