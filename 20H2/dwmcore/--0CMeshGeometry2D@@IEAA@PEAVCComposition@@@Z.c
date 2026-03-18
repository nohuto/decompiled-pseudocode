/*
 * XREFs of ??0CMeshGeometry2D@@IEAA@PEAVCComposition@@@Z @ 0x1801D5CE0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800ACC98 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CMeshGeometry2D *__fastcall CMeshGeometry2D::CMeshGeometry2D(CMeshGeometry2D *this, struct CComposition *a2)
{
  CMeshGeometry2D *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CMeshGeometry2D::`vftable';
  result = this;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  return result;
}
