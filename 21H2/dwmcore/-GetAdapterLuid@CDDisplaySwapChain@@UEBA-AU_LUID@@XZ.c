/*
 * XREFs of ?GetAdapterLuid@CDDisplaySwapChain@@UEBA?AU_LUID@@XZ @ 0x1800FC0BC
 * Callers:
 *     ?GetAdapterLuid@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x180108450 (-GetAdapterLuid@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDDisplaySwapChain::GetAdapterLuid(CDDisplaySwapChain *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this - 228);
  return (struct _LUID)a2;
}
