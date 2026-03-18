/*
 * XREFs of ?GetSize@CRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800DC7F0
 * Callers:
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@A@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EC5E0 (-GetSize@CRenderTarget@@$4PPPPPPPM@A@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIDA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EC5F0 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIDA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EC610 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIEA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HDI@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EC630 (-GetSize@CRenderTarget@@$4PPPPPPPM@HDI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HKA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EC650 (-GetSize@CRenderTarget@@$4PPPPPPPM@HKA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@LA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EC670 (-GetSize@CRenderTarget@@$4PPPPPPPM@LA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GNA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800ECEC0 (-GetSize@CRenderTarget@@$4PPPPPPPM@GNA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUD2D_SIZE_U@@XZ @ 0x1800ECF90 (-GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@CA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800ED050 (-GetSize@CRenderTarget@@$4PPPPPPPM@CA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HNA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800ED130 (-GetSize@CRenderTarget@@$4PPPPPPPM@HNA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GOA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800ED3F0 (-GetSize@CRenderTarget@@$4PPPPPPPM@GOA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HAI@EBA?AUD2D_SIZE_U@@XZ @ 0x1800EE190 (-GetSize@CRenderTarget@@$4PPPPPPPM@HAI@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CRenderTarget::GetSize(CRenderTarget *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 13);
  return (struct D2D_SIZE_U)a2;
}
