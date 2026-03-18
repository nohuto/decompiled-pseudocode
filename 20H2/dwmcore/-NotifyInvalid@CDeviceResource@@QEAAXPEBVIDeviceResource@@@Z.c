/*
 * XREFs of ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x18001F450
 * Callers:
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x18001F3B8 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180237830 (-NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180247340 (-NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18024E860 (-NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CLegacyRemotingSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18024F2F0 (-NotifyInvalidResource@CLegacyRemotingSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180261CE0 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x180263898 (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDeviceResource::NotifyInvalid(CDeviceResource *this, const struct IDeviceResource *a2)
{
  char *v4; // rcx
  __int64 v5; // rax
  char *v6; // rcx
  __int64 v7; // rbx
  void (__fastcall ***v8)(_QWORD, const struct IDeviceResource *); // rcx

  v4 = (char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3;
  if ( (_DWORD)v5 )
  {
    do
    {
      v7 = (unsigned int)(v5 - 1);
      v8 = *(void (__fastcall ****)(_QWORD, const struct IDeviceResource *))(*((_QWORD *)this + 2) + 8 * v7);
      (**v8)(v8, a2);
      LODWORD(v5) = v7;
    }
    while ( (_DWORD)v7 );
  }
  v6 = (char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
}
