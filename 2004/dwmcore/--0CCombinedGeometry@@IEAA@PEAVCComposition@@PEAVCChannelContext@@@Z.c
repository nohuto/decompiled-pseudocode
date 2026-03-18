/*
 * XREFs of ??0CCombinedGeometry@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18016BD20
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x18001C8A4 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CCombinedGeometry *__fastcall CCombinedGeometry::CCombinedGeometry(
        CCombinedGeometry *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  _QWORD *v3; // r9
  CCombinedGeometry *v4; // r10
  CCombinedGeometry *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CPropertyChangeResource::`vftable';
  *((_QWORD *)this + 12) = 0LL;
  *((_BYTE *)this + 104) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 120) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *((_DWORD *)this + 21) = 1065353216;
  CCyclicResourceListEntry::CCyclicResourceListEntry((CCombinedGeometry *)((char *)this + 136), a3[3]);
  *v3 = &CCombinedGeometry::`vftable'{for `CCyclicResourceListEntry'};
  result = v4;
  *(_QWORD *)v4 = &CCombinedGeometry::`vftable'{for `CGeometry'};
  return result;
}
