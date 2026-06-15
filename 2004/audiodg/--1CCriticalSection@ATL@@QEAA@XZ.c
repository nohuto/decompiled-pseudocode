/*
 * XREFs of ??1CCriticalSection@ATL@@QEAA@XZ @ 0x140052FD8
 * Callers:
 *     _CCrossProcessBaseEndpoint::CCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x140022C7F (_CCrossProcessBaseEndpoint--CCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$0 @ 0x14005C871 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$0.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$3 @ 0x14005C8A4 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall ATL::CCriticalSection::~CCriticalSection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
