/*
 * XREFs of ??4?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180005AFC
 * Callers:
 *     ?GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x1800048EC (-GenerateBitmapRealizationForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z @ 0x18024D480 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDevice@@I@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D910 (-InternalRelease@-$ComPtr@VIDeviceTexture@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DC50 (-InternalAddRef@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IRenderTargetBitmap>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    v5 = *a2;
    Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = v2;
    Microsoft::WRL::ComPtr<IDeviceTexture>::InternalRelease(&v5);
  }
  return a1;
}
