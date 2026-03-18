/*
 * XREFs of GreDeleteClientObj @ 0x1C0115D40
 * Callers:
 *     NtGdiDeleteClientObj @ 0x1C0115D20 (NtGdiDeleteClientObj.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreDeleteClientObj(__int64 a1)
{
  __int64 result; // rax

  result = HmgRemoveObject(a1, 0LL, 0LL, 1LL, 6, 0LL);
  if ( result )
  {
    FreeObject(result, 6LL);
    return 1LL;
  }
  return result;
}
