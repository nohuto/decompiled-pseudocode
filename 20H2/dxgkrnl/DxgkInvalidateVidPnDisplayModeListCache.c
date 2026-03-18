/*
 * XREFs of DxgkInvalidateVidPnDisplayModeListCache @ 0x1C02165A8
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x1C0020110 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0194218 (-InvalidateActiveVidPnDisplayModeListCache@ADAPTER_DISPLAY@@QEAAXIQEBU_DMM_COMMITVIDPNREQUEST_DI.c)
 */

void __fastcall DxgkInvalidateVidPnDisplayModeListCache(
        __int64 a1,
        __int64 a2,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a3)
{
  PERESOURCE **v3; // rcx

  v3 = *(PERESOURCE ***)(a1 + 2696);
  if ( v3 )
    ADAPTER_DISPLAY::InvalidateActiveVidPnDisplayModeListCache(v3, a2, a3);
}
