/*
 * XREFs of ??1CSpatialCrossProcessServerInputEndpoint@@UEAA@XZ @ 0x1400658A8
 * Callers:
 *     _ATL::CComAggObject_CSpatialCrossProcessServerInputEndpoint_::CComAggObject_CSpatialCrossProcessServerInputEndpoint__::_1_::dtor$1 @ 0x1400651BE (_ATL--CComAggObject_CSpatialCrossProcessServerInputEndpoint_--CComAggObject_CSpatia_ea_1400651BE.c)
 *     _ATL::CComObject_CSpatialCrossProcessServerInputEndpoint_::CComObject_CSpatialCrossProcessServerInputEndpoint__::_1_::dtor$0 @ 0x140065303 (_ATL--CComObject_CSpatialCrossProcessServerInputEndpoint_--CComObject_CSpatialCrossProcessServer.c)
 * Callees:
 *     ??1CSpatialCrossProcessServerEndpoint@@UEAA@XZ @ 0x140065C40 (--1CSpatialCrossProcessServerEndpoint@@UEAA@XZ.c)
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
