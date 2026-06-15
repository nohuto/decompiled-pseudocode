/*
 * XREFs of ??_E?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400533C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140016B84 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140016F64 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001BFB0 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1?$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ @ 0x140052DAC (--1-$CComObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CCrossProcessBaseClientEndpoint *__fastcall ATL::CComObject<CCrossProcessClientInputEndpoint>::`vector deleting destructor'(
        CCrossProcessBaseClientEndpoint *a1,
        char a2)
{
  void *v4; // rax
  int v5; // r8d

  ATL::CComObject<CCrossProcessClientInputEndpoint>::~CComObject<CCrossProcessClientInputEndpoint>(a1);
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
