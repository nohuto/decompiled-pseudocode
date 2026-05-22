/*
 * XREFs of ??0Edge@@QEAA@PEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801786CC
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801789B4 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x180179804 (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
Edge *__fastcall Edge::Edge(Edge *this, const unsigned __int16 *a2, struct EdgyControllerClientProxy *a3)
{
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 7LL;
  *((_WORD *)this + 4) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *(_OWORD *)((char *)this + 52) = 0LL;
  *(_OWORD *)((char *)this + 68) = 0LL;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  Edge::Set(this, a2, a3);
  return this;
}
