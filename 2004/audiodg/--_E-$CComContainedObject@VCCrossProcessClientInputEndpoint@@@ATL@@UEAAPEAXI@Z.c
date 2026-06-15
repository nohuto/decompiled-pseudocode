/*
 * XREFs of ??_E?$CComContainedObject@VCCrossProcessClientInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x1400531C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140016B84 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140016F64 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001BFB0 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x140052FEC (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall ATL::CComContainedObject<CCrossProcessClientInputEndpoint>::`vector deleting destructor'(
        char *a1,
        char a2)
{
  void *v4; // rax
  int v5; // r8d

  CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint((CCrossProcessBaseClientEndpoint *)a1);
  if ( a1[536] )
  {
    a1[536] = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 496));
  }
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
