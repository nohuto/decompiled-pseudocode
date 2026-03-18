/*
 * XREFs of ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C0123724
 * Callers:
 *     ?CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z @ 0x1C00E0410 (-CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QEAAQEAVCWaitableWorkItem@1@PEAEI@Z.c)
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C00E0568 (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@P.c)
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C010E08C (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ?Destroy@CEventPool@@SAXQEAV1@@Z @ 0x1C01236CC (-Destroy@CEventPool@@SAXQEAV1@@Z.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C02DF6A8 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 * Callees:
 *     ?Destroy@CManualResetEvent@@SAXQEAV1@@Z @ 0x1C0123758 (-Destroy@CManualResetEvent@@SAXQEAV1@@Z.c)
 */

void __fastcall CEventPool::CEventPoolEntry::Destroy(_QWORD *pv)
{
  void *v2; // rcx

  v2 = (void *)pv[1];
  if ( v2 )
    CManualResetEvent::Destroy(v2);
  EngFreeMem(pv);
}
