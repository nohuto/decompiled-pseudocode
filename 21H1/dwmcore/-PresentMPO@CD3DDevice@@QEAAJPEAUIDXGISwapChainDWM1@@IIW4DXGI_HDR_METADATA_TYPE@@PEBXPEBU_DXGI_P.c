/*
 * XREFs of ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180241130
 * Callers:
 *     ?PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18024AE04 (-PresentDFlip@CLegacySwapChain@@UEAAJIIIPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_M.c)
 *     ?PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18024B074 (-PresentMPO@CLegacySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800546C4 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18006A044 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?CheckForLeakedDWMSwapChain@CD3DDevice@@AEAAXPEAUIDXGISwapChainDWM1@@@Z @ 0x1800D3D2C (-CheckForLeakedDWMSwapChain@CD3DDevice@@AEAAXPEAUIDXGISwapChainDWM1@@@Z.c)
 *     ?SkipUnpin@CD3DDevice@@QEAAXXZ @ 0x1800E6540 (-SkipUnpin@CD3DDevice@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::PresentMPO(CD3DDevice *this, struct IDXGISwapChainDWM1 *a2, __int64 a3, char a4)
{
  int v4; // ebx
  __int64 v8; // rcx
  CD3DDevice *v9; // rcx
  int v10; // r8d

  v4 = *((_DWORD *)this + 282);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v4, 0xC39u, 0LL);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 33) + 112LL))(*((_QWORD *)this + 33));
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v4, 0xC4Bu, 0LL);
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
