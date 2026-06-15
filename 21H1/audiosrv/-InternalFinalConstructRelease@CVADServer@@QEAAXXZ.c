/*
 * XREFs of ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x1800DCA74
 * Callers:
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x1800111C0 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVADServer::InternalFinalConstructRelease(CVADServer *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((char *)this + 8);
}
