/*
 * XREFs of ?GetSize@CRenderTarget@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800E2160
 * Callers:
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@A@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F5030 (-GetSize@CRenderTarget@@$4PPPPPPPM@A@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIDA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F5040 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIDA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@EIEA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F5060 (-GetSize@CRenderTarget@@$4PPPPPPPM@EIEA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HDI@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F5080 (-GetSize@CRenderTarget@@$4PPPPPPPM@HDI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HKA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F50A0 (-GetSize@CRenderTarget@@$4PPPPPPPM@HKA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@LA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F50C0 (-GetSize@CRenderTarget@@$4PPPPPPPM@LA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GNA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F5910 (-GetSize@CRenderTarget@@$4PPPPPPPM@GNA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F59E0 (-GetSize@CRenderTarget@@$4PPPPPPPM@JI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@CA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F5AA0 (-GetSize@CRenderTarget@@$4PPPPPPPM@CA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HNA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F5B80 (-GetSize@CRenderTarget@@$4PPPPPPPM@HNA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@GOA@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F5DE0 (-GetSize@CRenderTarget@@$4PPPPPPPM@GOA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CRenderTarget@@$4PPPPPPPM@HAI@EBA?AUD2D_SIZE_U@@XZ @ 0x1800F6B80 (-GetSize@CRenderTarget@@$4PPPPPPPM@HAI@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CRenderTarget::GetSize(CRenderTarget *this, _QWORD *a2)
{
  *a2 = *((_QWORD *)this - 13);
  return (struct D2D_SIZE_U)a2;
}
