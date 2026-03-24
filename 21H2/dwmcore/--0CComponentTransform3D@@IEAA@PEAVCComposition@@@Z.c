/*
 * XREFs of ??0CComponentTransform3D@@IEAA@PEAVCComposition@@@Z @ 0x1800C8544
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2008 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CComponentTransform3D *__fastcall CComponentTransform3D::CComponentTransform3D(
        CComponentTransform3D *this,
        struct CComposition *a2)
{
  CComponentTransform3D *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CComponentTransform3D::`vftable';
  *((_BYTE *)this + 148) = 1;
  *(_QWORD *)((char *)this + 228) = 1065353216LL;
  *((_QWORD *)this + 31) = 1065353216LL;
  *(_QWORD *)((char *)this + 268) = 1065353216LL;
  *((_DWORD *)this + 72) = 1065353216;
  *(_QWORD *)((char *)this + 236) = 0LL;
  *((_DWORD *)this + 61) = 0;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 66) = 0;
  *(_QWORD *)((char *)this + 276) = 0LL;
  *((_DWORD *)this + 71) = 0;
  *(_QWORD *)((char *)this + 172) = CComponentTransform3D::sc_defaultOffset;
  *((_DWORD *)this + 45) = dword_18034B228;
  *((_OWORD *)this + 13) = CComponentTransform3D::sc_defaultOrientation;
  *((_QWORD *)this + 23) = CComponentTransform3D::sc_defaultRotationAxis;
  *((_DWORD *)this + 48) = dword_1803466B8;
  *(_QWORD *)((char *)this + 196) = CComponentTransform3D::sc_defaultScale;
  *((_DWORD *)this + 51) = dword_1803466C8;
  result = this;
  *(_OWORD *)((char *)this + 228) = CComponentTransform3D::sc_defaultTransformMatrix;
  *(_OWORD *)((char *)this + 244) = xmmword_1803466F0;
  *(_OWORD *)((char *)this + 260) = xmmword_180346700;
  *(_OWORD *)((char *)this + 276) = xmmword_180346710;
  return result;
}
