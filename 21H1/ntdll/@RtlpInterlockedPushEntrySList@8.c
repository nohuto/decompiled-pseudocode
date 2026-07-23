/*
 * XREFs of @RtlpInterlockedPushEntrySList@8 @ 0x4B2C2090
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 *     _RtlStdReleaseStackTrace@8 @ 0x4B369090 (_RtlStdReleaseStackTrace@8.c)
 *     _RtlpRegisterStackTrace@12 @ 0x4B36F97B (_RtlpRegisterStackTrace@12.c)
 *     _RtlpLocalInfoAllocFromCache@8 @ 0x4B37109C (_RtlpLocalInfoAllocFromCache@8.c)
 *     _RtlpLowFragHeapFlushCaches@4 @ 0x4B37172A (_RtlpLowFragHeapFlushCaches@4.c)
 *     _RtlpHpVsContextFree@20 @ 0x4B37F419 (_RtlpHpVsContextFree@20.c)
 *     _RtlFreeMemoryBlockLookaside@8 @ 0x4B3A2190 (_RtlFreeMemoryBlockLookaside@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

int __fastcall RtlpInterlockedPushEntrySList(unsigned int a1, _DWORD *a2)
{
  _RTL_SRWLOCK *v3; // edi
  int v4; // esi

  v3 = &RtlpSlistLockedAltLocks + ((a1 >> 2) & 0x1F);
  RtlAcquireSRWLockExclusive(v3);
  v4 = *(_DWORD *)a1;
  *a2 = *(_DWORD *)a1;
  ++*(_WORD *)(a1 + 4);
  *(_DWORD *)a1 = a2;
  RtlReleaseSRWLockExclusive(v3);
  return v4;
}
