/*
 * XREFs of ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x18007E13C
 * Callers:
 *     ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800EC058 (-Present@CLegacySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@Z.c)
 *     ?Present@CLegacyStereoSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800EC16C (-Present@CLegacyStereoSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std.c)
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180248374 (-PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_M.c)
 *     ?PresentDFlip@CLegacyStereoSwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18024BF9C (-PresentDFlip@CLegacyStereoSwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI.c)
 *     ?Present@CDDASwapChain@@UEAAJII@Z @ 0x18024EBC0 (-Present@CDDASwapChain@@UEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180064188 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18007AFB4 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?CheckForLeakedDWMSwapChain@CD3DDevice@@AEAAXPEAUIDXGISwapChainDWM1@@@Z @ 0x1800DB948 (-CheckForLeakedDWMSwapChain@CD3DDevice@@AEAAXPEAUIDXGISwapChainDWM1@@@Z.c)
 *     ?SkipUnpin@CD3DDevice@@QEAAXXZ @ 0x1800E72F8 (-SkipUnpin@CD3DDevice@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::Present(CD3DDevice *this, struct IDXGISwapChainDWM1 *a2, __int64 a3, char a4)
{
  int v4; // ebx
  __int64 v8; // rcx
  CD3DDevice *v9; // rcx
  int v10; // r8d

  v4 = *((_DWORD *)this + 282);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v4, 0xBFDu, 0LL);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 104LL))(*((_QWORD *)this + 33));
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v4, 0xC11u, 0LL);
    }
    else
    {
      *((_QWORD *)this + 177) = GetCurrentFrameId();
      *((_BYTE *)this + 1435) = 0;
      if ( v4 == 142213121 )
        CD3DDevice::CheckForLeakedDWMSwapChain(v9, a2);
    }
  }
  v10 = CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v4, 1u);
  if ( v10 < 0 || (a4 & 2) != 0 )
    CD3DDevice::SkipUnpin(this);
  return (unsigned int)v10;
}
