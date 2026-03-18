/*
 * XREFs of ??0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019C3E8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019C948 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CArithmeticCompositeEffect *__fastcall CArithmeticCompositeEffect::CArithmeticCompositeEffect(
        CArithmeticCompositeEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CArithmeticCompositeEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  *(_QWORD *)(v2 + 160) = 1065353216LL;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_DWORD *)(v2 + 176) = 0;
  result = (CArithmeticCompositeEffect *)v2;
  *(_QWORD *)v2 = &CArithmeticCompositeEffect::`vftable';
  return result;
}
