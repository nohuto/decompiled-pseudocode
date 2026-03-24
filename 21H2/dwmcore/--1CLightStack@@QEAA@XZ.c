/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x180062880
 * Callers:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x18003E334 (--1CDrawingContext@@EEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18003EF58 (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180044824 (--1CPreComputeContext@@QEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800648B4 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800656F0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18008F06C (-Clear@CLightStack@@QEAAXXZ.c)
 */

void __fastcall CLightStack::~CLightStack(CLightStack *this)
{
  CLightStack::Clear(this);
  ReleaseInterface<CHwLightCollectionBuffer>((char *)this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 184);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
