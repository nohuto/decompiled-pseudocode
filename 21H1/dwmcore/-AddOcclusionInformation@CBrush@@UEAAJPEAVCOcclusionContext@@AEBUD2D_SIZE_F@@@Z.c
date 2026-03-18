/*
 * XREFs of ?AddOcclusionInformation@CBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800B40F4
 * Callers:
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@BA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800EBDA0 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@BA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800EBF70 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@A@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@II@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800EBF80 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@II@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@BI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800EDAE0 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@BI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@CI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800EDB20 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@CI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@MA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800EDB50 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@MA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@FA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800EDBF0 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@FA@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@HI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800EDDC0 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@HI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?AddOcclusionInformation@CBrush@@$4PPPPPPPM@EI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x1800EDEA0 (-AddOcclusionInformation@CBrush@@$4PPPPPPPM@EI@EAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x18004EAE0 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@U.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrush::AddOcclusionInformation(
        CBrush *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r8
  int v6; // eax
  __int64 v7; // rcx
  __int128 v9; // [rsp+30h] [rbp-38h] BYREF
  __int128 v10; // [rsp+40h] [rbp-28h] BYREF

  v4 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *, const struct D2D_SIZE_F *, __int128 *))(*((_QWORD *)this - 13) + 296LL))(
         (char *)this - 104,
         a3,
         &v9) )
  {
    v10 = v9;
    v6 = COcclusionContext::CollectRectangleForOcclusion((__int64)a2, (float *)&v10, v5, 0LL);
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x50u, 0LL);
  }
  return v4;
}
