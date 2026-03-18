/*
 * XREFs of ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x1800D0AA0
 * Callers:
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18006BD68 (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180263CAC (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 * Callees:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x180070510 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::SetSDRBoost(CRenderTargetBitmap *this, float a2)
{
  _BYTE v3[32]; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 != *(float *)((***((__int64 (__fastcall ****)(_QWORD, _BYTE *))this + 2))(*((_QWORD *)this + 2), v3) + 16) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2));
    CRenderTargetBitmap::ResetBitmapCache((CRenderTargetBitmap *)((char *)this - 120));
  }
}
