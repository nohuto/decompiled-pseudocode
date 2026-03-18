/*
 * XREFs of ??0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z @ 0x18016E808
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18007F9A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18016ED1C (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CColorMatrixEffect *__fastcall CColorMatrixEffect::CColorMatrixEffect(
        CColorMatrixEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CColorMatrixEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  result = (CColorMatrixEffect *)v2;
  *(_DWORD *)(v2 + 236) = 0;
  *(_OWORD *)(v2 + 152) = _xmm;
  *(_QWORD *)v2 = &CColorMatrixEffect::`vftable';
  *(_OWORD *)(v2 + 168) = _xmm;
  *(_DWORD *)(v2 + 232) = 1;
  *(_OWORD *)(v2 + 184) = _xmm;
  *(_OWORD *)(v2 + 200) = _xmm;
  *(_OWORD *)(v2 + 216) = 0LL;
  return result;
}
