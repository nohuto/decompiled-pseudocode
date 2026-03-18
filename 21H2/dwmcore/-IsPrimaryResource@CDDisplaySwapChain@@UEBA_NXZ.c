/*
 * XREFs of ?IsPrimaryResource@CDDisplaySwapChain@@UEBA_NXZ @ 0x1800FC120
 * Callers:
 *     ?IsPrimaryResource@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x1801085D0 (-IsPrimaryResource@CDummyRemotingSwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ @ 0x18010A070 (-IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@BI@EBA_NXZ.c)
 *     ?IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x18010A690 (-IsPrimaryResource@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CDDisplaySwapChain::IsPrimaryResource(CDDisplaySwapChain *this)
{
  return 1;
}
