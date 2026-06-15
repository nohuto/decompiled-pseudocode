/*
 * XREFs of _CMonitor::ProcessRenderBufferReadyEvent_::_1_::dtor$1 @ 0x18010417D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CMonitor::ProcessRenderBufferReadyEvent_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CMonitor::SampleDataBlock>::~CAutoPtr<CMonitor::SampleDataBlock>(
           (CMonitor::SampleDataBlock **)(a2 + 256),
           a2);
}
