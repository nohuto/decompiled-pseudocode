/*
 * XREFs of @RtlpInterlockedFlushSList@4 @ 0x4B33E8E6
 * Callers:
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     _RtlpLowFragHeapFlushCaches@4 @ 0x4B37172A (_RtlpLowFragHeapFlushCaches@4.c)
 *     _RtlpHpHeapCompact@8 @ 0x4B378991 (_RtlpHpHeapCompact@8.c)
 *     _RtlpHpVsContextFree@20 @ 0x4B37F419 (_RtlpHpVsContextFree@20.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

int __fastcall RtlpInterlockedFlushSList(unsigned int a1)
{
  _RTL_SRWLOCK *v2; // edi
  int v3; // esi

  v2 = &RtlpSlistLockedAltLocks + ((a1 >> 2) & 0x1F);
  RtlAcquireSRWLockExclusive(v2);
  v3 = *(_DWORD *)a1;
  *(_DWORD *)a1 = 0;
  *(_WORD *)(a1 + 4) = 0;
  RtlReleaseSRWLockExclusive(v2);
  return v3;
}
