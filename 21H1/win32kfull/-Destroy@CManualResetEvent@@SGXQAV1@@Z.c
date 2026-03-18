/*
 * XREFs of ?Destroy@CManualResetEvent@@SGXQAV1@@Z @ 0xD3388
 * Callers:
 *     ?CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QAEQAVCWaitableWorkItem@1@PAEI@Z @ 0x8753E (-CreateAndQueueWorkItem@CMultipleConsumerWorkQueue@@QAEQAVCWaitableWorkItem@1@PAEI@Z.c)
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QAE_NQAVCWaitableWorkItem@1@PBIPA_N@Z @ 0x8762E (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QAE_NQAVCWaitableWorkItem@1@PBI.c)
 *     ?Destroy@CEventPool@@SGXQAV1@@Z @ 0xD3314 (-Destroy@CEventPool@@SGXQAV1@@Z.c)
 *     ?Destroy@CWorkItemQueue@@SGXQAV1@@Z @ 0xD3358 (-Destroy@CWorkItemQueue@@SGXQAV1@@Z.c)
 *     ?Create@CEventPoolEntry@CEventPool@@SGQAV12@XZ @ 0xE5E08 (-Create@CEventPoolEntry@CEventPool@@SGQAV12@XZ.c)
 *     ?Create@CManualResetEvent@@SGQAV1@XZ @ 0xE5F4C (-Create@CManualResetEvent@@SGQAV1@XZ.c)
 * Callees:
 *     <none>
 */

void __thiscall CManualResetEvent::Destroy(PVOID *this)
{
  if ( *this )
    EngFreeMem(*this);
  EngFreeMem(this);
}
