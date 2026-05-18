/*
 * XREFs of sub_18008177C @ 0x18008177C
 * Callers:
 *     sub_180072004 @ 0x180072004 (sub_180072004.c)
 *     sub_1800BB82C @ 0x1800BB82C (sub_1800BB82C.c)
 * Callees:
 *     sub_1800817EC @ 0x1800817EC (sub_1800817EC.c)
 *     __std_type_info_compare @ 0x180123988 (__std_type_info_compare.c)
 */

_QWORD *__fastcall sub_18008177C(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v6; // rbx
  _QWORD *result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  sub_1800817EC(a1, &v8);
  v6 = v8;
  if ( v8 == *a1 || (int)_std_type_info_compare(*a3 + 8LL, *(_QWORD *)(v8 + 32) + 8LL) < 0 )
    v6 = *a1;
  result = a2;
  *a2 = v6;
  return result;
}
