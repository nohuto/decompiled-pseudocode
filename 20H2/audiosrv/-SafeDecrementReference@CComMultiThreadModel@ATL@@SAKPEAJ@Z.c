/*
 * XREFs of ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x18006E928
 * Callers:
 *     ?Release@?$CComObject@VCVADServer@@@ATL@@UEAAKXZ @ 0x1800441E0 (-Release@-$CComObject@VCVADServer@@@ATL@@UEAAKXZ.c)
 *     ?InternalRelease@?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ @ 0x1800DBEB4 (-InternalRelease@-$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ.c)
 *     ?Release@?$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x180120960 (-Release@-$CComAggObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ @ 0x180120A00 (-Release@-$CComObject@VCAPOWrapperSrv@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x180120A80 (-Release@-$CComObjectNoLock@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComMultiThreadModel::SafeDecrementReference(int *a1)
{
  return ATL::SafeDecrementReferenceMultiThread(a1);
}
