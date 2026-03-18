/*
 * XREFs of ?UmfdMsgWaitForEvent@@YG_NPAU_KEVENT@@PBI@Z @ 0x9AA7E
 * Callers:
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QAE_NQAVCWaitableWorkItem@1@PBIPA_N@Z @ 0x8762E (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QAE_NQAVCWaitableWorkItem@1@PBI.c)
 * Callees:
 *     __allmul @ 0xF91DF (__allmul.c)
 */

bool __fastcall UmfdMsgWaitForEvent(void *a1, unsigned int *a2)
{
  union _LARGE_INTEGER Timeout; // [esp+8h] [ebp-8h] BYREF

  if ( a2 )
  {
    Timeout.QuadPart = -10000LL * *a2;
    return KeWaitForSingleObject(a1, Executive, 0, 0, &Timeout) != 258;
  }
  else
  {
    KeWaitForSingleObject(a1, Executive, 0, 0, 0);
    return 1;
  }
}
