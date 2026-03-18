/*
 * XREFs of ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChain1@@IIAEBUDXGI_PRESENT_PARAMETERS@@@Z @ 0x180241078
 * Callers:
 *     ?Present@CCompSwapChain@@UEAAJII@Z @ 0x1802524C0 (-Present@CCompSwapChain@@UEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x18006A044 (-GetCurrentFrameId@@YA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::Present(
        CD3DDevice *this,
        struct IDXGISwapChain1 *a2,
        unsigned int a3,
        unsigned int a4,
        const struct DXGI_PRESENT_PARAMETERS *a5)
{
  int v5; // ebx
  int v7; // eax
  __int64 v8; // rcx

  v5 = *((_DWORD *)this + 282);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_180307538, 2u, v5, 0xC70u, 0LL);
  }
  else
  {
    v7 = ((__int64 (__fastcall *)(struct IDXGISwapChain1 *, _QWORD, _QWORD, const struct DXGI_PRESENT_PARAMETERS *))a2->lpVtbl->Present1)(
           a2,
           a3,
           a4,
           a5);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_180307538, 2u, v7, 0xC7Eu, 0LL);
    }
    else
    {
      *((_QWORD *)this + 177) = GetCurrentFrameId();
      *((_BYTE *)this + 1435) = 0;
    }
  }
  return CD3DDevice::TranslateDXGIorD3DErrorInContext((__int64)this, v5, 1u);
}
