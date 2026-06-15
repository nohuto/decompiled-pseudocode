/*
 * XREFs of ?QueryInterface@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140055800
 * Callers:
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400208F0 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@W7EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020900 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBJA@EAAJAEBU_GU.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020910 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBJI@EAAJAEBU_GU.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020920 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBKA@EAAJAEBU_GUI.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020930 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@WBMA@EAAJAEBU_GUI.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBNI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020940 (-QueryInterface@-$CComContainedObject@VCCrossProcessClientOutputEndpoint@@@ATL@@WBNI@EAAJAEBU_GU.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBMI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020980 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBMI@EAAJAEBU_GU.c)
 *     ?QueryInterface@?$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140020990 (-QueryInterface@-$CComContainedObject@VCCrossProcessServerOutputEndpoint@@@ATL@@WBOA@EAAJAEBU_GU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CCrossProcessClientOutputEndpoint>::QueryInterface(__int64 a1)
{
  return (***(__int64 (__fastcall ****)(_QWORD))(a1 + 488))(*(_QWORD *)(a1 + 488));
}
