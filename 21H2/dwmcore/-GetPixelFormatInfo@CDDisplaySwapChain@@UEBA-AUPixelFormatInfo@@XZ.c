/*
 * XREFs of ?GetPixelFormatInfo@CDDisplaySwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800F9ECC
 * Callers:
 *     ?GetPixelFormatInfo@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1801084D0 (-GetPixelFormatInfo@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 - 208);
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 216);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
