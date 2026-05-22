/*
 * XREFs of std::_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A4CF4
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800A5A94 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Insertion_sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        __int64 a1,
        __int64 a2)
{
  __int64 i; // rax
  __m128i v4; // xmm2
  __int64 v5; // r9
  __int64 v6; // rdx
  __int128 v7; // xmm3
  __int128 v8; // xmm4
  __int128 v9; // xmm5
  __int64 v10; // xmm6_8
  unsigned int v11; // r10d

  if ( a1 != a2 )
  {
    for ( i = a1 + 72; i != a2; i += 72LL )
    {
      v4 = *(__m128i *)i;
      v5 = i;
      v6 = i;
      v7 = *(_OWORD *)(i + 16);
      v8 = *(_OWORD *)(i + 32);
      v9 = *(_OWORD *)(i + 48);
      v10 = *(_QWORD *)(i + 64);
      v11 = _mm_cvtsi128_si32(*(__m128i *)i);
      if ( v11 >= *(_DWORD *)a1 )
      {
        while ( 1 )
        {
          v6 -= 72LL;
          if ( v11 >= *(_DWORD *)v6 )
            break;
          *(_OWORD *)v5 = *(_OWORD *)v6;
          *(_OWORD *)(v5 + 16) = *(_OWORD *)(v6 + 16);
          *(_OWORD *)(v5 + 32) = *(_OWORD *)(v6 + 32);
          *(_OWORD *)(v5 + 48) = *(_OWORD *)(v6 + 48);
          *(_QWORD *)(v5 + 64) = *(_QWORD *)(v6 + 64);
          v5 = v6;
        }
        *(__m128i *)v5 = v4;
        *(_OWORD *)(v5 + 16) = v7;
        *(_OWORD *)(v5 + 32) = v8;
        *(_OWORD *)(v5 + 48) = v9;
        *(_QWORD *)(v5 + 64) = v10;
      }
      else
      {
        if ( i != a1 )
        {
          do
          {
            v6 -= 72LL;
            *(_OWORD *)(v6 + 72) = *(_OWORD *)v6;
            *(_OWORD *)(v6 + 88) = *(_OWORD *)(v6 + 16);
            *(_OWORD *)(v6 + 104) = *(_OWORD *)(v6 + 32);
            *(_OWORD *)(v6 + 120) = *(_OWORD *)(v6 + 48);
            *(_QWORD *)(v6 + 136) = *(_QWORD *)(v6 + 64);
          }
          while ( v6 != a1 );
        }
        *(__m128i *)a1 = v4;
        *(_OWORD *)(a1 + 16) = v7;
        *(_OWORD *)(a1 + 32) = v8;
        *(_OWORD *)(a1 + 48) = v9;
        *(_QWORD *)(a1 + 64) = v10;
      }
    }
  }
  return a2;
}
