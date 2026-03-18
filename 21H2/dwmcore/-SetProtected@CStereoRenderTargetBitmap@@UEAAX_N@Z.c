/*
 * XREFs of ?SetProtected@CStereoRenderTargetBitmap@@UEAAX_N@Z @ 0x1802A7A30
 * Callers:
 *     ?SetProtected@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAX_N@Z @ 0x18010D0D0 (-SetProtected@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAX_N@Z.c)
 * Callees:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x180068170 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CStereoRenderTargetBitmap::SetProtected(CStereoRenderTargetBitmap *this, char a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 32LL))(*((_QWORD *)this + 6));
  if ( a2 != *((_BYTE *)this + 25) )
  {
    *((_BYTE *)this + 25) = a2;
    CRenderTargetBitmap::ResetBitmapCache((CStereoRenderTargetBitmap *)((char *)this - 120));
  }
}
