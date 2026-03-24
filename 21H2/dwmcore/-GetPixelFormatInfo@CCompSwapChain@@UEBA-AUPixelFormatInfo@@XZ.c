/*
 * XREFs of ?GetPixelFormatInfo@CCompSwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800E371C
 * Callers:
 *     ?GetPixelFormatInfo@CCompSwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800F8100 (-GetPixelFormatInfo@CCompSwapChain@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompSwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 - 296);
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 304);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
