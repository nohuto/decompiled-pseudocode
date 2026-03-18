/*
 * XREFs of ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x18004F540
 * Callers:
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x18004F010 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAM_K0@Z @ 0x18004F874 (-reserve_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        unsigned __int64 i,
        unsigned __int64 *a2,
        _QWORD *a3,
        float a4)
{
  unsigned __int64 result; // rax
  __int64 v5; // rbx
  unsigned __int64 *v7; // r13
  unsigned __int64 *v8; // r14
  int v9; // r12d
  int v10; // esi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  float v14; // xmm6_4
  float v15; // xmm1_4
  __int64 v16; // rax
  int *v17; // rsi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  int v20; // xmm6_4
  float v21; // xmm1_4
  __int64 v22; // [rsp+30h] [rbp-58h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = 0LL;
  v7 = a2;
  v8 = (unsigned __int64 *)i;
  if ( !*a2 )
  {
    v17 = *(int **)(i + 8);
    v18 = *(_QWORD *)i;
    result = (unsigned __int64)&v17[v18];
    v19 = (v18 * 4) >> 2;
    if ( (unsigned __int64)v17 > result )
      v19 = 0LL;
    if ( v19 )
    {
      do
      {
        v20 = *v17;
        result = detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                   a3,
                   (__int64)(a3[1] - *a3) >> 2);
        ++v5;
        ++v17;
        *(_DWORD *)result = v20;
      }
      while ( v5 != v19 );
    }
    return result;
  }
  v9 = 0;
  v10 = 0;
  if ( *(__int64 *)i <= 0 )
    return result;
  v11 = 0LL;
  v12 = 0LL;
  do
  {
    if ( v11 >= *v8 )
      goto LABEL_5;
    v13 = v8[1];
    v14 = 0.0;
    v15 = *(float *)(v13 + 4 * v11);
    if ( v10 >= (__int64)*v7 )
      goto LABEL_13;
    i = 12 * v12;
    while ( 1 )
    {
      if ( v12 >= *v7 )
        goto LABEL_5;
      a2 = (unsigned __int64 *)v7[1];
      v22 = *(unsigned __int64 *)((char *)a2 + i);
      if ( a4 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - *(float *)&v22) & _xmm) )
      {
        LODWORD(v14) = HIDWORD(*(unsigned __int64 *)((char *)a2 + i));
        if ( v9 )
        {
          if ( v11 - 1 >= *v8 )
            goto LABEL_5;
          if ( a4 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - *(float *)(v13 + 4 * v11 - 4)) & _xmm) )
            goto LABEL_13;
        }
        i = v10 + 1;
        if ( (__int64)i >= (__int64)*v7 )
        {
LABEL_22:
          if ( v12 < *v7 )
          {
            v14 = *((float *)a2 + 3 * v12 + 2);
            goto LABEL_13;
          }
        }
        else
        {
          v16 = 12 * (v12 + 1);
          for ( i = v12 + 1; i < *v7; ++i )
          {
            if ( a4 < COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)((char *)a2 + v16) - v15) & _xmm) )
              goto LABEL_22;
            ++v10;
            ++v12;
            v16 += 12LL;
          }
        }
LABEL_5:
        ((void (__fastcall *)(unsigned __int64, unsigned __int64 *))`gsl::details::get_terminate_handler'::`2'::handler)(
          i,
          a2);
        __debugbreak();
      }
      if ( *(float *)&v22 > v15 )
        break;
      ++v10;
      ++v12;
      i += 12LL;
      if ( v10 >= (__int64)*v7 )
        goto LABEL_13;
    }
    if ( v10 )
    {
      i = v10 - 1;
      if ( i < *v7 )
      {
        a2 = (unsigned __int64 *)((char *)a2 + 12 * i);
        goto LABEL_34;
      }
      goto LABEL_5;
    }
    if ( !*v7 )
      goto LABEL_5;
LABEL_34:
    v21 = (float)(v15 - COERCE_FLOAT(*a2)) / (float)(*(float *)&v22 - COERCE_FLOAT(*a2));
    v14 = (float)((float)(1.0 - v21) * *((float *)a2 + 2)) + (float)(v21 * *((float *)&v22 + 1));
LABEL_13:
    ++v9;
    ++v11;
    *(float *)detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve_region(
                a3,
                (__int64)(a3[1] - *a3) >> 2) = v14;
    result = v9;
  }
  while ( v9 < (__int64)*v8 );
  return result;
}
