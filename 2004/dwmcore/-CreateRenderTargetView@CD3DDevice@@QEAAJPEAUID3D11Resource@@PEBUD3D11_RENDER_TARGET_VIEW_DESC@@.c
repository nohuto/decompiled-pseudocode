/*
 * XREFs of ?CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@PEAPEAUID3D11RenderTargetView@@@Z @ 0x180090FFC
 * Callers:
 *     ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x180090F30 (-Initialize@CDeviceTextureTarget@@MEAAJXZ.c)
 *     ?Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z @ 0x180248EA0 (-Init@CD3DSurface@@IEAAJPEAVCD3DResourceManager@@PEAII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::CreateRenderTargetView(
        CD3DDevice *this,
        struct ID3D11Resource *a2,
        const struct D3D11_RENDER_TARGET_VIEW_DESC *a3,
        struct ID3D11RenderTargetView **a4)
{
  int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx

  *a4 = 0LL;
  v5 = *((_DWORD *)this + 282);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v5, 0x82Bu, 0LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, struct ID3D11Resource *, const struct D3D11_RENDER_TARGET_VIEW_DESC *))(**((_QWORD **)this + 74) + 72LL))(
           *((_QWORD *)this + 74),
           a2,
           a3);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x82Fu, 0LL);
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v5, 0);
}
