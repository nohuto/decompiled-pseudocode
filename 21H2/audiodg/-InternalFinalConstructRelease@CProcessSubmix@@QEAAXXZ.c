/*
 * XREFs of ?InternalFinalConstructRelease@CProcessSubmix@@QEAAXXZ @ 0x14004F878
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012490 (-CreateInstance@-$CComCreator@V-$CComObject@VCProcessSubmix@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 * Callees:
 *     <none>
 */

void __fastcall CProcessSubmix::InternalFinalConstructRelease(CProcessSubmix *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 84);
}
