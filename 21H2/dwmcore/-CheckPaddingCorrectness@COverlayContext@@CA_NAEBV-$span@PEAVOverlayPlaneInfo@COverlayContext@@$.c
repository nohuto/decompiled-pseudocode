/*
 * XREFs of ?CheckPaddingCorrectness@COverlayContext@@CA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@AEBVOverlayPlaneInfo@1@@Z @ 0x18017B668
 * Callers:
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002FF10 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18006BD88 (-DoesContain@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1.c)
 *     ?PaddingsIntersectWithDestRect@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x18017CCC4 (-PaddingsIntersectWithDestRect@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 */

char __fastcall COverlayContext::CheckPaddingCorrectness(
        __int64 a1,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char v3; // di
  bool DoesContain; // al
  _QWORD *v5; // r10
  const struct COverlayContext::OverlayPlaneInfo **v6; // rbx
  bool v7; // r14
  const struct COverlayContext::OverlayPlaneInfo **v8; // rbp
  const struct COverlayContext::OverlayPlaneInfo *v9; // r10
  const struct COverlayContext::OverlayPlaneInfo *v10; // rdx
  const struct COverlayContext::OverlayPlaneInfo *v11; // rcx
  const struct COverlayContext::OverlayPlaneInfo *v12; // r10

  v3 = 1;
  DoesContain = TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::DoesContain(
                  (__int64)a2 + 52,
                  (__int64)a2 + 68);
  v6 = (const struct COverlayContext::OverlayPlaneInfo **)v5[1];
  v7 = DoesContain;
  v8 = &v6[*v5];
  while ( v6 != v8 )
  {
    v9 = *v6;
    if ( *(_QWORD *)a2 != *(_QWORD *)*v6 )
      goto LABEL_9;
    if ( *((_DWORD *)a2 + 52) >= *((_DWORD *)v9 + 52) )
    {
      if ( TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::DoesContain(
             (__int64)v9 + 52,
             (__int64)v9 + 68) )
      {
        goto LABEL_9;
      }
      v10 = a2;
      v11 = v12;
    }
    else
    {
      if ( v7 )
        goto LABEL_9;
      v10 = *v6;
      v11 = a2;
    }
    if ( COverlayContext::PaddingsIntersectWithDestRect(v11, v10) )
      return 0;
LABEL_9:
    ++v6;
  }
  return v3;
}
