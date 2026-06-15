/*
 * XREFs of ??1CSpatialCrossProcessClientOutputEndpoint@@UEAA@XZ @ 0x140065730
 * Callers:
 *     _ATL::CComAggObject_CSpatialCrossProcessClientOutputEndpoint_::CComAggObject_CSpatialCrossProcessClientOutputEndpoint__::_1_::dtor$1 @ 0x140064F98 (_ATL--CComAggObject_CSpatialCrossProcessClientOutputEndpoint_--CComAggObject_CSpati_ea_140064F98.c)
 *     _ATL::CComObject_CSpatialCrossProcessClientOutputEndpoint_::CComObject_CSpatialCrossProcessClientOutputEndpoint__::_1_::dtor$0 @ 0x140065129 (_ATL--CComObject_CSpatialCrossProcessClientOutputEndpoint_--CComObject_CSpatialCrossProcessClien.c)
 * Callees:
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x140065A7C (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
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
