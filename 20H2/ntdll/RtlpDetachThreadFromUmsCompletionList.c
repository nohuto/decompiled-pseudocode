/*
 * XREFs of RtlpDetachThreadFromUmsCompletionList @ 0x1800F7998
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800F73F0 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009D250 (NtSetInformationThread.c)
 *     RtlDeleteUmsThreadContext @ 0x1800F7300 (RtlDeleteUmsThreadContext.c)
 */

NTSTATUS RtlpDetachThreadFromUmsCompletionList()
{
  struct _TEB *v0; // rbx
  NTSTATUS result; // eax
  void *v2; // rcx
  __int128 ThreadInformation; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+30h] [rbp-18h]

  v0 = NtCurrentTeb();
  ThreadInformation = 0LL;
  v4 = 0LL;
  LODWORD(ThreadInformation) = 2;
  result = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadUmsInformation, &ThreadInformation, 0x18u);
  if ( result >= 0 )
  {
    v2 = v0->TlsSlots[4];
    v0->TlsSlots[4] = 0LL;
    return RtlDeleteUmsThreadContext(v2);
  }
  return result;
}
