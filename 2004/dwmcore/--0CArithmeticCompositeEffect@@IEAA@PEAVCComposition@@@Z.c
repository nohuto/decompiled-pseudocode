/*
 * XREFs of ??0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z @ 0x18016BA50
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18016C1BC (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CArithmeticCompositeEffect *__fastcall CArithmeticCompositeEffect::CArithmeticCompositeEffect(
        CArithmeticCompositeEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CArithmeticCompositeEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  *(_QWORD *)(v2 + 152) = 1065353216LL;
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_DWORD *)(v2 + 168) = 0;
  result = (CArithmeticCompositeEffect *)v2;
  *(_QWORD *)v2 = &CArithmeticCompositeEffect::`vftable';
  return result;
}
