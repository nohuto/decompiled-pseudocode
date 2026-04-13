/*
 * XREFs of _GetLocaleName @ 0x1800B7588
 * Callers:
 *     _Getctype @ 0x1800AF458 (_Getctype.c)
 *     _Getcvt @ 0x1800AF67C (_Getcvt.c)
 *     _Getcoll @ 0x1800CA664 (_Getcoll.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall GetLocaleName(int a1)
{
  wchar_t *result; // rax

  result = _wsetlocale(a1, 0LL);
  if ( result )
  {
    if ( *result == 67 )
      result = (wchar_t *)(-(__int64)(result[1] != 0) & (unsigned __int64)result);
    if ( result )
      return _wcsdup(result);
  }
  return result;
}
