/*
 * XREFs of ??1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ @ 0x140065870
 * Callers:
 *     _ATL::CComAggObject_CSpatialCrossProcessClientOutputEndpoint_::CComAggObject_CSpatialCrossProcessClientOutputEndpoint__::_1_::dtor$1 @ 0x1400650D8 (_ATL--CComAggObject_CSpatialCrossProcessClientOutputEndpoint_--CComAggObject_CSpati_ea_1400650D8.c)
 *     _ATL::CComObject_CSpatialCrossProcessClientOutputEndpoint_::CComObject_CSpatialCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x140065269 (_ATL--CComObject_CSpatialCrossProcessClientOutputEndpoint_--CComObject_CSpatialCrossProcessClien.c)
 * Callees:
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x140065BBC (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 */

void __fastcall CSpatialCrossProcessClientOutputEndpoint::~CSpatialCrossProcessClientOutputEndpoint(
        struct _RTL_CRITICAL_SECTION *this)
{
  CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint((CSpatialCrossProcessClientEndpoint *)this);
  if ( LOBYTE(this[36].DebugInfo) )
  {
    LOBYTE(this[36].DebugInfo) = 0;
    DeleteCriticalSection(this + 35);
  }
}
