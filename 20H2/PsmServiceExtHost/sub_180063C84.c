/*
 * XREFs of sub_180063C84 @ 0x180063C84
 * Callers:
 *     sub_180063B70 @ 0x180063B70 (sub_180063B70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180063C84(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 == -1LL || a2 == -1LL )
  {
    result = 0LL;
  }
  else
  {
    v4 = a1 * a2;
    result = 0LL;
    if ( is_mul_ok(a1, a2) )
    {
      *a3 = v4;
      return result;
    }
    result = 3221225621LL;
  }
  *a3 = -1LL;
  return result;
}
