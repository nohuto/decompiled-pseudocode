/*
 * XREFs of sub_180030814 @ 0x180030814
 * Callers:
 *     sub_1800306E8 @ 0x1800306E8 (sub_1800306E8.c)
 * Callees:
 *     sub_180009868 @ 0x180009868 (sub_180009868.c)
 *     sub_18000E660 @ 0x18000E660 (sub_18000E660.c)
 *     sub_18000E890 @ 0x18000E890 (sub_18000E890.c)
 *     sub_18003056C @ 0x18003056C (sub_18003056C.c)
 */

_QWORD *__fastcall sub_180030814(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  __int64 v5; // rbx
  _QWORD *result; // rax
  __int64 v7; // rdi
  __int64 v8; // rbx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  _BitScanReverse64(&v4, (a2 - 1) | 1);
  v5 = 1LL << ((unsigned __int8)v4 + 1);
  if ( 2 * v5 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 24)) >> 3) )
  {
    if ( (unsigned __int64)(2 * v5) > 0x1FFFFFFFFFFFFFFFLL )
      sub_180009868();
    sub_18000E890((char **)(a1 + 24), 2 * v5);
  }
  v10 = *(_QWORD *)(a1 + 8);
  sub_18000E660(a1 + 24, 2 * v5, &v10);
  *(_QWORD *)(a1 + 56) = v5;
  *(_QWORD *)(a1 + 48) = v5 - 1;
  result = *(_QWORD **)(a1 + 8);
  if ( (_QWORD *)*result != result )
  {
    v7 = result[1];
    do
    {
      v8 = **(_QWORD **)(a1 + 8);
      result = (_QWORD *)sub_18003056C((_QWORD *)a1, (__int64)v9, (_QWORD *)(v8 + 16), (void **)v8);
    }
    while ( v8 != v7 );
  }
  return result;
}
