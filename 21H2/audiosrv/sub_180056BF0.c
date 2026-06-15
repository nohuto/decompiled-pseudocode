/*
 * XREFs of sub_180056BF0 @ 0x180056BF0
 * Callers:
 *     sub_180056A7C @ 0x180056A7C (sub_180056A7C.c)
 *     sub_18013EB5C @ 0x18013EB5C (sub_18013EB5C.c)
 *     sub_18013F474 @ 0x18013F474 (sub_18013F474.c)
 * Callees:
 *     sub_1800524BC @ 0x1800524BC (sub_1800524BC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_18013F474 @ 0x18013F474 (sub_18013F474.c)
 */

__int64 __fastcall sub_180056BF0(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  for ( ; *(_QWORD *)(a1 + 16); result = sub_18013F474(a1) )
  {
    if ( !*(_QWORD *)a1 )
      sub_1800B8610(2147500037LL);
    *(_QWORD *)a1 = **(_QWORD **)a1;
  }
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v2 = *(_QWORD **)(a1 + 24);
  if ( v2 )
  {
    result = sub_1800524BC(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
