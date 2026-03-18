/*
 * XREFs of ?GetPixelFormatInfo@CRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800DDE0C
 * Callers:
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800EF190 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HDI@EBA?AUPixelFormatInfo@@XZ @ 0x1800EF1A0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HDI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HKA@EBA?AUPixelFormatInfo@@XZ @ 0x1800EF1C0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HKA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HOI@EBA?AUPixelFormatInfo@@XZ @ 0x1800EF1E0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HOI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@LA@EBA?AUPixelFormatInfo@@XZ @ 0x1800EF200 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@LA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GNA@EBA?AUPixelFormatInfo@@XZ @ 0x1800EFAE0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GNA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUPixelFormatInfo@@XZ @ 0x1800EFBB0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@JI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@CA@EBA?AUPixelFormatInfo@@XZ @ 0x1800EFC80 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@CA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HNA@EBA?AUPixelFormatInfo@@XZ @ 0x1800EFD50 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HNA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GOA@EBA?AUPixelFormatInfo@@XZ @ 0x1800EFFB0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GOA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HAI@EBA?AUPixelFormatInfo@@XZ @ 0x1800F0D50 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HAI@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 - 64);
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 72);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
