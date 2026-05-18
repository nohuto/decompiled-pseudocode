/*
 * XREFs of sub_180013870 @ 0x180013870
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013690 @ 0x180013690 (sub_180013690.c)
 *     sub_180092088 @ 0x180092088 (sub_180092088.c)
 *     sub_180092E7C @ 0x180092E7C (sub_180092E7C.c)
 *     sub_180092FA8 @ 0x180092FA8 (sub_180092FA8.c)
 *     sub_180092FB8 @ 0x180092FB8 (sub_180092FB8.c)
 *     sub_180093080 @ 0x180093080 (sub_180093080.c)
 *     sub_1800934D0 @ 0x1800934D0 (sub_1800934D0.c)
 *     sub_18009360C @ 0x18009360C (sub_18009360C.c)
 *     sub_180093734 @ 0x180093734 (sub_180093734.c)
 *     sub_18009397C @ 0x18009397C (sub_18009397C.c)
 *     sub_180093AA8 @ 0x180093AA8 (sub_180093AA8.c)
 *     sub_180093BD4 @ 0x180093BD4 (sub_180093BD4.c)
 */

__int64 __fastcall sub_180013870(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    sub_180093BD4();
    sub_180092FA8(*(_QWORD *)(a1 + 16), a2[14]);
    if ( *a2 )
    {
      if ( *((_QWORD *)a2 + 1) )
        sub_18009360C(*(_QWORD *)(a1 + 16));
      v4 = *((_QWORD *)a2 + 2);
      if ( v4 )
        sub_1800934D0(*(_QWORD *)(a1 + 16), v4, 0LL);
      v5 = *((_QWORD *)a2 + 3);
      if ( v5 )
        sub_180093734(*(_QWORD *)(a1 + 16), v5, 0LL);
      if ( *((_QWORD *)a2 + 4) )
        sub_180092E7C(*(_QWORD *)(a1 + 16));
      if ( *((_QWORD *)a2 + 5) )
        sub_18009397C(*(_QWORD *)(a1 + 16));
      if ( *((_QWORD *)a2 + 6) )
        sub_180093AA8(*(_QWORD *)(a1 + 16));
      if ( a2[14] )
      {
        if ( *((_QWORD *)a2 + 8) )
        {
          sub_180092FB8(*(_QWORD *)(a1 + 16));
        }
        else if ( *((_QWORD *)a2 + 9) )
        {
          sub_180093080(*(_QWORD *)(a1 + 16));
        }
      }
      sub_180092088(*(_QWORD *)(a1 + 16), 3LL);
      sub_180013690((_DWORD *)(a1 + 32), *a2, *((unsigned __int64 **)a2 + 1), 12LL);
    }
    else
    {
      *(_QWORD *)(a1 + 32) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *(_DWORD *)(a1 + 40) = 0;
      *(_QWORD *)(a1 + 44) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *(_DWORD *)(a1 + 52) = 0;
    }
  }
  catch ( ... )
  {
    sub_18000DC98(retaddr, 94, (__int64)"SpectreMesh.cpp", 0x80004005);
    return 2147500037LL;
  }
  return 0LL;
}
