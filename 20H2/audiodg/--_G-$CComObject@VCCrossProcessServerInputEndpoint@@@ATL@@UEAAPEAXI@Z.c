/*
 * XREFs of ??_G?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140016880
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ @ 0x1400168CC (--1-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAA@XZ.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140016B94 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140016F74 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001C270 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessBaseServerEndpoint *__fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::`scalar deleting destructor'(
        CCrossProcessBaseServerEndpoint *a1,
        char a2)
{
  void *v4; // rax

  ATL::CComObject<CCrossProcessServerInputEndpoint>::~CComObject<CCrossProcessServerInputEndpoint>(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(a1);
    }
    else
    {
      v4 = AERTGetDLLRTHeap();
      AERTFree(a1, v4);
    }
  }
  return a1;
}
