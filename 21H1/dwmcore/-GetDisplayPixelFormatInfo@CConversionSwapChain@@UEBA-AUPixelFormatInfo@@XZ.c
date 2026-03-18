/*
 * XREFs of ?GetDisplayPixelFormatInfo@CConversionSwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800DDB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::GetDisplayPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 - 140);
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 148);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
