/*
 * XREFs of ?GetSize@CRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800DDC30
 * Callers:
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@A@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EF570 (-GetSize@CRenderTarget@@$4PPPPPPPM@A@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIDA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EF580 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIDA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EF5A0 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIEA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HDI@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EF5C0 (-GetSize@CRenderTarget@@$4PPPPPPPM@HDI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HKA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EF5E0 (-GetSize@CRenderTarget@@$4PPPPPPPM@HKA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@LA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EF600 (-GetSize@CRenderTarget@@$4PPPPPPPM@LA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GNA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EFE50 (-GetSize@CRenderTarget@@$4PPPPPPPM@GNA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EFF20 (-GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@CA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EFFE0 (-GetSize@CRenderTarget@@$4PPPPPPPM@CA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HNA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F00C0 (-GetSize@CRenderTarget@@$4PPPPPPPM@HNA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GOA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F0380 (-GetSize@CRenderTarget@@$4PPPPPPPM@GOA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HAI@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F1120 (-GetSize@CRenderTarget@@$4PPPPPPPM@HAI@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CRenderTarget::GetSize(CRenderTarget *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 13);
  return (struct D2D_SIZE_U)a2;
}
