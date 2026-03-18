/*
 * XREFs of ?GetAdapterLuid@CDummyRemotingSwapChain@@UEBA?AU_LUID@@XZ @ 0x1800FC1CC
 * Callers:
 *     ?GetAdapterLuid@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x180108B50 (-GetAdapterLuid@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall CDummyRemotingSwapChain::GetAdapterLuid(CDummyRemotingSwapChain *this, _QWORD *a2)
{
  struct _LUID result; // rax

  result = (struct _LUID)a2;
  *a2 = *(_QWORD *)(*((_QWORD *)this - 25) + 896LL);
  return result;
}
