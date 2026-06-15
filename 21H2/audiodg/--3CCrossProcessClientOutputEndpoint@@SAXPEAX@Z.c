/*
 * XREFs of ??3CCrossProcessClientOutputEndpoint@@SAXPEAX@Z @ 0x14005BC34
 * Callers:
 *     _privateCreateCrossProcessEndpoint_::_1_::dtor$3 @ 0x14002D7D2 (_privateCreateCrossProcessEndpoint_--_1_--dtor$3.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x14005D38B (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessClientOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x14005D4C3 (_ATL--CComCreator_ATL--CComObject_CCrossProcessClientOutputEndpoint___--CreateInstance_--_1_--dt.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x14005D5FB (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerInputEndpoint___--CreateInstance_--_1_--dto.c)
 *     _ATL::CComCreator_ATL::CComObject_CCrossProcessServerOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x14005D733 (_ATL--CComCreator_ATL--CComObject_CCrossProcessServerOutputEndpoint___--CreateInstance_--_1_--dt.c)
 *     _ATL::CComCreator_ATL::CComObject_CSpatialCrossProcessClientOutputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x140066463 (_ATL--CComCreator_ATL--CComObject_CSpatialCrossProcessClientOutputEndpoint___--CreateInstance_--.c)
 *     _ATL::CComCreator_ATL::CComObject_CSpatialCrossProcessServerInputEndpoint___::CreateInstance_::_1_::dtor$0 @ 0x14006659B (_ATL--CComCreator_ATL--CComObject_CSpatialCrossProcessServerInputEndpoint___--CreateInstance_--_.c)
 *     _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$0 @ 0x140066EB6 (_privateCreateSpatialCrossProcessEndpoint_--_1_--dtor$0.c)
 *     _privateCreateSpatialCrossProcessEndpoint_::_1_::dtor$1 @ 0x140066EC2 (_privateCreateSpatialCrossProcessEndpoint_--_1_--dtor$1.c)
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140016B64 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140016F44 (-AERTFree@@YAXPEAX0@Z.c)
 */

void __fastcall CCrossProcessClientOutputEndpoint::operator delete(void *a1)
{
  void *v2; // rax
  int v3; // r8d

  v2 = (void *)AERTGetDLLRTHeap();
  AERTFree(a1, v2, v3);
}
