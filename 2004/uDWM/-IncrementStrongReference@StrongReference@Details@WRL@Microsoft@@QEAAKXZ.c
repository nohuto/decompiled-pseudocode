/*
 * XREFs of ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800C1B98
 * Callers:
 *     ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAKXZ @ 0x180041000 (-AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAKXZ.c)
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@2@@Z @ 0x180042C04 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@V12345@$$V@Details@WR.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
        Microsoft::WRL::Details *this,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference(this, a2);
}
