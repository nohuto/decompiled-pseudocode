/*
 * XREFs of ?SetAlphaMode@CConversionSwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x180293450
 * Callers:
 *     ?SetAlphaMode@CConversionSwapChain@@$4PPPPPPPM@A@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18010A7B0 (-SetAlphaMode@CConversionSwapChain@@$4PPPPPPPM@A@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     ?SetAlphaMode@CLegacySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1800157B4 (-SetAlphaMode@CLegacySwapChain@@UEAAXW4DXGI_ALPHA_MODE@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CConversionSwapChain::SetAlphaMode(CConversionSwapChain *this, enum DXGI_ALPHA_MODE a2)
{
  __int64 v4; // rcx

  CLegacySwapChain::SetAlphaMode((CConversionSwapChain *)((char *)this - 424), a2);
  if ( *((_DWORD *)this - 117) != a2 )
  {
    v4 = *((_QWORD *)this - 60);
    *((_DWORD *)this - 117) = a2;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 8LL))(v4, (unsigned int)a2);
  }
}
