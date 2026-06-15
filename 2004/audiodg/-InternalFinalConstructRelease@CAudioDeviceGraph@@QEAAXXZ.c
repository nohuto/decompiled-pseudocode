/*
 * XREFs of ?InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x140030FA4
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400120C4 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioDeviceGraph::InternalFinalConstructRelease(CAudioDeviceGraph *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((char *)this + 24);
}
