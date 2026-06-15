/*
 * XREFs of ??_E?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14005D240
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140016B84 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140016F64 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001BFB0 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14005CC74 (--1-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::`vector deleting destructor'(
        struct _RTL_CRITICAL_SECTION *a1,
        char a2)
{
  void *v4; // rax
  int v5; // r8d

  ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::~CComObject<CSpatialCrossProcessClientOutputEndpoint>(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel((Windows::Media::Devices::SendCommandAsyncOperation *)a1);
    }
    else
    {
      v4 = (void *)AERTGetDLLRTHeap();
      AERTFree(a1, v4, v5);
    }
  }
  return a1;
}
