/*
 * XREFs of ??0CBrightnessEffect@@IEAA@PEAVCComposition@@@Z @ 0x18016BA8C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18016C1BC (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CBrightnessEffect *__fastcall CBrightnessEffect::CBrightnessEffect(CBrightnessEffect *this, struct CComposition *a2)
{
  CBrightnessEffect *v2; // rcx
  CBrightnessEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  *((_DWORD *)v2 + 40) = 0;
  *((_DWORD *)v2 + 41) = 0;
  *((_DWORD *)v2 + 38) = 1065353216;
  *((_DWORD *)v2 + 39) = 1065353216;
  result = v2;
  *(_QWORD *)v2 = &CBrightnessEffect::`vftable';
  return result;
}
