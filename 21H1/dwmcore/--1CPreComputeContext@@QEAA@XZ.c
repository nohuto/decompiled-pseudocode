/*
 * XREFs of ??1CPreComputeContext@@QEAA@XZ @ 0x18008E014
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x18008E170 (--1CVisualTree@@UEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x180094E14 (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVisualCollection@@0AEAV?$allocator@VCDepthSortedVisualCollection@@@0@@Z @ 0x18016D670 (--$_Destroy_range@V-$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVis.c)
 */

void __fastcall CPreComputeContext::~CPreComputeContext(CPreComputeContext *this)
{
  __int64 v2; // rdi

  operator delete(*((void **)this + 143));
  operator delete(*((void **)this + 138));
  operator delete(*((void **)this + 132));
  operator delete(*((void **)this + 128));
  operator delete(*((void **)this + 124));
  operator delete(*((void **)this + 120));
  operator delete(*((void **)this + 116));
  operator delete(*((void **)this + 112));
  operator delete(*((void **)this + 108));
  operator delete(*((void **)this + 104));
  operator delete(*((void **)this + 100));
  operator delete(*((void **)this + 96));
  operator delete(*((void **)this + 92));
  v2 = *((_QWORD *)this + 87);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CDepthSortedVisualCollection>>(*((CDepthSortedVisualCollection **)this + 87));
    std::_Deallocate<16,0>(v2, 56 * ((*((_QWORD *)this + 89) - v2) / 56));
    *((_QWORD *)this + 87) = 0LL;
    *((_QWORD *)this + 88) = 0LL;
    *((_QWORD *)this + 89) = 0LL;
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 656);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 624);
  operator delete(*((void **)this + 74));
  CLightStack::~CLightStack((CPreComputeContext *)((char *)this + 296));
  operator delete(*((void **)this + 35));
  operator delete(*((void **)this + 31));
  operator delete(*((void **)this + 27));
  operator delete(*((void **)this + 23));
  operator delete(*((void **)this + 19));
  operator delete(*((void **)this + 15));
  operator delete(*((void **)this + 11));
  operator delete(*((void **)this + 7));
  operator delete(*((void **)this + 3));
}
