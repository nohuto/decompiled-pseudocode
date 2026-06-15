/*
 * XREFs of ?InternalFinalConstructRelease@CVpoContext@@QEAAXXZ @ 0x14004E2CC
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14004E018 (-CreateInstance@-$CComCreator@V-$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     <none>
 */

void __fastcall CVpoContext::InternalFinalConstructRelease(CVpoContext *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 4);
}
