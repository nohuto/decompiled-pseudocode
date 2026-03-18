/*
 * XREFs of ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C0045800
 * Callers:
 *     DxgkCreateOverlay @ 0x1C02765A0 (DxgkCreateOverlay.c)
 *     DxgkDestroyOverlay @ 0x1C0276C30 (DxgkDestroyOverlay.c)
 *     DxgkFlipOverlay @ 0x1C02771D0 (DxgkFlipOverlay.c)
 *     DxgkGetOverlayState @ 0x1C0277690 (DxgkGetOverlayState.c)
 *     DxgkUpdateOverlay @ 0x1C0277C90 (DxgkUpdateOverlay.c)
 * Callees:
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00112D4 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DXGDEVICE::IsSupportOverlay(DXGDEVICE *this)
{
  __int64 v1; // rax
  char v2; // r8
  __int64 (__fastcall **v3)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *); // rdx

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  if ( *(_QWORD *)(v1 + 16) == *((_QWORD *)this + 231)
    && DXGADAPTER::IsFullWDDMAdapter(*(DXGADAPTER **)(v1 + 16))
    && v3[76] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[84] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[83] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange
    && v3[82] != ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
  {
    return 1;
  }
  return v2;
}
