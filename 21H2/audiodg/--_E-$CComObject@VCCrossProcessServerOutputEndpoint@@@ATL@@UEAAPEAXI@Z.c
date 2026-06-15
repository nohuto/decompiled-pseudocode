/*
 * XREFs of ??_E?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x14005C020
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140016B64 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140016F44 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001C240 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ @ 0x14005BABC (--1-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAA@XZ.c)
 */

CCrossProcessBaseServerEndpoint *__fastcall ATL::CComObject<CCrossProcessServerOutputEndpoint>::`vector deleting destructor'(
        CCrossProcessBaseServerEndpoint *a1,
        char a2)
{
  void *v4; // rax
  int v5; // r8d

  ATL::CComObject<CCrossProcessServerOutputEndpoint>::~CComObject<CCrossProcessServerOutputEndpoint>(a1);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(a1);
    }
    else
    {
      v4 = (void *)AERTGetDLLRTHeap();
      AERTFree(a1, v4, v5);
    }
  }
  return a1;
}
