/*
 * XREFs of CmpSplitParentKeyName @ 0x1405CD168
 * Callers:
 *     CmpDoReDoCreateKey @ 0x140881FCC (CmpDoReDoCreateKey.c)
 *     CmpDoReOpenTransKey @ 0x140882410 (CmpDoReOpenTransKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSplitParentKeyName(__m128i *a1, __m128i *a2, __m128i *a3)
{
  __int64 result; // rax
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  int v8; // edx
  __int16 v9; // cx
  bool v10; // zf
  __m128i v11; // [rsp+0h] [rbp-28h]
  __m128i v12; // [rsp+10h] [rbp-18h]

  if ( !a1->m128i_i16[0] )
  {
    v6 = 0LL;
LABEL_3:
    v7 = 0LL;
    goto LABEL_4;
  }
  v6 = *a1;
  result = (unsigned int)_mm_cvtsi128_si32(*a1);
  v11 = *a1;
  v8 = ((unsigned __int16)result >> 1) - 1;
  v12 = *a1;
  if ( v8 < 0 )
    goto LABEL_3;
  do
  {
    result = v8;
    if ( *(_WORD *)(v12.m128i_i64[1] + 2LL * v8) == 92 )
      break;
    --v8;
  }
  while ( v8 >= 0 );
  if ( v8 < 0 )
    goto LABEL_3;
  v9 = 2 * v8;
  if ( 2 * (_WORD)v8 )
  {
    v12.m128i_i16[1] = 2 * v8;
    v12.m128i_i16[0] = 2 * v8;
    v7 = v12;
  }
  else
  {
    v7 = 0LL;
  }
  v10 = -2 - v9 + v11.m128i_i16[0] == 0;
  v11.m128i_i16[0] += -2 - v9;
  v11.m128i_i16[1] = v11.m128i_i16[0];
  result = a1->m128i_i64[1];
  if ( v10 )
  {
    v6 = 0LL;
  }
  else
  {
    v11.m128i_i64[1] = result + 2LL * (v8 + 1);
    v6 = v11;
  }
LABEL_4:
  *a2 = v7;
  *a3 = v6;
  return result;
}
