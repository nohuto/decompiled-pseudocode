/*
 * XREFs of ?SetAlphaMode@CStereoRenderTargetBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1802A7940
 * Callers:
 *     ?SetAlphaMode@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAXW4DXGI_ALPHA_MODE@@@Z @ 0x18010D070 (-SetAlphaMode@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAXW4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CStereoRenderTargetBitmap::SetAlphaMode(CStereoRenderTargetBitmap *this, unsigned int a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
  CRenderTargetBitmap::SetAlphaMode(this, a2);
}
