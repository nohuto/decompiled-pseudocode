/*
 * XREFs of ??0Edge@@QEAA@PEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801786D0
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180178A10 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180179854 (-Set@Edge@@AEAAXPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
Edge *__fastcall Edge::Edge(Edge *this, const struct EdgyCompositionConfigurationUpdateEx *a2)
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
  Edge::Set(this, a2);
  return this;
}
