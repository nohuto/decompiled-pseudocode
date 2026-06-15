/*
 * XREFs of ??1?$CAutoPtr@USampleDataBlock@CMonitor@@@ATL@@QEAA@XZ @ 0x180100D10
 * Callers:
 *     _CMonitor::ProcessCaptureBufferReadyEvent_::_1_::dtor$0 @ 0x180103B5F (_CMonitor--ProcessCaptureBufferReadyEvent_--_1_--dtor$0.c)
 *     _CMonitor::ProcessRenderBufferReadyEvent_::_1_::dtor$1 @ 0x18010417D (_CMonitor--ProcessRenderBufferReadyEvent_--_1_--dtor$1.c)
 *     _CMonitor::Start_::_1_::dtor$6 @ 0x180104D21 (_CMonitor--Start_--_1_--dtor$6.c)
 *     _CMonitor::Start_::_1_::dtor$7 @ 0x180104D6D (_CMonitor--Start_--_1_--dtor$7.c)
 *     _CMonitor::Stop_::_1_::dtor$2 @ 0x180104F63 (_CMonitor--Stop_--_1_--dtor$2.c)
 *     _CMonitor::Stop_::_1_::dtor$3 @ 0x180104F6F (_CMonitor--Stop_--_1_--dtor$3.c)
 * Callees:
 *     ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x180100FEC (--_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z.c)
 */

void *__fastcall ATL::CAutoPtr<CMonitor::SampleDataBlock>::~CAutoPtr<CMonitor::SampleDataBlock>(
        CMonitor::SampleDataBlock **a1,
        unsigned int a2)
{
  CMonitor::SampleDataBlock *v3; // rcx
  void *result; // rax

  v3 = *a1;
  if ( v3 )
    result = CMonitor::SampleDataBlock::`scalar deleting destructor'(v3, a2);
  *a1 = 0LL;
  return result;
}
