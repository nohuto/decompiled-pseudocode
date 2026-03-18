/*
 * XREFs of ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800CD180
 * Callers:
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@BA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180105250 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@BA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180105590 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@LA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801055B0 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@LA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@BI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180107510 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@BI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@CI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180107570 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@CI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@FA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180107610 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@FA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@KA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180107710 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@KA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@EI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180107830 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@EI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N1PEAV2@@Z @ 0x1800B788C (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrush::AddOcclusionInformation(
        CBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __int64 v4; // r9
  __int128 v6; // [rsp+30h] [rbp-38h] BYREF
  __int128 v7; // [rsp+40h] [rbp-28h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(char *, const struct D2D_SIZE_F *, __int128 *))(*((_QWORD *)this - 14) + 296LL))(
         (char *)this - 112,
         a3,
         &v6) )
  {
    v7 = v6;
    COcclusionContext::CollectRectangleForOcclusion((__int64)a2, (float *)&v7, 0, v4, 0LL);
  }
  return 0LL;
}
