/*
 * XREFs of ?GetPixelFormatInfo@CDDisplaySwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800DDDEC
 * Callers:
 *     ?GetPixelFormatInfo@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800F12C0 (-GetPixelFormatInfo@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 - 240);
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 248);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
