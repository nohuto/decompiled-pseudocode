/*
 * XREFs of sub_1800817EC @ 0x1800817EC
 * Callers:
 *     sub_180075DD0 @ 0x180075DD0 (sub_180075DD0.c)
 *     sub_18008177C @ 0x18008177C (sub_18008177C.c)
 * Callees:
 *     __std_type_info_compare @ 0x180123988 (__std_type_info_compare.c)
 */

_QWORD *__fastcall sub_1800817EC(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v3; // rdi
  __int64 *v6; // rbx
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v6 = *(__int64 **)(*a1 + 8);
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( (int)_std_type_info_compare(v6[4] + 8, *a3 + 8LL) >= 0 )
    {
      v3 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  result = a2;
  *a2 = v3;
  return result;
}
