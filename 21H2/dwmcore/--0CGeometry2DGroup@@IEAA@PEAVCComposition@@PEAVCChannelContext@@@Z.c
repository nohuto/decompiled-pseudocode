/*
 * XREFs of ??0CGeometry2DGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18019CB70
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x1800CF5B4 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CGeometry2DGroup *__fastcall CGeometry2DGroup::CGeometry2DGroup(
        CGeometry2DGroup *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  __int64 v3; // r10
  CGeometry2DGroup *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CGeometry2D::`vftable';
  CCyclicResourceListEntry::CCyclicResourceListEntry((CGeometry2DGroup *)((char *)this + 80), a3[4]);
  *(_DWORD *)(v3 + 128) = 0;
  *(_DWORD *)(v3 + 132) = 0;
  *(_DWORD *)(v3 + 136) = 0;
  *(_DWORD *)(v3 + 140) = 0;
  *(_DWORD *)(v3 + 144) = 0;
  *(_DWORD *)(v3 + 148) = 0;
  *(_DWORD *)(v3 + 152) = 0;
  *(_DWORD *)(v3 + 156) = 0;
  *(_QWORD *)(v3 + 80) = &CGeometry2DGroup::`vftable'{for `CCyclicResourceListEntry'};
  result = (CGeometry2DGroup *)v3;
  *(_QWORD *)v3 = &CGeometry2DGroup::`vftable'{for `CGeometry2D'};
  return result;
}
