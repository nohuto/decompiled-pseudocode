/*
 * XREFs of ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18009C260
 * Callers:
 *     ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x18009C194 (-NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18009C260 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x18026B088 (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x18009BEB8 (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@.c)
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18009C260 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 *     ?GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceDescription@1@@Z @ 0x18009C358 (-GetSurfaceDescription@CRenderingTechniqueFragment@@AEBAXPEBVCBrushRenderingGraph@@IPEAUSurfaceD.c)
 *     ??8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z @ 0x18009C484 (--8SurfaceDescription@CRenderingTechniqueFragment@@QEBA_NAEBU01@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(
        CRenderingTechniqueFragment *a1,
        const struct CBrushRenderingGraph *a2,
        __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v4; // edi
  __int64 v5; // rbx
  __int64 v9; // rbp
  __int64 v10; // rcx
  void *v12; // r8
  void *i; // rcx
  char *v14; // rax
  int v15; // ecx
  __int64 v16; // rcx
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  int v18; // [rsp+28h] [rbp-50h]

  v3 = 0;
  v4 = 0;
  v5 = (__int64)(*((_QWORD *)a1 + 5) - *((_QWORD *)a1 + 4)) >> 4;
  if ( (_DWORD)v5 )
  {
    v9 = 0LL;
    do
    {
      v10 = *(_QWORD *)(*((_QWORD *)a1 + 4) + v9 + 8);
      if ( v10 )
      {
        v3 += CRenderingTechniqueFragment::GetCumulativeSurfaceInputCount(v10, a2, a3);
      }
      else
      {
        CRenderingTechniqueFragment::GetSurfaceDescription(
          a1,
          a2,
          v4,
          (struct CRenderingTechniqueFragment::SurfaceDescription *)&v17);
        v12 = *(void **)(a3 + 8);
        for ( i = *(void **)a3; ; i = (void *)(v16 + 12) )
        {
          if ( v12 == i )
            goto LABEL_9;
          if ( (unsigned __int8)CRenderingTechniqueFragment::SurfaceDescription::operator==(i) )
            break;
        }
        if ( v12 == (void *)v16 )
        {
LABEL_9:
          v14 = detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::reserve_region(
                  (void **)a3,
                  ((__int64)v12 - *(_QWORD *)a3) / 12,
                  (__int64)v12 - *(_QWORD *)a3);
          ++v3;
          v15 = v18;
          *(_QWORD *)v14 = v17;
          *((_DWORD *)v14 + 2) = v15;
        }
      }
      ++v4;
      v9 += 16LL;
    }
    while ( v4 < (unsigned int)v5 );
  }
  return v3;
}
