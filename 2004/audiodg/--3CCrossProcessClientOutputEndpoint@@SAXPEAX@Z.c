/*
 * XREFs of ??3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z @ 0x140053094
 * Callers:
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$3 @ 0x140022C42 (_privateCreateCrossProcessEndpoint_--_1_--dtor$3.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x1400547EB (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140054923 (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientOutputEndpoint___--CreateInstance_--_1_--dt.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140054A5B (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140054B93 (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerOutputEndpoint___--CreateInstance_--_1_--dt.c)
 *     _ATL::CComCreator_ATL::CComObject_CSpatialCrossProcessClientOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x14005D7F3 (_ATL--CComCreator_ATL--CComObject_CSpatialCrossProcessClientOutputEndpoint___--CreateInstance_--.c)
 *     _ATL::CComCreator_ATL::CComObject_CSpatialCrossProcessServerInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x14005D92B (_ATL--CComCreator_ATL--CComObject_CSpatialCrossProcessServerInputEndpoint___--CreateInstance_--_.c)
 *     _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$0 @ 0x14005E246 (_privateCreateSpatialCrossProcessEndpoint_--_1_--dtor$0.c)
 *     _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$1 @ 0x14005E252 (_privateCreateSpatialCrossProcessEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140016B84 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140016F64 (-AERTFree@@YAXPEAX0@Z.c)
 */

void __fastcall CCrossProcessClientOutputEndpoint::operator delete(void *a1)
{
  void *v2; // rax
  int v3; // r8d

  v2 = (void *)AERTGetDLLRTHeap();
  AERTFree(a1, v2, v3);
}
