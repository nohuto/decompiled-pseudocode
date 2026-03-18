/*
 * XREFs of ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x180010EBC
 * Callers:
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x180010C2C (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 * Callees:
 *     ??A?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEBAAEBURampPair@CoordMap@@_J@Z @ 0x18001105C (--A-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEBAAEBURampPair@CoordMap@@_J@Z.c)
 *     ?reserve_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAM_K0@Z @ 0x18001121C (-reserve_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        unsigned __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        float a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // rbx
  int v9; // r13d
  int v10; // edi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r12
  float v13; // xmm6_4
  float v14; // xmm7_4
  int *v15; // rsi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  int v18; // xmm6_4
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // [rsp+30h] [rbp-78h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = 0LL;
  if ( *a2 )
  {
    v9 = 0;
    v10 = 0;
    if ( (__int64)*a1 > 0 )
    {
      v11 = 0LL;
      do
      {
        if ( v11 >= *a1 )
        {
LABEL_28:
          ((void (__fastcall *)(unsigned __int64 *, _QWORD *, _QWORD *))`gsl::details::get_terminate_handler'::`2'::handler)(
            a1,
            a2,
            a3);
          __debugbreak();
        }
        v12 = a1[1];
        v13 = 0.0;
        v14 = *(float *)(v12 + 4 * v11);
        while ( 1 )
        {
          if ( v10 >= *a2 )
            goto LABEL_11;
          v21 = *(_QWORD *)gsl::span<CoordMap::RampPair const,-1>::operator[](a2, v10);
          if ( a4 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - *(float *)&v21) & _xmm) )
            break;
          if ( *(float *)&v21 > v14 )
          {
            if ( v10 )
              v19 = v10 - 1;
            else
              v19 = 0LL;
            v20 = gsl::span<CoordMap::RampPair const,-1>::operator[](a2, v19);
            v13 = (float)((float)(1.0
                                - (float)((float)(v14 - COERCE_FLOAT(*(_QWORD *)v20))
                                        / (float)(*(float *)&v21 - COERCE_FLOAT(*(_QWORD *)v20))))
                        * *(float *)(v20 + 8))
                + (float)((float)((float)(v14 - COERCE_FLOAT(*(_QWORD *)v20))
                                / (float)(*(float *)&v21 - COERCE_FLOAT(*(_QWORD *)v20)))
                        * *((float *)&v21 + 1));
            goto LABEL_11;
          }
          ++v10;
        }
        v13 = *((float *)&v21 + 1);
        if ( v9 )
        {
          if ( v11 - 1 >= *a1 )
            goto LABEL_28;
          if ( a4 < COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)(v12 + 4 * v11) - *(float *)(v12 + 4 * v11 - 4)) & _xmm) )
            goto LABEL_11;
        }
        if ( v10 + 1 < *a2 )
        {
          while ( a4 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)gsl::span<CoordMap::RampPair const,-1>::operator[](
                                                                     a2,
                                                                     v10 + 1LL) - v14) & _xmm) )
            ++v10;
        }
        v13 = *(float *)(gsl::span<CoordMap::RampPair const,-1>::operator[](a2, v10) + 8);
LABEL_11:
        ++v9;
        ++v11;
        *(float *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                    a3,
                    (__int64)(a3[1] - *a3) >> 2) = v13;
        result = v9;
      }
      while ( v9 < (__int64)*a1 );
    }
  }
  else
  {
    v15 = (int *)a1[1];
    v16 = *a1;
    result = (unsigned __int64)&v15[v16];
    v17 = (v16 * 4) >> 2;
    if ( (unsigned __int64)v15 > result )
      v17 = 0LL;
    if ( v17 )
    {
      do
      {
        v18 = *v15;
        result = detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                   a3,
                   (__int64)(a3[1] - *a3) >> 2);
        ++v5;
        ++v15;
        *(_DWORD *)result = v18;
      }
      while ( v5 != v17 );
    }
  }
  return result;
}
