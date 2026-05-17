/*
 * XREFs of RtlpCSparseBitmapLock @ 0x180006534
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x180004F78 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpCSparseBitmapPageCommit @ 0x180006458 (RtlpCSparseBitmapPageCommit.c)
 *     RtlLockHeapManagerForCloning @ 0x1800F24F4 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall RtlpCSparseBitmapLock(__int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 result; // rax

  v5 = a1 + 24;
  if ( a2 == 1 )
    result = RtlAcquireSRWLockExclusive(v5);
  else
    result = RtlAcquireSRWLockShared(v5);
  *(_QWORD *)(a3 + 8) = a1;
  *(_BYTE *)(a3 + 4) = -1;
  *(_DWORD *)a3 = a2;
  return result;
}
