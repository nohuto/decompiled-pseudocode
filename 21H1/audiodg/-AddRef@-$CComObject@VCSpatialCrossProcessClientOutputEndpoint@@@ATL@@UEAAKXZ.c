/*
 * XREFs of ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x14005D400
 * Callers:
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x140020D00 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x140020D10 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x140020D20 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFCA@EAAKXZ @ 0x140020D30 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFCA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFCI@EAAKXZ @ 0x140020D40 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFCI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDA@EAAKXZ @ 0x140020D50 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFGA@EAAKXZ @ 0x140020D60 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFGA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 1392), a2);
}
