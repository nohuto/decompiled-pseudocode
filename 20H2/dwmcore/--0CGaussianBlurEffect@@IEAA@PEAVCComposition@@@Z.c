/*
 * XREFs of ??0CGaussianBlurEffect@@IEAA@PEAVCComposition@@@Z @ 0x18016A484
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800ACC98 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18016A3E0 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CGaussianBlurEffect *__fastcall CGaussianBlurEffect::CGaussianBlurEffect(
        CGaussianBlurEffect *this,
        struct CComposition *a2)
{
  CGaussianBlurEffect *v2; // rcx
  CGaussianBlurEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  *((_DWORD *)v2 + 39) = 0;
  *((_DWORD *)v2 + 40) = 0;
  result = v2;
  *(_QWORD *)v2 = &CGaussianBlurEffect::`vftable';
  *((_DWORD *)v2 + 38) = 1077936128;
  return result;
}
