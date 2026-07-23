/*
 * XREFs of _RtlpCSparseBitmapLock@12 @ 0x4B38003A
 * Callers:
 *     _RtlLockHeapManagerForCloning@0 @ 0x4B356BD9 (_RtlLockHeapManagerForCloning@0.c)
 *     _RtlpCSparseBitmapPageCommit@16 @ 0x4B37E46E (_RtlpCSparseBitmapPageCommit@16.c)
 *     _RtlpCSparseBitmapPageDecommit@12 @ 0x4B37E559 (_RtlpCSparseBitmapPageDecommit@12.c)
 * Callees:
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 */

int __fastcall RtlpCSparseBitmapLock(_RTL_SRWLOCK *a1, int a2, int a3)
{
  int result; // eax
  _RTL_SRWLOCK *v6; // [esp-4h] [ebp-Ch]

  v6 = a1 + 3;
  if ( a2 == 1 )
    RtlAcquireSRWLockExclusive(v6);
  else
    RtlAcquireSRWLockShared(v6);
  result = a3;
  *(_DWORD *)(a3 + 8) = a1;
  *(_DWORD *)a3 = a2;
  *(_BYTE *)(a3 + 4) = -1;
  return result;
}
