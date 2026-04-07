/*
 * XREFs of ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800C14D8
 * Callers:
 *     ??$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@V12345@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGaussianBlurEffect@Effects@Composition@UI@2@@Z @ 0x180039A58 (--$MakeAndInitialize@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@V12345@$$V@Details@WR.c)
 *     ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAKXZ @ 0x1800418D0 (-AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAKXZ.c)
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
