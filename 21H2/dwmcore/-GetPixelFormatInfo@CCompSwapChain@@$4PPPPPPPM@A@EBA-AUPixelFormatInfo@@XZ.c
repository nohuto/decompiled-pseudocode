/*
 * XREFs of ?GetPixelFormatInfo@CCompSwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1801095D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompSwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CCompSwapChain::GetPixelFormatInfo(a1 - *(int *)(a1 - 4), a2);
}
