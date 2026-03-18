/*
 * XREFs of ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x18003BD54
 * Callers:
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18003B9B0 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 * Callees:
 *     ??A?$span@$$CBM$0?0@gsl@@QEBAAEBM_K@Z @ 0x18003BEE4 (--A-$span@$$CBM$0-0@gsl@@QEBAAEBM_K@Z.c)
 *     ??A?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEBAAEBURampPair@CoordMap@@_K@Z @ 0x18003BF08 (--A-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEBAAEBURampPair@CoordMap@@_K@Z.c)
 *     ?reserve_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAM_K0@Z @ 0x18003BF30 (-reserve_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail.c)
 */

float *__fastcall CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        _QWORD *a3,
        float a4)
{
  float *result; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 i; // rbp
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm6_4
  int *v13; // rbx
  int *v14; // rdi
  int v15; // xmm6_4
  __int64 v16; // rax
  float v17; // xmm8_4
  float v18[12]; // [rsp+30h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  result = (float *)&retaddr;
  if ( *a2 )
  {
    v8 = 0LL;
    for ( i = 0LL; i < *a1; *result = v10 )
    {
      v10 = 0.0;
      v11 = *(float *)gsl::span<float const,-1>::operator[](a1, i);
      while ( v8 < *a2 )
      {
        *(_QWORD *)v18 = *(_QWORD *)gsl::span<CoordMap::RampPair const,-1>::operator[](a2, v8);
        if ( a4 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - v18[0]) & _xmm) )
        {
          v10 = v18[1];
          if ( !i
            || (v12 = *(float *)gsl::span<float const,-1>::operator[](a1, i - 1),
                a4 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)gsl::span<float const,-1>::operator[](a1, i) - v12) & _xmm)) )
          {
            if ( v8 + 1 < *a2 )
            {
              while ( a4 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                           *(float *)gsl::span<CoordMap::RampPair const,-1>::operator[](a2, v8 + 1)
                                         - v11) & _xmm) )
                ++v8;
            }
            v10 = *(float *)(gsl::span<CoordMap::RampPair const,-1>::operator[](a2, v8) + 8);
          }
          break;
        }
        if ( v18[0] > v11 )
        {
          v16 = gsl::span<CoordMap::RampPair const,-1>::operator[](
                  a2,
                  (v8 - 1) & ((unsigned __int128)-(__int128)v8 >> 64));
          v17 = (float)(v11 - COERCE_FLOAT(*(_QWORD *)v16)) / (float)(v18[0] - COERCE_FLOAT(*(_QWORD *)v16));
          v10 = (float)((float)(1.0 - v17) * *(float *)(v16 + 8)) + (float)(v17 * v18[1]);
          break;
        }
        ++v8;
      }
      result = (float *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                          a3,
                          (__int64)(a3[1] - *a3) >> 2);
      ++i;
    }
  }
  else
  {
    v13 = (int *)a1[1];
    result = (float *)*a1;
    v14 = &v13[*a1];
    while ( v13 != v14 )
    {
      v15 = *v13;
      result = (float *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                          a3,
                          (__int64)(a3[1] - *a3) >> 2);
      ++v13;
      *(_DWORD *)result = v15;
    }
  }
  return result;
}
