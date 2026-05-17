/*
 * XREFs of LdrpQueueDeferredTlsData @ 0x180048A34
 * Callers:
 *     LdrpHandleTlsData @ 0x180047C14 (LdrpHandleTlsData.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall LdrpQueueDeferredTlsData(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  volatile signed __int64 v4; // rdi
  volatile signed __int64 *v5; // rsi

  v4 = a1 - 16;
  *(_QWORD *)(a1 - 16) = a2;
  v5 = (volatile signed __int64 *)((char *)&LdrpDelayedTlsReclaimTable + 16 * ((a2 >> 2) & 0xF));
  RtlAcquireSRWLockExclusive((unsigned __int64)(v5 + 1), a2, a3, a4);
  *(_QWORD *)(v4 + 8) = *v5;
  *v5 = v4;
  return RtlReleaseSRWLockExclusive(v5 + 1);
}
