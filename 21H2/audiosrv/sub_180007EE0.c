/*
 * XREFs of sub_180007EE0 @ 0x180007EE0
 * Callers:
 *     sub_18000543C @ 0x18000543C (sub_18000543C.c)
 *     sub_180051BBC @ 0x180051BBC (sub_180051BBC.c)
 *     sub_1800648C8 @ 0x1800648C8 (sub_1800648C8.c)
 *     sub_180139790 @ 0x180139790 (sub_180139790.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_180007EE0(unsigned __int16 *a1)
{
  unsigned __int16 *v1; // rdx
  unsigned __int16 v2; // cx
  __int64 result; // rax

  v1 = a1;
  if ( !a1 )
    sub_1800B8610(2147500037LL);
  v2 = *a1;
  result = 0LL;
  if ( v2 )
  {
    do
    {
      ++v1;
      result = (unsigned int)v2 + 33 * (_DWORD)result;
      v2 = *v1;
    }
    while ( *v1 );
  }
  return result;
}
