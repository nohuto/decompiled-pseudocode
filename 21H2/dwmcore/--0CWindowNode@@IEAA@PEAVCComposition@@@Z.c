/*
 * XREFs of ??0CWindowNode@@IEAA@PEAVCComposition@@@Z @ 0x1800648C0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CVisual@@IEAA@PEAVCComposition@@@Z @ 0x180088200 (--0CVisual@@IEAA@PEAVCComposition@@@Z.c)
 */

CWindowNode *__fastcall CWindowNode::CWindowNode(CWindowNode *this, struct CComposition *a2)
{
  CWindowNode *result; // rax

  CVisual::CVisual(this, a2);
  *(_QWORD *)this = &CWindowNode::`vftable';
  *((_DWORD *)this + 206) = 1065353216;
  *((_DWORD *)this + 207) = 1065353216;
  *((_DWORD *)this + 208) = 1065353216;
  *(_QWORD *)((char *)this + 836) = 1065353216LL;
  result = this;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  *((_QWORD *)this + 96) = 0LL;
  *((_QWORD *)this + 97) = 0LL;
  *((_QWORD *)this + 98) = 0LL;
  *((_QWORD *)this + 99) = 0LL;
  *((_QWORD *)this + 100) = 0LL;
  *((_QWORD *)this + 101) = 0LL;
  *(_QWORD *)((char *)this + 844) = 0LL;
  *((_DWORD *)this + 213) = 0;
  *((_BYTE *)this + 856) = 0;
  return result;
}
