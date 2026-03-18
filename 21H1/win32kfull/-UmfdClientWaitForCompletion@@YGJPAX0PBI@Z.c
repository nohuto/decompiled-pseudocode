/*
 * XREFs of ?UmfdClientWaitForCompletion@@YGJPAX0PBI@Z @ 0x875F4
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QAE_NQAVCWaitableWorkItem@1@PBIPA_N@Z @ 0x8762E (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QAE_NQAVCWaitableWorkItem@1@PBI.c)
 */

int __userpurge UmfdClientWaitForCompletion@<eax>(
        struct CMultipleConsumerWorkQueue::CWaitableWorkItem **a1@<edx>,
        CMultipleConsumerWorkQueue *a2@<ecx>,
        const unsigned int *a3,
        void *a4,
        const unsigned int *a5)
{
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem *v6; // eax
  int result; // eax
  bool v8; // [esp+7h] [ebp-1h] BYREF

  v6 = *a1;
  if ( !*a1 )
    return -1073741811;
  v8 = 0;
  if ( CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem(a2, v6, a3, &v8) )
  {
    result = 0;
LABEL_4:
    *a1 = 0;
    return result;
  }
  if ( !v8 )
  {
    result = -1073741823;
    goto LABEL_4;
  }
  return 258;
}
