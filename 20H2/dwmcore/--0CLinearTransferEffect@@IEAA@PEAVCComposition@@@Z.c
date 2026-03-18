/*
 * XREFs of ??0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801D2460
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800ACC98 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18016A3E0 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CLinearTransferEffect *__fastcall CLinearTransferEffect::CLinearTransferEffect(
        CLinearTransferEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CLinearTransferEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  *(_QWORD *)v2 = &CLinearTransferEffect::`vftable';
  *(_DWORD *)(v2 + 156) = 1065353216;
  *(_DWORD *)(v2 + 168) = 1065353216;
  *(_DWORD *)(v2 + 180) = 1065353216;
  *(_DWORD *)(v2 + 192) = 1065353216;
  result = (CLinearTransferEffect *)v2;
  *(_DWORD *)(v2 + 152) = 0;
  *(_BYTE *)(v2 + 160) = 0;
  *(_DWORD *)(v2 + 164) = 0;
  *(_BYTE *)(v2 + 172) = 0;
  *(_DWORD *)(v2 + 176) = 0;
  *(_BYTE *)(v2 + 184) = 0;
  *(_DWORD *)(v2 + 188) = 0;
  *(_WORD *)(v2 + 196) = 0;
  return result;
}
