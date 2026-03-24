/*
 * XREFs of ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18004D7B0
 * Callers:
 *     ?CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x18004A70C (-CreateShaderBodies@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x1800267C0 (-reserve_region@-$vector_facade@PEBVCRenderingTechniqueFragment@@V-$buffer_impl@PEBVCRenderingTe.c)
 *     ??3@YAXPEAX_K@Z @ 0x180042800 (--3@YAXPEAX_K@Z.c)
 *     ?erase@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@0@Z @ 0x180048094 (-erase@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceD.c)
 *     ?insert@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@_KAEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x180048FE4 (-insert@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurface.c)
 *     ?CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x180049C84 (-CreateMaskShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTechni.c)
 *     ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18004A800 (-clear_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@US.c)
 *     ?CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@AEBV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@3@PEBVCBrushRenderingGraph@@@Z @ 0x18004B464 (-CreateEffectShaderBody@CRenderingTechniqueFragment@@AEAAJAEBV-$vector_facade@PEBVCRenderingTech.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x18004EEB4 (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180050934 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 *     ??$emplace_back@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAAEAUFragmentStackEntry@CFragmentIterator@@$$QEAU23@@Z @ 0x180050A58 (--$emplace_back@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFragmentIt.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C8E90 (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
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
  int v12; // eax
  unsigned int v13; // ecx
  _BYTE *v14; // rcx
  __int64 v15; // rax
  _BYTE *v16; // r9
  int MaskShaderBody; // eax
  unsigned __int64 v19; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE *v20; // [rsp+40h] [rbp-C8h] BYREF
  void *v21[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h]
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  int v24; // [rsp+68h] [rbp-A0h]
  _BYTE *v25; // [rsp+78h] [rbp-90h] BYREF
  _BYTE *v26; // [rsp+80h] [rbp-88h]
  char *v27; // [rsp+88h] [rbp-80h]
  _BYTE v28[48]; // [rsp+90h] [rbp-78h] BYREF
  char v29; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD *v30; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE *v31; // [rsp+D0h] [rbp-38h]
  __int64 *v32; // [rsp+D8h] [rbp-30h]
  _BYTE v33[128]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v34; // [rsp+160h] [rbp+58h] BYREF

  v25 = v28;
  v2 = 0;
  v26 = v28;
  v27 = &v29;
  v3 = *((unsigned int *)this + 15);
  v23 = 0LL;
  v24 = 0;
  v19 = (unsigned __int64)v28;
  if ( v3 )
  {
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::insert(
      &v25,
      &v20,
      &v19,
      (unsigned int)v3,
      (__int64)&v23);
  }
  else
  {
    v20 = v28;
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::erase(
      &v25,
      &v23,
      &v20,
      &v19);
  }
  for ( i = 0; i < *((_DWORD *)this + 15); *(_DWORD *)(v8 + 4 * v7 + 8) = v9 )
  {
    v5 = i++;
    v6 = 44 * v5;
    v7 = 3 * v5;
    v8 = (__int64)v25;
    v9 = *(_DWORD *)((char *)this + v6 + 76);
    *(_QWORD *)&v25[4 * v7] = *(_QWORD *)((char *)this + v6 + 68);
  }
  v22 = 0LL;
  v30 = v33;
  v24 = 0;
  v31 = v33;
  v32 = &v34;
  v23 = *((_QWORD *)this + 1);
  *(_OWORD *)v21 = 0LL;
  std::vector<CFragmentIterator::FragmentStackEntry>::emplace_back<CFragmentIterator::FragmentStackEntry>(v21, &v23);
  CFragmentIterator::FindFirst((CFragmentIterator *)v21);
  while ( 1 )
  {
    v10 = v21[0];
    if ( !(((char *)v21[1] - (char *)v21[0]) >> 4) )
      break;
    v11 = (_QWORD *)*((_QWORD *)v21[1] - 2);
    if ( *v11 )
    {
      v12 = CRenderingTechniqueFragment::CreateEffectShaderBody(v11, &v30, (__int64 *)&v25);
      v2 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1C1u, 0LL);
    }
    else
    {
      MaskShaderBody = CRenderingTechniqueFragment::CreateMaskShaderBody((__int64)v11, (int)&v30, (__int64)&v25);
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
                 (detail::liberal_expansion_policy *)&v30,
                 (v31 - (_BYTE *)v30) >> 3) = v11;
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
  v14 = v30;
  v15 = (v31 - (_BYTE *)v30) >> 3;
  if ( v15 )
    v31 -= 8 * v15;
  v30 = 0LL;
  if ( v14 == v33 )
    v14 = 0LL;
  operator delete(v14);
  v16 = v25;
  if ( (v26 - v25) / 12 )
  {
    detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v25,
      0LL,
      (v26 - v25) / 12);
    v16 = v25;
  }
  v25 = 0LL;
  if ( v16 == v28 )
    v16 = 0LL;
  operator delete(v16);
  return (unsigned int)v2;
}
