/*
 * XREFs of ??0CTransformGroup@@IEAA@PEAVCComposition@@PEAVCChannelContext@@@Z @ 0x18001D50C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18007F9A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z @ 0x18001D594 (--0CCyclicResourceListEntry@@IEAA@PEAVCResourceTable@@@Z.c)
 */

CTransformGroup *__fastcall CTransformGroup::CTransformGroup(
        CTransformGroup *this,
        struct CComposition *a2,
        struct CResourceTable **a3)
{
  _QWORD *v3; // r9
  CTransformGroup *v4; // r10
  CTransformGroup *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *((_BYTE *)this + 148) = 0;
  *(_QWORD *)this = &CTransform::`vftable';
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  CCyclicResourceListEntry::CCyclicResourceListEntry((CTransformGroup *)((char *)this + 176), a3[3]);
  *v3 = &CTransformGroup::`vftable'{for `CCyclicResourceListEntry'};
  result = v4;
  *(_QWORD *)v4 = &CTransformGroup::`vftable'{for `CTransformGroupGeneratedT<CTransformGroup,CTransform>'};
  return result;
}
