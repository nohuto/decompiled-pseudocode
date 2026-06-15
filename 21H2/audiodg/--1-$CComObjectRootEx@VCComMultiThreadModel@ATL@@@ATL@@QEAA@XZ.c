/*
 * XREFs of ??1?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAA@XZ @ 0x14003AC14
 * Callers:
 *     _CCrossProcessServerInputEndpoint::CCrossProcessServerInputEndpoint_::_1_::dtor$0 @ 0x14002D7F6 (_CCrossProcessServerInputEndpoint--CCrossProcessServerInputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessClientInputEndpoint::CCrossProcessClientInputEndpoint_::_1_::dtor$0 @ 0x14005B53E (_CCrossProcessClientInputEndpoint--CCrossProcessClientInputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessClientOutputEndpoint::CCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x14005B5DE (_CCrossProcessClientOutputEndpoint--CCrossProcessClientOutputEndpoint_--_1_--dtor$0.c)
 *     _CCrossProcessServerOutputEndpoint::CCrossProcessServerOutputEndpoint_::_1_::dtor$0 @ 0x14005B66B (_CCrossProcessServerOutputEndpoint--CCrossProcessServerOutputEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessClientOutputEndpoint::CSpatialCrossProcessClientOutputEndpoint_::_1_::dtor$0 @ 0x140065657 (_CSpatialCrossProcessClientOutputEndpoint--CSpatialCrossProcessClientOutputEndpoint_--_1_--dtor$.c)
 *     _CSpatialCrossProcessServerInputEndpoint::CSpatialCrossProcessServerInputEndpoint_::_1_::dtor$0 @ 0x14006578E (_CSpatialCrossProcessServerInputEndpoint--CSpatialCrossProcessServerInputEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::~CComObjectRootEx<ATL::CComMultiThreadModel>(
        __int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 + 8;
  if ( *(_BYTE *)(v1 + 40) )
  {
    *(_BYTE *)(v1 + 40) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)v1);
  }
}
