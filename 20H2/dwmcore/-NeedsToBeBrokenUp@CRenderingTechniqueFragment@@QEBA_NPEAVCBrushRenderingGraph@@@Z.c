/*
 * XREFs of ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x180057CC8
 * Callers:
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180057C80 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18004F2C4 (-clear_region@-$vector_facade@URampPair@CoordMap@@V-$buffer_impl@URampPair@CoordMap@@$05$00Vlibe.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180057D94 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

bool __fastcall CRenderingTechniqueFragment::NeedsToBeBrokenUp(
        CRenderingTechniqueFragment *this,
        struct CBrushRenderingGraph *a2)
{
  unsigned int CumulativeSurfaceInputCount; // eax
  _BYTE *v3; // r9
  bool v4; // bl
  __int64 v5; // rdx
  _BYTE *v7; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE *v8; // [rsp+28h] [rbp-D8h]
  char *v9; // [rsp+30h] [rbp-D0h]
  _BYTE v10[192]; // [rsp+38h] [rbp-C8h] BYREF
  char v11; // [rsp+F8h] [rbp-8h] BYREF

  v7 = v10;
  v8 = v10;
  v9 = &v11;
  CumulativeSurfaceInputCount = CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(this, a2, &v7);
  v3 = v7;
  v4 = CumulativeSurfaceInputCount > 4;
  v5 = (v8 - v7) / 12;
  if ( v5 )
  {
    detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)&v7,
      v5,
      (v8 - v7) / 12);
    v3 = v7;
  }
  v7 = 0LL;
  if ( v3 == v10 )
    v3 = 0LL;
  operator delete(v3);
  return v4;
}
