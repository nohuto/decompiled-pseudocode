/*
 * XREFs of ??1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ @ 0x140065768
 * Callers:
 *     _ATL::CComAggObject_CSpatialCrossProcessServerInputEndpoint_::CComAggObject_CSpatialCrossProcessServerInputEndpoint__::_1_::dtor$1 @ 0x14006507E (_ATL--CComAggObject_CSpatialCrossProcessServerInputEndpoint_--CComAggObject_CSpatia_ea_14006507E.c)
 *     _ATL::CComObject_CSpatialCrossProcessServerInputEndpoint_::CComObject_CSpatialCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x1400651C3 (_ATL--CComObject_CSpatialCrossProcessServerInputEndpoint_--CComObject_CSpatialCrossProcessServer.c)
 * Callees:
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x140065B00 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessServerInputEndpoint::~CSpatialCrossProcessServerInputEndpoint(
        struct _RTL_CRITICAL_SECTION *this)
{
  CSpatialCrossProcessServerEndpoint::~CSpatialCrossProcessServerEndpoint((CSpatialCrossProcessServerEndpoint *)this);
  if ( LOBYTE(this[37].DebugInfo) )
  {
    LOBYTE(this[37].DebugInfo) = 0;
    DeleteCriticalSection(this + 36);
  }
}
