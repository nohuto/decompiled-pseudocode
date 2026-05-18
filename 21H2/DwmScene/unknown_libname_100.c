/*
 * XREFs of unknown_libname_100 @ 0x180010C5C
 * Callers:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180031AA0 @ 0x180031AA0 (sub_180031AA0.c)
 *     sub_18007E4C4 @ 0x18007E4C4 (sub_18007E4C4.c)
 *     sub_18007E8F0 @ 0x18007E8F0 (sub_18007E8F0.c)
 *     sub_1800A8788 @ 0x1800A8788 (sub_1800A8788.c)
 *     sub_1800C09DC @ 0x1800C09DC (sub_1800C09DC.c)
 *     sub_1800D1368 @ 0x1800D1368 (sub_1800D1368.c)
 *     sub_18011B11C @ 0x18011B11C (sub_18011B11C.c)
 *     sub_18011B3BC @ 0x18011B3BC (sub_18011B3BC.c)
 *     sub_18011B9C8 @ 0x18011B9C8 (sub_18011B9C8.c)
 *     sub_18012B49A @ 0x18012B49A (sub_18012B49A.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

// Microsoft VisualC v14 64bit runtime
__int64 *__fastcall unknown_libname_100(__int64 *a1, _BYTE *a2)
{
  __int64 *v2; // rbx
  size_t v3; // rdi
  void *v4; // rsi

  v2 = a1;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 > a1[3] )
    return sub_18000FC14(a1, v3, 0LL, a2);
  v4 = a1;
  if ( (unsigned __int64)a1[3] >= 0x10 )
    v4 = (void *)*a1;
  a1[2] = v3;
  memmove(v4, a2, v3);
  *((_BYTE *)v4 + v3) = 0;
  return v2;
}
