/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x18009A650
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180035A44 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x180099404 (--1CDrawingContext@@EEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18009955C (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x180079E4C (-Clear@CLightStack@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800987CC (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CLightStack::~CLightStack(CLightStack *this)
{
  CLightStack::Clear(this);
  ReleaseInterface<CHwLightCollectionBuffer>((__int64 *)this + 13);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 184);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
