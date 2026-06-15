/*
 * XREFs of ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x14005D420
 * Callers:
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ @ 0x140020D70 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x140020D80 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x140020D90 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFCA@EAAKXZ @ 0x140020DA0 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFCA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFCI@EAAKXZ @ 0x140020DB0 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFCI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFJA@EAAKXZ @ 0x140020DC0 (-AddRef@-$CComObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@WFJA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessServerInputEndpoint>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 1432), a2);
}
