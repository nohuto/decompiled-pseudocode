/*
 * XREFs of EtwpFreeStreamIndexMap @ 0x180058528
 * Callers:
 *     EtwpInitLoggerContext @ 0x180056DBC (EtwpInitLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x180058314 (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

LOGICAL __fastcall EtwpFreeStreamIndexMap(__int64 a1)
{
  void *v1; // r8
  LOGICAL result; // eax

  v1 = *(void **)(a1 + 504);
  if ( v1 )
  {
    result = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    *(_QWORD *)(a1 + 504) = 0LL;
  }
  return result;
}
