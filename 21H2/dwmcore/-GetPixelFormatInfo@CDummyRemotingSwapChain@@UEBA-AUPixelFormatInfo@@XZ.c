/*
 * XREFs of ?GetPixelFormatInfo@CDummyRemotingSwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800FC20C
 * Callers:
 *     ?GetPixelFormatInfo@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x180108B90 (-GetPixelFormatInfo@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDummyRemotingSwapChain::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  _DWORD *result; // rax

  a2[2] = 0;
  result = a2;
  *a2 = 87;
  a2[1] = 3;
  return result;
}
