/*
 * XREFs of ?InternalFinalConstructRelease@CVpoContext@@QEAAXXZ @ 0x140043ABC
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140043808 (-CreateInstance@-$CComCreator@V-$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     <none>
 */

void __fastcall CVpoContext::InternalFinalConstructRelease(CVpoContext *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 4);
}
