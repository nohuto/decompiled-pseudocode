/*
 * XREFs of ?InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ @ 0x140033A6C
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140011FA4 (-CreateInstance@-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX.c)
 * Callees:
 *     <none>
 */

void __fastcall CStreamGroup::InternalFinalConstructRelease(CStreamGroup *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 86);
}
