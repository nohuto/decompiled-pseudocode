/*
 * XREFs of _CMonitor::ProcessCaptureBufferReadyEvent_::_1_::dtor$0 @ 0x180103B5F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CMonitor::ProcessCaptureBufferReadyEvent_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CMonitor::SampleDataBlock>::~CAutoPtr<CMonitor::SampleDataBlock>(
           (CMonitor::SampleDataBlock **)(a2 + 80),
           a2);
}
