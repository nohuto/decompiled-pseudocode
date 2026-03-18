/*
 * XREFs of ??0CDrawingContext@@IEAA@XZ @ 0x180052CC0
 * Callers:
 *     ?Create@CDrawingContext@@SAXPEAPEAV1@@Z @ 0x180052C34 (-Create@CDrawingContext@@SAXPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CScopedClipStack@@QEAA@XZ @ 0x180052FB0 (--0CScopedClipStack@@QEAA@XZ.c)
 *     ??0CLightStack@@QEAA@XZ @ 0x180053050 (--0CLightStack@@QEAA@XZ.c)
 *     ??0_unnamed_type_m_contextState_@CDrawingContext@@QEAA@XZ @ 0x1800530A8 (--0_unnamed_type_m_contextState_@CDrawingContext@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180053130 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ProjectedShadow@@@details@wil@@QEAAX_NW4R.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180087918 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 */

CDrawingContext *__fastcall CDrawingContext::CDrawingContext(CDrawingContext *this)
{
  char v2; // al
  __int64 v3; // r8
  __int64 v4; // rdx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = &ID2DContextOwner::`vftable';
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 12) = 1065353216LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *(_QWORD *)((char *)this + 116) = 1065353216LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)this + 17) = 1065353216LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 1065353216;
  v2 = *((_BYTE *)this + 161);
  *((_BYTE *)this + 160) = 85;
  *((_BYTE *)this + 161) = v2 & 0xC0 | 0x17;
  *((_QWORD *)this + 21) = 0LL;
  *((_BYTE *)this + 176) = 0;
  *((_QWORD *)this + 23) = 0LL;
  CDrawingContext::_unnamed_type_m_contextState_::_unnamed_type_m_contextState_((CDrawingContext *)((char *)this + 192));
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 90) = 0;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 98) = 0;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 106) = 0;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_DWORD *)this + 110) = 0;
  *((_DWORD *)this + 114) = 0;
  *((_QWORD *)this + 58) = (char *)this + 496;
  *((_QWORD *)this + 59) = (char *)this + 496;
  *((_DWORD *)this + 120) = 4;
  *(_QWORD *)((char *)this + 484) = 4LL;
  CLightStack::CLightStack((CDrawingContext *)((char *)this + 528));
  *((_DWORD *)this + 196) = v3;
  *((_QWORD *)this + 96) = (char *)this + 800;
  *((_QWORD *)this + 97) = (char *)this + 800;
  *(_QWORD *)((char *)this + 788) = v3;
  *((_QWORD *)this + 104) = 0LL;
  *((_QWORD *)this + 106) = 0LL;
  *((_DWORD *)this + 210) = 0;
  *((_DWORD *)this + 214) = 0;
  CScopedClipStack::CScopedClipStack((CDrawingContext *)((char *)this + 864));
  *((_QWORD *)this + 388) = 0LL;
  *((_QWORD *)this + 390) = 0LL;
  *((_DWORD *)this + 778) = 0;
  *((_DWORD *)this + 782) = 0;
  *((_QWORD *)this + 392) = 0LL;
  *((_QWORD *)this + 394) = 0LL;
  *((_DWORD *)this + 786) = 0;
  *((_DWORD *)this + 790) = 0;
  *(_QWORD *)((char *)this + 3204) = 0LL;
  *((_QWORD *)this + 402) = 0LL;
  *((_DWORD *)this + 806) = 0;
  *(_QWORD *)((char *)this + 3196) = 1LL;
  *((_DWORD *)this + 793) = 0;
  *((_QWORD *)this + 397) = 0LL;
  *((_QWORD *)this + 398) = 0LL;
  *((_DWORD *)this + 828) = 0;
  *((_QWORD *)this + 415) = 0LL;
  *((_QWORD *)this + 417) = 0LL;
  *((_DWORD *)this + 832) = 0;
  *((_DWORD *)this + 836) = 0;
  *((_QWORD *)this + 419) = 0LL;
  *((_QWORD *)this + 423) = 0LL;
  *((_QWORD *)this + 424) = 0LL;
  *((_QWORD *)this + 425) = 0LL;
  *((_DWORD *)this + 852) = 0;
  *((_QWORD *)this + 427) = 0LL;
  *((_QWORD *)this + 428) = 0LL;
  *((_QWORD *)this + 429) = 0LL;
  *((_DWORD *)this + 860) = 0;
  *((_QWORD *)this + 431) = 0LL;
  *((_QWORD *)this + 432) = 0LL;
  *((_QWORD *)this + 433) = 0LL;
  *((_DWORD *)this + 868) = 0;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawingContext *)((char *)this + 3488));
  *((_QWORD *)this + 994) = 0LL;
  *((_DWORD *)this + 1990) = 0;
  *((_QWORD *)this + 996) = (char *)this + 7976;
  LOBYTE(v4) = 1;
  *((_DWORD *)this + 1994) = 0;
  *((_DWORD *)this + 2010) = 16777473;
  *((_BYTE *)this + 8044) = 1;
  *((_BYTE *)this + 8043) = CCommonRegistryData::DisableDrawListCaching == 0;
  *((_DWORD *)this + 16) = DisplayId::Invalid;
  *((_DWORD *)this + 17) = 0;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_ProjectedShadow>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::GetImpl'::`2'::impl,
    v4,
    0LL);
  if ( CCommonRegistryData::DisableProjectedShadows )
    *((_BYTE *)this + 8044) = 0;
  return this;
}
