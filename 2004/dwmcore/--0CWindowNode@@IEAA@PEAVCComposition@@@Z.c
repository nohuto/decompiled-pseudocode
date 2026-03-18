/*
 * XREFs of ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x1800974A4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x1800A3FD4 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CWindowNode *__fastcall CWindowNode::CWindowNode(CWindowNode *this, struct CComposition *a2)
{
  CWindowNode *result; // rax

  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CWindowNode::`vftable';
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 91) = (char *)this + 760;
  *((_QWORD *)this + 92) = (char *)this + 760;
  *((_DWORD *)this + 186) = 2;
  *(_QWORD *)((char *)this + 748) = 2LL;
  *((_DWORD *)this + 196) = 1065353216;
  *((_DWORD *)this + 197) = 1065353216;
  *((_DWORD *)this + 198) = 1065353216;
  *(_QWORD *)((char *)this + 796) = 1065353216LL;
  result = this;
  *(_QWORD *)((char *)this + 804) = 0LL;
  *((_DWORD *)this + 203) = 0;
  *((_BYTE *)this + 816) = 0;
  *((_QWORD *)this + 109) = 0LL;
  *((_QWORD *)this + 110) = 0LL;
  *((_QWORD *)this + 111) = 0LL;
  *((_DWORD *)this + 224) = 0;
  return result;
}
