/*
 * XREFs of ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C0124A14
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0060230 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C00E9B00 (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@P.c)
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C00E9E78 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1C01249BC (-Destroy@CEventPool@@SAXQEAV1@@Z.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C02DE268 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 *     _CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy @ 0x1C02DE2CC (_CMultipleConsumerWorkQueue--WaitForCompletionAndReleaseWorkItem_--_2_--CEventPoolEntryAutoDestr.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C0124A48 (-Destroy@CManualResetEvent@@SAXQEAV1@@Z.c)
 */

void __fastcall CEventPool::CEventPoolEntry::Destroy(_QWORD *pv)
{
  void *v2; // rcx

  v2 = (void *)pv[1];
  if ( v2 )
    CManualResetEvent::Destroy(v2);
  EngFreeMem(pv);
}
