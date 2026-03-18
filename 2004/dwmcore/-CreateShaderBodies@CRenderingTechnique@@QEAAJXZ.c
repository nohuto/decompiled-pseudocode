/*
 * XREFs of ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800B86F0
 * Callers:
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x1800B80A4 (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x180026794 (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x18004B49C (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x18004B5C0 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ?erase@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@0@Z @ 0x1800B6390 (-erase@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceD.c)
 *     ?insert@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@_KAEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x1800B7164 (-insert@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurface.c)
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x1800B7928 (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTechni.c)
 *     ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800B8198 (-clear_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@US.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x1800B8544 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTech.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800B8BE0 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C4B90 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderingTechnique::CreateShaderBodies(CRenderingTechnique *this)
{
  int v2; // ebx
  __int64 v3; // rax
  unsigned int i; // r9d
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r8d
  _BYTE *v10; // rcx
  _QWORD *v11; // rdi
  int EffectShaderBody; // eax
  __int64 v13; // rcx
  _BYTE *v14; // rcx
  __int64 v15; // rax
  _BYTE *v16; // r9
  int MaskShaderBody; // eax
  unsigned __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE *v20; // [rsp+40h] [rbp-C8h] BYREF
  void *v21[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h]
  __int128 v23; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE *v24; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v25; // [rsp+80h] [rbp-88h]
  char *v26; // [rsp+88h] [rbp-80h]
  _BYTE v27[48]; // [rsp+90h] [rbp-78h] BYREF
  char v28; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE *v29; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE *v30; // [rsp+D0h] [rbp-38h]
  __int64 *v31; // [rsp+D8h] [rbp-30h]
  _BYTE v32[128]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v33; // [rsp+160h] [rbp+58h] BYREF

  v24 = v27;
  v2 = 0;
  v25 = v27;
  v26 = &v28;
  v3 = *((unsigned int *)this + 15);
  *(_QWORD *)&v23 = 0LL;
  DWORD2(v23) = 0;
  v19 = (unsigned __int64)v27;
  if ( v3 )
  {
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::insert(
      &v24,
      &v20,
      &v19,
      (unsigned int)v3,
      (__int64)&v23);
  }
  else
  {
    v20 = v27;
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::erase(
      &v24,
      &v23,
      &v20,
      &v19);
  }
  for ( i = 0; i < *((_DWORD *)this + 15); *(_DWORD *)(v8 + 4 * v7 + 8) = v9 )
  {
    v5 = i++;
    v6 = 44 * v5;
    v7 = 3 * v5;
    v8 = (__int64)v24;
    v9 = *(_DWORD *)((char *)this + v6 + 76);
    *(_QWORD *)&v24[4 * v7] = *(_QWORD *)((char *)this + v6 + 68);
  }
  v22 = 0LL;
  v29 = v32;
  DWORD2(v23) = 0;
  v30 = v32;
  v31 = &v33;
  *(_QWORD *)&v23 = *((_QWORD *)this + 1);
  *(_OWORD *)v21 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(
    (char **)v21,
    &v23);
  CFragmentIterator::FindFirst((CFragmentIterator *)v21);
  while ( 1 )
  {
    v10 = v21[0];
    if ( !(((char *)v21[1] - (char *)v21[0]) >> 4) )
      break;
    v11 = (_QWORD *)*((_QWORD *)v21[1] - 2);
    if ( *v11 )
    {
      EffectShaderBody = CRenderingTechniqueFragment::CreateEffectShaderBody(v11, (int)&v29, (__int64)&v24);
      v2 = EffectShaderBody;
      if ( EffectShaderBody < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, EffectShaderBody, 0x1C1u, 0LL);
    }
    else
    {
      MaskShaderBody = CRenderingTechniqueFragment::CreateMaskShaderBody((__int64)v11, (int)&v29, (__int64)&v24);
      v2 = MaskShaderBody;
      if ( MaskShaderBody < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, MaskShaderBody, 0x1C6u, 0LL);
    }
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v2, 0xC1u, 0LL);
      v10 = v21[0];
      break;
    }
    *(_QWORD *)detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
                 (detail::liberal_expansion_policy *)&v29,
                 (v30 - v29) >> 3) = v11;
    CFragmentIterator::MoveNext((CFragmentIterator *)v21);
  }
  if ( v10 )
  {
    v20 = v10;
    v19 = (v22 - (_QWORD)v10) & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v19 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned((void **)&v20, &v19);
      v10 = v20;
    }
    operator delete(v10);
    v22 = 0LL;
    *(_OWORD *)v21 = 0LL;
  }
  v14 = v29;
  v15 = (v30 - v29) >> 3;
  if ( v15 )
    v30 -= 8 * v15;
  v29 = 0LL;
  if ( v14 == v32 )
    v14 = 0LL;
  operator delete(v14);
  v16 = v24;
  if ( (v25 - v24) / 12 )
  {
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v24,
      0LL,
      (v25 - v24) / 12);
    v16 = v24;
  }
  v24 = 0LL;
  if ( v16 == v27 )
    v16 = 0LL;
  operator delete(v16);
  return (unsigned int)v2;
}
