/*
 * XREFs of _RtlpTpResumeImpersonation@4 @ 0x4B2B221A
 * Callers:
 *     _RtlDeregisterWaitEx@8 @ 0x4B2A8010 (_RtlDeregisterWaitEx@8.c)
 *     _RtlDeleteTimerQueueEx@8 @ 0x4B2A8AC0 (_RtlDeleteTimerQueueEx@8.c)
 *     _RtlDeleteTimer@12 @ 0x4B2A8C40 (_RtlDeleteTimer@12.c)
 *     _RtlCreateTimerQueue@4 @ 0x4B2A8F60 (_RtlCreateTimerQueue@4.c)
 *     _RtlCreateTimer@28 @ 0x4B2AA4F0 (_RtlCreateTimer@28.c)
 *     _RtlRegisterWait@24 @ 0x4B2B2020 (_RtlRegisterWait@24.c)
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 *     _RtlUpdateTimer@16 @ 0x4B385200 (_RtlUpdateTimer@16.c)
 *     _RtlSetIoCompletionCallback@12 @ 0x4B385470 (_RtlSetIoCompletionCallback@12.c)
 * Callees:
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 */

NTSTATUS __thiscall RtlpTpResumeImpersonation(void *this)
{
  NTSTATUS result; // eax
  HANDLE ThreadInformation; // [esp+0h] [ebp-4h] BYREF

  ThreadInformation = this;
  if ( this )
  {
    ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadImpersonationToken, &ThreadInformation, 4u);
    return NtClose(ThreadInformation);
  }
  return result;
}
