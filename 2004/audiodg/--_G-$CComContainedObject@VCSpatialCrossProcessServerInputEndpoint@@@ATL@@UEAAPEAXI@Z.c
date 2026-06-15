/*
 * XREFs of ??_G?$CComContainedObject@VCSpatialCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14005D1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140016B84 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140016F64 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001BFB0 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x14005CFD4 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CComContainedObject<CSpatialCrossProcessServerInputEndpoint>::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *a1,
        int a2,
        int a3)
{
  char v3; // di
  void *v5; // rax
  int v6; // r8d

  v3 = a2;
  CSpatialCrossProcessServerEndpoint::~CSpatialCrossProcessServerEndpoint(
    (CSpatialCrossProcessServerEndpoint *)a1,
    a2,
    a3);
  if ( LOBYTE(a1[37].DebugInfo) )
  {
    LOBYTE(a1[37].DebugInfo) = 0;
    DeleteCriticalSection(a1 + 36);
  }
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
    {
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel((Windows::Media::Devices::SendCommandAsyncOperation *)a1);
    }
    else
    {
      v5 = (void *)AERTGetDLLRTHeap();
      AERTFree(a1, v5, v6);
    }
  }
  return a1;
}
