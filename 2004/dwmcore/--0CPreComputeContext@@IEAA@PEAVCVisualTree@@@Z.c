/*
 * XREFs of ??0CPreComputeContext@@IEAA@PEAVCVisualTree@@@Z @ 0x180035DAC
 * Callers:
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z @ 0x180035CBC (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ??0CBspPreComputeHelper@@QEAA@XZ @ 0x1800368AC (--0CBspPreComputeHelper@@QEAA@XZ.c)
 *     ??0CLightStack@@QEAA@XZ @ 0x180036FF0 (--0CLightStack@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180037048 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAAX_NW4R.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A1FB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DepthSorting@@@details@wil@@QEAAX_NW4Repo.c)
 */

CPreComputeContext *__fastcall CPreComputeContext::CPreComputeContext(CPreComputeContext *this, struct CVisualTree *a2)
{
  __int64 v3; // rdx

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 64) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 72) = 0;
  CLightStack::CLightStack((CPreComputeContext *)((char *)this + 296));
  *(_QWORD *)((char *)this + 580) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_DWORD *)this + 150) = 0;
  *(_QWORD *)((char *)this + 572) = 1LL;
  *((_DWORD *)this + 137) = 0;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_DWORD *)this + 162) = 0;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_DWORD *)this + 170) = 0;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  CBspPreComputeHelper::CBspPreComputeHelper((CPreComputeContext *)((char *)this + 720));
  *((_QWORD *)this + 136) = 0LL;
  *((_QWORD *)this + 138) = 0LL;
  *((_DWORD *)this + 274) = 0;
  *((_DWORD *)this + 278) = 0;
  *((_QWORD *)this + 135) = &CTransformParentPreComputeHelper::`vftable';
  *((_QWORD *)this + 141) = 0LL;
  *((_QWORD *)this + 143) = 0LL;
  *((_DWORD *)this + 284) = 0;
  *((_DWORD *)this + 288) = 0;
  *((_QWORD *)this + 140) = &CLightPreComputeHelper::`vftable';
  *((_WORD *)this + 580) = 0;
  *((_BYTE *)this + 1162) = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_DepthSorting>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::GetImpl'::`2'::impl,
    0LL,
    0LL);
  *((_BYTE *)this + 1160) = 0;
  LOBYTE(v3) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::GetImpl'::`2'::impl,
    v3,
    0LL);
  if ( !CCommonRegistryData::DisableProjectedShadows )
    *((_BYTE *)this + 1162) = 1;
  return this;
}
