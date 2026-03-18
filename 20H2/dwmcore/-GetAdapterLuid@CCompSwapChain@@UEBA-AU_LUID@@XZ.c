/*
 * XREFs of ?GetAdapterLuid@CCompSwapChain@@UEBA?AU_LUID@@XZ @ 0x1800DF2A4
 * Callers:
 *     ?GetAdapterLuid@CCompSwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x1800F22D0 (-GetAdapterLuid@CCompSwapChain@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CCompSwapChain::GetAdapterLuid(CCompSwapChain *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this - 268);
  return (struct _LUID)a2;
}
