/*
 * XREFs of ?InternalRelease@?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ @ 0x1800DBEB4
 * Callers:
 *     ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x1800DBEA4 (-InternalFinalConstructRelease@CVADServer@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ @ 0x1801205AC (-InternalFinalConstructRelease@CAPOWrapperSrv@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease(int *a1)
{
  return ATL::CComMultiThreadModel::SafeDecrementReference(a1);
}
