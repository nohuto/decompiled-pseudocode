/*
 * XREFs of ?Release@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBMA@EAAKXZ @ 0x14002B6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::Release(__int64 a1)
{
  return ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::Release(a1 - 448);
}
