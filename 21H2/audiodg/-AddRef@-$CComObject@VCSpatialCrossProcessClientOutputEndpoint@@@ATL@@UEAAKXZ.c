/*
 * XREFs of ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140066070
 * Callers:
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ @ 0x14002B8B0 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ @ 0x14002B8C0 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ @ 0x14002B8D0 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WBI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFCA@EAAKXZ @ 0x14002B8E0 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFCA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFCI@EAAKXZ @ 0x14002B8F0 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFCI@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDA@EAAKXZ @ 0x14002B900 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFDA@EAAKXZ.c)
 *     ?AddRef@?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFGA@EAAKXZ @ 0x14002B910 (-AddRef@-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@WFGA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::AddRef(__int64 a1, volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 1392), a2);
}
