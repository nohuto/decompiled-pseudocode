/*
 * XREFs of ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAKXZ @ 0x180041000
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180056420 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Ef.c)
 *     ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBA@EAAKXZ @ 0x180056430 (-AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBA@EAAKXZ.c)
 *     ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBI@EAAKXZ @ 0x180056440 (-AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBI@EAAKXZ.c)
 *     ?AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WCA@EAAKXZ @ 0x180056450 (-AddRef@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WCA@EAAKXZ.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800C1B98 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::UI::Composition::Effects::GaussianBlurEffect::AddRef(
        Microsoft::UI::Composition::Effects::GaussianBlurEffect *this)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *((_QWORD *)this + 6);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 6, v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v1 + 16));
}
