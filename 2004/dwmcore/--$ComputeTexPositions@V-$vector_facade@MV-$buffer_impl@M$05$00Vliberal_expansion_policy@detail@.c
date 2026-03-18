/*
 * XREFs of ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x1800869E4
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EC7F0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 * Callees:
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x180018084 (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x18007EB54 (--$ComputeTexPositionsWorker@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@d.c)
 *     ?GetRampValues@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEAV?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@3@@Z @ 0x180083218 (-GetRampValues@CoordMap@@AEBAXAEBV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry.c)
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180084AC0 (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ?clear@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180084B2C (-clear@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_exp.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x1800869C0 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ?reserve@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x180086BC8 (-reserve@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@deta.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        __int64 *a1,
        __int64 a2,
        __int128 *a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6,
        float a7)
{
  unsigned int *v10; // r8
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  gsl::details *v17; // rcx
  __int64 *v18; // rax
  gsl::details *v19; // rcx
  bool v20; // zf
  __int128 v21; // [rsp+20h] [rbp-91h] BYREF
  __int128 v22; // [rsp+30h] [rbp-81h] BYREF
  __int64 v23[2]; // [rsp+40h] [rbp-71h] BYREF
  gsl::details *v24; // [rsp+50h] [rbp-61h] BYREF
  _BYTE *v25; // [rsp+58h] [rbp-59h]
  __int64 *v26; // [rsp+60h] [rbp-51h]
  _BYTE v27[72]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-1h] BYREF

  v24 = (gsl::details *)v27;
  v25 = v27;
  v26 = &v28;
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(a5);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(a6);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve(a5, *v10);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve(a6, *a4);
  CoordMap::GetRampValues(v11, a1, v12, (__int64)&v24);
  *(_QWORD *)&v21 = gsl::narrow<__int64,unsigned __int64>((v25 - (_BYTE *)v24) / 12);
  if ( (__int64)v21 < 0 || (*((_QWORD *)&v21 + 1) = v24) == 0LL && (_QWORD)v21 )
  {
    `gsl::details::get_terminate_handler'::`2'::handler((gsl::details *)v21);
    __debugbreak();
  }
  v13 = gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(v23, (__int64 *)&v21);
  v22 = *a3;
  v21 = *(_OWORD *)v13;
  CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    (unsigned __int64)&v22,
    (unsigned __int64 *)&v21,
    a5,
    a7);
  CoordMap::GetRampValues(v14, a1 + 23, v15, (__int64)&v24);
  v16 = gsl::narrow<__int64,unsigned __int64>((v25 - (_BYTE *)v24) / 12);
  *(_QWORD *)&v21 = v16;
  if ( v16 < 0 || (v17 = v24, (*((_QWORD *)&v21 + 1) = v24) == 0LL) && v16 )
  {
    `gsl::details::get_terminate_handler'::`2'::handler(v17);
    __debugbreak();
  }
  v18 = gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(v23, (__int64 *)&v21);
  v21 = *(_OWORD *)a4;
  v22 = *(_OWORD *)v18;
  CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    (unsigned __int64)&v21,
    (unsigned __int64 *)&v22,
    a6,
    a7);
  detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear(&v24);
  v19 = v24;
  v20 = v24 == (gsl::details *)v27;
  v24 = 0LL;
  if ( v20 )
    v19 = 0LL;
  operator delete(v19);
}
