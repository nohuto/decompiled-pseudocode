/*
 * XREFs of sub_1801007F8 @ 0x1801007F8
 * Callers:
 *     sub_180100A6C @ 0x180100A6C (sub_180100A6C.c)
 * Callees:
 *     sub_1801005BC @ 0x1801005BC (sub_1801005BC.c)
 */

__int64 __fastcall sub_1801007F8(
        float *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        __int64 a7,
        char a8)
{
  __int64 v10; // rdi
  float *v11; // r8
  __int64 v12; // rdx
  float *v14; // r10
  __int64 v15; // rdx

  if ( a4 > a5 )
  {
    v14 = a1;
    v15 = (a2 - (__int64)a1) >> 4;
    while ( v15 > 0 )
    {
      if ( v14[4 * (v15 >> 1)] <= *(float *)(a2 + 16 * (a5 >> 1)) )
      {
        v14 += 4 * (v15 >> 1) + 4;
        v15 += -1 - (v15 >> 1);
      }
      else
      {
        v15 >>= 1;
      }
    }
    return sub_1801005BC(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             v14,
             a2 + 16 * (a5 >> 1),
             ((char *)v14 - (char *)a1) >> 4,
             a5 >> 1);
  }
  else
  {
    v10 = a2;
    v11 = &a1[4 * (a4 >> 1)];
    v12 = (a3 - a2) >> 4;
    while ( v12 > 0 )
    {
      if ( *v11 <= *(float *)(v10 + 16 * (v12 >> 1)) )
      {
        v12 >>= 1;
      }
      else
      {
        v10 += 16 * (v12 >> 1) + 16;
        v12 += -1 - (v12 >> 1);
      }
    }
    return sub_1801005BC(a1, a2, a3, a4, a5, a6, a7, a8, v11, v10, a4 >> 1, (v10 - a2) >> 4);
  }
}
