/*
 * XREFs of ?GetPixelFormatInfo@CRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800E20BC
 * Callers:
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800F4FA0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HDI@EBA?AUPixelFormatInfo@@XZ @ 0x1800F4FB0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HDI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HKA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F4FD0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HKA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HOI@EBA?AUPixelFormatInfo@@XZ @ 0x1800F4FF0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HOI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@LA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F5010 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@LA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GNA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F58F0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GNA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUPixelFormatInfo@@XZ @ 0x1800F59C0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@JI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@CA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F5A90 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@CA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HNA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F5B60 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HNA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GOA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F5DC0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GOA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HAI@EBA?AUPixelFormatInfo@@XZ @ 0x1800F6B60 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HAI@EBA-AUPixelFormatInfo@@XZ.c)
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
