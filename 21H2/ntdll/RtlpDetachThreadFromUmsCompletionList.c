/*
 * XREFs of RtlpDetachThreadFromUmsCompletionList @ 0x1800F7828
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800F7280 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009D7E0 (NtSetInformationThread.c)
 *     RtlDeleteUmsThreadContext @ 0x1800F7190 (RtlDeleteUmsThreadContext.c)
 */

__int64 RtlpDetachThreadFromUmsCompletionList()
{
  struct _TEB *v0; // rbx
  __int64 result; // rax
  __int64 v2; // rcx

  v0 = NtCurrentTeb();
  result = NtSetInformationThread();
  if ( (int)result >= 0 )
  {
    v2 = (__int64)v0->TlsSlots[4];
    v0->TlsSlots[4] = 0LL;
    return RtlDeleteUmsThreadContext(v2);
  }
  return result;
}
