/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x180094E14
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18008E014 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1CDrawingContext@@EEAA@XZ @ 0x1800938D8 (--1CDrawingContext@@EEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x180093A80 (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x18006948C (-Clear@CLightStack@@QEAAXXZ.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x180093288 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CLightStack::~CLightStack(CLightStack *this)
{
  CLightStack::Clear(this);
  ReleaseInterface<CHwLightCollectionBuffer>((__int64 *)this + 13);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 184);
  DynArrayImpl<0>::~DynArrayImpl<0>(this);
}
