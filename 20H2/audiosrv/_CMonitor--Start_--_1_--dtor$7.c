/*
 * XREFs of _CMonitor::Start_::_1_::dtor$7 @ 0x1801040DD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CMonitor::Start_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CMonitor::SampleDataBlock>::~CAutoPtr<CMonitor::SampleDataBlock>(
           (CMonitor::SampleDataBlock **)(a2 + 224),
           a2);
}
