/*
 * XREFs of ?AddRef@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBNI@EAAKXZ @ 0x14002B390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::AddRef(__int64 a1)
{
  return ATL::CComContainedObject<CCrossProcessServerOutputEndpoint>::AddRef(a1 - 472);
}
