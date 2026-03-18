/*
 * XREFs of ??0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z @ 0x180242D2C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18019C948 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CTurbulenceEffect *__fastcall CTurbulenceEffect::CTurbulenceEffect(CTurbulenceEffect *this, struct CComposition *a2)
{
  __int64 v2; // rcx
  CTurbulenceEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  *(_QWORD *)(v2 + 184) = 1LL;
  *(_QWORD *)v2 = &CTurbulenceEffect::`vftable';
  *(_DWORD *)(v2 + 168) = 1008981770;
  *(_QWORD *)(v2 + 172) = 1008981770LL;
  result = (CTurbulenceEffect *)v2;
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_DWORD *)(v2 + 180) = 0;
  *(_QWORD *)(v2 + 192) = 0LL;
  return result;
}
