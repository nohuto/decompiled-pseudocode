/*
 * XREFs of ?AddRef@?$CMILCOMBaseT@VIDeviceResource@@@@UEAAKXZ @ 0x1800F2B2C
 * Callers:
 *     ?AddRef@?$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@FI@EAAKXZ @ 0x180108110 (-AddRef@-$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@FI@EAAKXZ.c)
 *     ?AddRef@?$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@EI@EAAKXZ @ 0x180108170 (-AddRef@-$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@EI@EAAKXZ.c)
 *     ?AddRef@?$CMILCOMBaseT@VIOverlaySwapChain@@@@$4PPPPPPPM@BOA@EAAKXZ @ 0x180108350 (-AddRef@-$CMILCOMBaseT@VIOverlaySwapChain@@@@$4PPPPPPPM@BOA@EAAKXZ.c)
 *     ?AddRef@?$CMILCOMBaseT@VIDDASwapChain@@@@$4PPPPPPPM@IA@EAAKXZ @ 0x18010A8D0 (-AddRef@-$CMILCOMBaseT@VIDDASwapChain@@@@$4PPPPPPPM@IA@EAAKXZ.c)
 *     ?AddRef@?$CMILCOMBaseT@VILegacyRemotingSwapChain@@@@$4PPPPPPPM@MI@EAAKXZ @ 0x18010AA50 (-AddRef@-$CMILCOMBaseT@VILegacyRemotingSwapChain@@@@$4PPPPPPPM@MI@EAAKXZ.c)
 *     ?AddRef@?$CMILCOMBaseT@VIBitmapSource@@@@$4PPPPPPPM@DAA@EAAKXZ @ 0x18010D4B0 (-AddRef@-$CMILCOMBaseT@VIBitmapSource@@@@$4PPPPPPPM@DAA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IDeviceResource>::AddRef(__int64 a1)
{
  return CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 - 16));
}
