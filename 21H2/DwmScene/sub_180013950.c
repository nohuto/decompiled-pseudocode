/*
 * XREFs of sub_180013950 @ 0x180013950
 * Callers:
 *     <none>
 * Callees:
 *     sub_180013770 @ 0x180013770 (sub_180013770.c)
 *     sub_180097958 @ 0x180097958 (sub_180097958.c)
 *     sub_18009874C @ 0x18009874C (sub_18009874C.c)
 *     sub_180098878 @ 0x180098878 (sub_180098878.c)
 *     sub_180098888 @ 0x180098888 (sub_180098888.c)
 *     sub_180098950 @ 0x180098950 (sub_180098950.c)
 *     sub_180098DA0 @ 0x180098DA0 (sub_180098DA0.c)
 *     sub_180098EDC @ 0x180098EDC (sub_180098EDC.c)
 *     sub_180099004 @ 0x180099004 (sub_180099004.c)
 *     sub_18009924C @ 0x18009924C (sub_18009924C.c)
 *     sub_180099378 @ 0x180099378 (sub_180099378.c)
 *     sub_1800994A4 @ 0x1800994A4 (sub_1800994A4.c)
 */

__int64 __fastcall sub_180013950(__int64 a1, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    sub_1800994A4();
    sub_180098878(*(_QWORD *)(a1 + 16), a2[14]);
    if ( *a2 )
    {
      if ( *((_QWORD *)a2 + 1) )
        sub_180098EDC(*(_QWORD *)(a1 + 16));
      v4 = *((_QWORD *)a2 + 2);
      if ( v4 )
        sub_180098DA0(*(_QWORD *)(a1 + 16), v4, 0LL);
      v5 = *((_QWORD *)a2 + 3);
      if ( v5 )
        sub_180099004(*(_QWORD *)(a1 + 16), v5, 0LL);
      if ( *((_QWORD *)a2 + 4) )
        sub_18009874C(*(_QWORD *)(a1 + 16));
      if ( *((_QWORD *)a2 + 5) )
        sub_18009924C(*(_QWORD *)(a1 + 16));
      if ( *((_QWORD *)a2 + 6) )
        sub_180099378(*(_QWORD *)(a1 + 16));
      if ( a2[14] )
      {
        if ( *((_QWORD *)a2 + 8) )
        {
          sub_180098888(*(_QWORD *)(a1 + 16));
        }
        else if ( *((_QWORD *)a2 + 9) )
        {
          sub_180098950(*(_QWORD *)(a1 + 16));
        }
      }
      sub_180097958(*(_QWORD *)(a1 + 16), 3LL);
      sub_180013770((_DWORD *)(a1 + 32), *a2, *((unsigned __int64 **)a2 + 1), 12LL);
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
    sub_18000DD78(retaddr, 94, (__int64)"SpectreMesh.cpp", 0x80004005);
    return 2147500037LL;
  }
  return 0LL;
}
