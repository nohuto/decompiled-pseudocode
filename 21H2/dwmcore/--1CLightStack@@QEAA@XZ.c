/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x180049AB0
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180019C48 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800499A8 (--1CDrawingContext@@MEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800644D8 (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180046E5C (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18008C2EC (-Clear@CLightStack@@QEAAXXZ.c)
 */

void __fastcall CLightStack::~CLightStack(CLightStack *this)
{
  CLightStack::Clear(this);
  ReleaseInterface<CHwLightCollectionBuffer>((__int64 *)this + 13);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 184);
  DynArrayImpl<1>::~DynArrayImpl<1>(this);
}
