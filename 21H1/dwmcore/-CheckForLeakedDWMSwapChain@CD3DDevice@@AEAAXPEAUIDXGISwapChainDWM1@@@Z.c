/*
 * XREFs of ?CheckForLeakedDWMSwapChain@CD3DDevice@@AEAAXPEAUIDXGISwapChainDWM1@@@Z @ 0x1800D3D2C
 * Callers:
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x18006D074 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180241130 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDevice::CheckForLeakedDWMSwapChain(CD3DDevice *this, struct IDXGISwapChainDWM1 *a2)
{
  __int64 v2; // rax
  _DWORD v3[4]; // [rsp+20h] [rbp-C8h] BYREF
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+30h] [rbp-B8h] BYREF

  v2 = *(_QWORD *)a2;
  v3[0] = 0;
  if ( (*(int (__fastcall **)(struct IDXGISwapChainDWM1 *, _DWORD *))(v2 + 240))(a2, v3) >= 0 )
  {
    if ( v3[0] )
    {
      memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
      pExceptionRecord.ExceptionCode = 142213121;
      RaiseFailFastException(&pExceptionRecord, 0LL, 0);
    }
  }
}
