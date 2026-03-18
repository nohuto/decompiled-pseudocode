/*
 * XREFs of sub_1C00318A8 @ 0x1C00318A8
 * Callers:
 *     sub_1C00298F8 @ 0x1C00298F8 (sub_1C00298F8.c)
 * Callees:
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__m128 *__fastcall sub_1C00318A8(__int64 a1, unsigned __int64 a2, __int64 a3, _BYTE *a4)
{
  __int16 v4; // ax
  unsigned __int16 v5; // si
  __m128 *PoolWithTag; // rax
  __m128 *v9; // rbx
  int v10; // edx
  int v11; // ecx
  __int32 *v12; // rax

  v4 = (unsigned __int8)a4[4];
  v5 = 88;
  if ( (unsigned __int8)v4 > 1u )
    v5 = 24 * v4 + 64;
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, v5, 0x42554855u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    sub_1C001D340(PoolWithTag, 0, v5);
    sub_1C001D340(v9, 0, v5);
    v10 = 0;
    v9[2].m128_i8[10] = a4[2];
    v9[2].m128_i8[11] = a4[3];
    v9[3].m128_i32[2] = (unsigned __int8)a4[4];
    LOBYTE(v11) = a4[4];
    if ( (_BYTE)v11 )
    {
      v12 = &v9[5].m128_i32[1];
      do
      {
        *(v12 - 1) = -1;
        ++v10;
        *v12 = 0;
        v12 += 6;
        v11 = (unsigned __int8)a4[4];
      }
      while ( v10 < v11 );
    }
    v9[2].m128_i16[4] = 24 * ((unsigned __int8)v11 + 1);
    v9->m128_i16[0] = v5;
    v9->m128_i16[1] = 0;
    v9[1].m128_u64[1] = a2;
  }
  return v9;
}
