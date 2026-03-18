/*
 * XREFs of ?GetAdapterLuid@CDDASwapChain@@UEBA?AU_LUID@@XZ @ 0x1800DF260
 * Callers:
 *     ?GetAdapterLuid@CDDASwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x1800F2220 (-GetAdapterLuid@CDDASwapChain@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDDASwapChain::GetAdapterLuid(CDDASwapChain *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this - 148);
  return (struct _LUID)a2;
}
