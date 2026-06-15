/*
 * XREFs of ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAKXZ @ 0x14005F200
 * Callers:
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ @ 0x14002B680 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJA@EAAKXZ @ 0x14002B690 (-Release@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJI@EAAKXZ @ 0x14002B6A0 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBJI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ @ 0x14002B6B0 (-Release@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBKA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBMA@EAAKXZ @ 0x14002B6C0 (-Release@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBMA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBNI@EAAKXZ @ 0x14002B6D0 (-Release@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBNI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBMI@EAAKXZ @ 0x14002B710 (-Release@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBMI@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOA@EAAKXZ @ 0x14002B720 (-Release@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 488) + 16LL))(*(_QWORD *)(a1 + 488));
}
