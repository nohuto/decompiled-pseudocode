/*
 * XREFs of @InterlockedPushListSList@16 @ 0x4B33E8A0
 * Callers:
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 *     _RtlInterlockedPushListSListEx@16 @ 0x4B366790 (_RtlInterlockedPushListSListEx@16.c)
 *     _RtlpLocalInfoAllocFromCache@8 @ 0x4B37109C (_RtlpLocalInfoAllocFromCache@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 */

int __fastcall InterlockedPushListSList(unsigned int a1, int a2, _DWORD *a3, __int16 a4)
{
  _RTL_SRWLOCK *v5; // edi
  int v6; // esi

  v5 = &RtlpSlistLockedAltLocks + ((a1 >> 2) & 0x1F);
  RtlAcquireSRWLockExclusive(v5);
  v6 = *(_DWORD *)a1;
  *a3 = *(_DWORD *)a1;
  *(_WORD *)(a1 + 4) += a4;
  *(_DWORD *)a1 = a2;
  RtlReleaseSRWLockExclusive(v5);
  return v6;
}
