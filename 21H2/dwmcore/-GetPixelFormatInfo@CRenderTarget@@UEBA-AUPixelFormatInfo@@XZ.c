/*
 * XREFs of ?GetPixelFormatInfo@CRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800F9EEC
 * Callers:
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x180105EB0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HCA@EBA?AUPixelFormatInfo@@XZ @ 0x180105ED0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HCA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HHI@EBA?AUPixelFormatInfo@@XZ @ 0x180105EF0 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HHI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HMI@EBA?AUPixelFormatInfo@@XZ @ 0x180105F10 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HMI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@PI@EBA?AUPixelFormatInfo@@XZ @ 0x180105F30 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@PI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GLI@EBA?AUPixelFormatInfo@@XZ @ 0x180106E30 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GLI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@JI@EBA?AUPixelFormatInfo@@XZ @ 0x180106F30 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@JI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HLI@EBA?AUPixelFormatInfo@@XZ @ 0x180107030 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HLI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HJI@EBA?AUPixelFormatInfo@@XZ @ 0x180107130 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@HJI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GPA@EBA?AUPixelFormatInfo@@XZ @ 0x180107C70 (-GetPixelFormatInfo@CRenderTarget@@$4PPPPPPPM@GPA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 - 48);
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 56);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
