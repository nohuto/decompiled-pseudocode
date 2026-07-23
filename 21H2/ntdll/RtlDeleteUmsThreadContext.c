/*
 * XREFs of RtlDeleteUmsThreadContext @ 0x1800F7150
 * Callers:
 *     RtlpAttachThreadToUmsCompletionList @ 0x1800F7720 (RtlpAttachThreadToUmsCompletionList.c)
 *     RtlpDetachThreadFromUmsCompletionList @ 0x1800F77E8 (RtlpDetachThreadFromUmsCompletionList.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlDeleteUmsThreadContext(PVOID BaseAddress)
{
  unsigned int v2; // [rsp+38h] [rbp+10h]

  v2 = -1073741811;
  if ( BaseAddress && (*((_DWORD *)BaseAddress + 316) & 8) != 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return 0;
  }
  return v2;
}
