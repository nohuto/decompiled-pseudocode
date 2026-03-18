/*
 * XREFs of ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x180037534
 * Callers:
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x180036D6C (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 * Callees:
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x1800313B4 (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTechni.c)
 *     ?insert@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@_KAEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x180036DF0 (-insert@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurface.c)
 *     ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180036F94 (-clear_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@US.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x180037A3C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x180037A68 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTech.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18003A220 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x18003A288 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x18003A624 (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?erase@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@0@Z @ 0x1802AC99C (-erase@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceD.c)
 */

__int64 __fastcall CRenderingTechnique::CreateShaderBodies(CRenderingTechnique *this)
{
  unsigned int v2; // esi
  __int64 v3; // rax
  __int64 v4; // r8
  __int64 i; // r9
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rdi
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // ebx
  _BYTE *v15; // rcx
  __int64 v16; // rax
  _BYTE *v17; // rcx
  __int64 v18; // r8
  int MaskShaderBody; // eax
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  _BYTE *v23; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+48h] [rbp-B8h]
  _BYTE *v26; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  int v28; // [rsp+60h] [rbp-A0h]
  _BYTE *v29; // [rsp+70h] [rbp-90h] BYREF
  _BYTE *v30; // [rsp+78h] [rbp-88h]
  char *v31; // [rsp+80h] [rbp-80h]
  _BYTE v32[48]; // [rsp+88h] [rbp-78h] BYREF
  char v33; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE *v34; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v35; // [rsp+C8h] [rbp-38h]
  __int64 *v36; // [rsp+D0h] [rbp-30h]
  _BYTE v37[128]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v38; // [rsp+158h] [rbp+58h] BYREF

  v29 = v32;
  v2 = 0;
  v30 = v32;
  v31 = &v33;
  v3 = *((unsigned int *)this + 15);
  v27 = 0LL;
  v28 = 0;
  v23 = v32;
  if ( v3 )
  {
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::insert(
      &v29,
      &v26,
      &v23,
      (unsigned int)v3,
      (__int64)&v27);
  }
  else
  {
    v26 = v32;
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::erase(
      &v29,
      &v27,
      &v26,
      &v23);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 15); *(_DWORD *)(v9 + 4 * v8 + 8) = v4 )
  {
    v6 = (unsigned int)i;
    i = (unsigned int)(i + 1);
    v7 = 44 * v6;
    v8 = 3 * v6;
    v9 = (__int64)v29;
    v4 = *(unsigned int *)((char *)this + v7 + 76);
    *(_QWORD *)&v29[4 * v8] = *(_QWORD *)((char *)this + v7 + 68);
  }
  v25 = 0LL;
  v34 = v37;
  v28 = 0;
  v35 = v37;
  v36 = &v38;
  v27 = *((_QWORD *)this + 1);
  v24 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
    &v24,
    &v27,
    v4,
    i);
  CFragmentIterator::FindFirst((CFragmentIterator *)&v24);
  while ( 1 )
  {
    v10 = v24;
    if ( !((__int64)(*((_QWORD *)&v24 + 1) - v24) >> 4) )
      break;
    v11 = *(_QWORD **)(*((_QWORD *)&v24 + 1) - 16LL);
    if ( *v11 )
    {
      v12 = CRenderingTechniqueFragment::CreateEffectShaderBody(v11, &v34, &v29);
      v14 = v12;
      v2 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1D9u, 0LL);
        goto LABEL_25;
      }
    }
    else
    {
      MaskShaderBody = CRenderingTechniqueFragment::CreateMaskShaderBody((__int64)v11, (int)&v34, (__int64)&v29);
      v14 = MaskShaderBody;
      v2 = MaskShaderBody;
      if ( MaskShaderBody < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, MaskShaderBody, 0x1DEu, 0LL);
LABEL_25:
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v14, 0x12Bu, 0LL);
        v10 = v24;
        break;
      }
    }
    *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                 &v34,
                 (v35 - v34) >> 3) = v11;
    CFragmentIterator::MoveNext((CFragmentIterator *)&v24);
    v2 = v14;
  }
  if ( v10 )
  {
    std::_Deallocate<16,0>(v10, (v25 - v10) & 0xFFFFFFFFFFFFFFF0uLL);
    v25 = 0LL;
    v24 = 0LL;
  }
  v15 = v34;
  v16 = (v35 - v34) >> 3;
  if ( v16 )
    v35 -= 8 * v16;
  v34 = 0LL;
  if ( v15 == v37 )
    v15 = 0LL;
  DefaultHeap::Free(v15);
  v17 = v29;
  v18 = 0xAAAAAAAAAAAAAAABuLL * ((v30 - v29) >> 2);
  if ( v18 )
  {
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v29,
      0LL,
      v18);
    v17 = v29;
  }
  v29 = 0LL;
  if ( v17 == v32 )
    v17 = 0LL;
  DefaultHeap::Free(v17);
  return v2;
}
