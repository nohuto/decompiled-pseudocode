/*
 * XREFs of ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x180010C2C
 * Callers:
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x180011370 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     ?reserve@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x180010E94 (-reserve@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@deta.c)
 *     ??$ComputeTexPositionsWorker@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@KAXV?$span@$$CBM$0?0@gsl@@V?$span@$$CBURampPair@CoordMap@@$0?0@2@AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@M@Z @ 0x180010EBC (--$ComputeTexPositionsWorker@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@d.c)
 *     ?clear@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180011C50 (-clear@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail.c)
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x180011C78 (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ?clear@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180011D18 (-clear@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_exp.c)
 *     ?GetRampValues@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEAV?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@3@@Z @ 0x180011D54 (-GetRampValues@CoordMap@@AEBAXAEBV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry.c)
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x1800BC0E0 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CoordMap::ComputeTexPositions<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>,detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int *v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  gsl::details *v16; // rcx
  __int128 *v17; // rax
  gsl::details *v18; // rcx
  bool v19; // zf
  __int128 v20; // [rsp+20h] [rbp-91h] BYREF
  __int128 v21; // [rsp+30h] [rbp-81h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-71h] BYREF
  gsl::details *v23; // [rsp+50h] [rbp-61h] BYREF
  _BYTE *v24; // [rsp+58h] [rbp-59h]
  __int64 *v25; // [rsp+60h] [rbp-51h]
  _BYTE v26[72]; // [rsp+68h] [rbp-49h] BYREF
  __int64 v27; // [rsp+B0h] [rbp-1h] BYREF

  v23 = (gsl::details *)v26;
  v24 = v26;
  v25 = &v27;
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(a5);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear(a6);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve(a5, *v9);
  detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve(a6, *a4);
  CoordMap::GetRampValues(v10, a1, v11, &v23);
  *(_QWORD *)&v20 = gsl::narrow<__int64,unsigned __int64>((v24 - (_BYTE *)v23) / 12);
  if ( (__int64)v20 < 0 || (*((_QWORD *)&v20 + 1) = v23) == 0LL && (_QWORD)v20 )
  {
    `gsl::details::get_terminate_handler'::`2'::handler((gsl::details *)v20);
    __debugbreak();
  }
  v12 = (__int128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(v22, &v20);
  v21 = *a3;
  v20 = *v12;
  CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    &v21,
    &v20,
    a5);
  CoordMap::GetRampValues(v13, a1 + 184, v14, &v23);
  v15 = gsl::narrow<__int64,unsigned __int64>((v24 - (_BYTE *)v23) / 12);
  *(_QWORD *)&v20 = v15;
  if ( v15 < 0 || (v16 = v23, (*((_QWORD *)&v20 + 1) = v23) == 0LL) && v15 )
  {
    `gsl::details::get_terminate_handler'::`2'::handler(v16);
    __debugbreak();
  }
  v17 = (__int128 *)gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(v22, &v20);
  v20 = *(_OWORD *)a4;
  v21 = *v17;
  CoordMap::ComputeTexPositionsWorker<detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>>(
    &v20,
    &v21,
    a6);
  detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear(&v23);
  v18 = v23;
  v19 = v23 == (gsl::details *)v26;
  v23 = 0LL;
  if ( v19 )
    v18 = 0LL;
  operator delete(v18);
}
