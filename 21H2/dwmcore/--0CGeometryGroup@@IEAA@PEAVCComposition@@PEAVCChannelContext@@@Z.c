/*
 * XREFs of ??0CGeometryGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18019CC0C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x1800CF5B4 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CGeometryGroup *__fastcall CGeometryGroup::CGeometryGroup(
        CGeometryGroup *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  _QWORD *v3; // r9
  CGeometryGroup *v4; // r10
  CGeometryGroup *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CPropertyChangeResource::`vftable';
  *((_QWORD *)this + 13) = 0LL;
  *((_BYTE *)this + 112) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_BYTE *)this + 128) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *((_DWORD *)this + 23) = 1065353216;
  CCyclicResourceListEntry::CCyclicResourceListEntry((CGeometryGroup *)((char *)this + 144), a3[4]);
  *v3 = &CGeometryGroup::`vftable'{for `CCyclicResourceListEntry'};
  result = v4;
  *(_QWORD *)v4 = &CGeometryGroup::`vftable'{for `CGeometry'};
  return result;
}
