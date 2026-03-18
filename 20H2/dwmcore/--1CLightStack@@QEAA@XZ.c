/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x18006DC90
 * Callers:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x18004AED4 (--1CDrawingContext@@EEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18004BAF8 (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x1800513C4 (--1CPreComputeContext@@QEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x18006FC14 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180070A30 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x180098CEC (-Clear@CLightStack@@QEAAXXZ.c)
 */

void __fastcall CLightStack::~CLightStack(CLightStack *this)
{
  CLightStack::Clear(this);
  ReleaseInterface<CHwLightCollectionBuffer>((char *)this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 184);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
