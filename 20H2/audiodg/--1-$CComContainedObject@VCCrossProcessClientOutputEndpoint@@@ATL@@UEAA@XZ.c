/*
 * XREFs of ??1?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14005B764
 * Callers:
 *     _ATL::CComAggObject_CCrossProcessClientInputEndpoint_::CComAggObject_CCrossProcessClientInputEndpoint__::_1_::dtor$1 @ 0x14005AE3C (_ATL--CComAggObject_CCrossProcessClientInputEndpoint_--CComAggObject_CCrossProcessC_ea_14005AE3C.c)
 *     _ATL::CComAggObject_CCrossProcessClientOutputEndpoint_::CComAggObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$1 @ 0x14005AF28 (_ATL--CComAggObject_CCrossProcessClientOutputEndpoint_--CComAggObject_CCrossProcess_ea_14005AF28.c)
 *     _ATL::CComObject_CCrossProcessClientInputEndpoint_::CComObject_CCrossProcessClientInputEndpoint__::_1_::dtor$0 @ 0x14005B15D (_ATL--CComObject_CCrossProcessClientInputEndpoint_--CComObject_CCrossProcessClientInputEndpoint_.c)
 *     _ATL::CComObject_CCrossProcessClientOutputEndpoint_::CComObject_CCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x14005B1FD (_ATL--CComObject_CCrossProcessClientOutputEndpoint_--CComObject_CCrossProcessClientOutputEndpoin.c)
 * Callees:
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14005BA4C (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
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
