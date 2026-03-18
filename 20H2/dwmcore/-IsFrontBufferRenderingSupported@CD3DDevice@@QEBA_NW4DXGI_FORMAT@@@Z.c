/*
 * XREFs of ?IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x1800328D0
 * Callers:
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVILegacySwapChain@@@Z @ 0x1800320D4 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CD3DDevice::IsFrontBufferRenderingSupported(CD3DDevice *this, __int64 a2)
{
  char v2; // di
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ecx
  int v8; // eax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( *((int *)this + 156) >= 45056 && !*((_QWORD *)this + 76) )
  {
    v4 = *((_QWORD *)this + 74);
    v9 = 0;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v4 + 232LL))(v4, a2, &v9);
    v6 = 0;
    if ( v5 >= 0 )
      v6 = v9;
    if ( (v6 & 0x2000000) != 0 )
    {
      v8 = *((_DWORD *)this + 224);
      if ( (v8 != 4318 || *((__int64 *)this + 79) >= 0x180015000D25B5LL)
        && (CCommonRegistryData::SuperWetEnabled && *((int *)this + 157) >= 2600
         || CCommonRegistryData::InkGPUAccelOverrideVendorWhitelist
         || v8 == 32902 && *((int *)this + 157) < 2600) )
      {
        return 1;
      }
    }
  }
  return v2;
}
