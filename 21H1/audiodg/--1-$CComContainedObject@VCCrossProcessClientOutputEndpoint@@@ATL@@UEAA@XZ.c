/*
 * XREFs of ??1?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140052D04
 * Callers:
 *     _ATL::CComAggObject_CCrossProcessClientInputEndpoint_::CComAggObject_CCrossProcessClientInputEndpoint__::_1_::dtor$1 @ 0x1400523DC (_ATL--CComAggObject_CCrossProcessClientInputEndpoint_--CComAggObject_CCrossProcessC_ea_1400523DC.c)
 *     _ATL::CComAggObject_CCrossProcessClientOutputEndpoint_::CComAggObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$1 @ 0x1400524C8 (_ATL--CComAggObject_CCrossProcessClientOutputEndpoint_--CComAggObject_CCrossProcess_ea_1400524C8.c)
 *     _ATL::CComObject_CCrossProcessClientInputEndpoint_::CComObject_CCrossProcessClientInputEndpoint__::_1_::dtor$0 @ 0x1400526FD (_ATL--CComObject_CCrossProcessClientInputEndpoint_--CComObject_CCrossProcessClientInputEndpoint_.c)
 *     _ATL::CComObject_CCrossProcessClientOutputEndpoint_::CComObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x14005279D (_ATL--CComObject_CCrossProcessClientOutputEndpoint_--CComObject_CCrossProcessClientOutputEndpoin.c)
 * Callees:
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x140052FEC (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 */

void __fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::~CComContainedObject<CCrossProcessClientOutputEndpoint>(
        __int64 a1)
{
  CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint((CCrossProcessBaseClientEndpoint *)a1);
  if ( *(_BYTE *)(a1 + 536) )
  {
    *(_BYTE *)(a1 + 536) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 496));
  }
}
