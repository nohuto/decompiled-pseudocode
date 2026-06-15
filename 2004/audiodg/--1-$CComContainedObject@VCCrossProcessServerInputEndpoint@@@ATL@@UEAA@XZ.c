/*
 * XREFs of ??1?$CComContainedObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x140052D3C
 * Callers:
 *     _ATL::CComObject_CCrossProcessServerInputEndpoint_::CComObject_CCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x140022C54 (_ATL--CComObject_CCrossProcessServerInputEndpoint_--CComObject_CCrossProcessServerInputEndpoint_.c)
 *     _ATL::CComAggObject_CCrossProcessServerInputEndpoint_::CComAggObject_CCrossProcessServerInputEndpoint__::_1_::dtor$1 @ 0x14005258A (_ATL--CComAggObject_CCrossProcessServerInputEndpoint_--CComAggObject_CCrossProcessS_ea_14005258A.c)
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x14001693C (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 */

void __fastcall ATL::CComContainedObject<CCrossProcessServerInputEndpoint>::~CComContainedObject<CCrossProcessServerInputEndpoint>(
        __int64 a1)
{
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint((CCrossProcessBaseServerEndpoint *)a1);
  if ( *(_BYTE *)(a1 + 528) )
  {
    *(_BYTE *)(a1 + 528) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 488));
  }
}
