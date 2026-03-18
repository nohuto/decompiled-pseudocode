/*
 * XREFs of ??0CShadowEffect@@IEAA@PEAVCComposition@@@Z @ 0x18016AE20
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800ACC98 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18016A3E0 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CShadowEffect *__fastcall CShadowEffect::CShadowEffect(CShadowEffect *this, struct CComposition *a2)
{
  CShadowEffect *v2; // rcx
  CShadowEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  *((_QWORD *)v2 + 19) = 1077936128LL;
  *((_QWORD *)v2 + 20) = 0LL;
  result = v2;
  *(_QWORD *)v2 = &CShadowEffect::`vftable';
  *((_QWORD *)v2 + 21) = 1065353216LL;
  return result;
}
