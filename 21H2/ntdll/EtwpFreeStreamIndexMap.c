/*
 * XREFs of EtwpFreeStreamIndexMap @ 0x18004F828
 * Callers:
 *     EtwpInitLoggerContext @ 0x1800494AC (EtwpInitLoggerContext.c)
 *     EtwpFreeLoggerContext @ 0x18004F614 (EtwpFreeLoggerContext.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

__int64 __fastcall EtwpFreeStreamIndexMap(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 504);
  if ( v1 )
  {
    result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v1);
    *(_QWORD *)(a1 + 504) = 0LL;
  }
  return result;
}
