/*
 * XREFs of ?GetSize@CRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800DDEB0
 * Callers:
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@A@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EF220 (-GetSize@CRenderTarget@@$4PPPPPPPM@A@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIDA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EF230 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIDA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EF250 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIEA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HDI@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EF270 (-GetSize@CRenderTarget@@$4PPPPPPPM@HDI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HKA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EF290 (-GetSize@CRenderTarget@@$4PPPPPPPM@HKA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@LA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EF2B0 (-GetSize@CRenderTarget@@$4PPPPPPPM@LA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GNA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EFB00 (-GetSize@CRenderTarget@@$4PPPPPPPM@GNA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EFBD0 (-GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@CA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EFC90 (-GetSize@CRenderTarget@@$4PPPPPPPM@CA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HNA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EFD70 (-GetSize@CRenderTarget@@$4PPPPPPPM@HNA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GOA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EFFD0 (-GetSize@CRenderTarget@@$4PPPPPPPM@GOA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HAI@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F0D70 (-GetSize@CRenderTarget@@$4PPPPPPPM@HAI@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CRenderTarget::GetSize(CRenderTarget *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 13);
  return (struct D2D_SIZE_U)a2;
}
