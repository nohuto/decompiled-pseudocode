/*
 * XREFs of ??0CTransform3D@@IEAA@PEAVCComposition@@_N@Z @ 0x1800C4330
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CTransform3D *__fastcall CTransform3D::CTransform3D(CTransform3D *this, struct CComposition *a2, char a3)
{
  CTransform3D *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CTransform3D::`vftable';
  result = this;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *((_BYTE *)this + 148) = a3;
  return result;
}
