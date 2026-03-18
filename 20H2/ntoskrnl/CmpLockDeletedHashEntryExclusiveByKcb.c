/*
 * XREFs of CmpLockDeletedHashEntryExclusiveByKcb @ 0x140701BD8
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x140672204 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDiscardKcb @ 0x140701A1C (CmpDiscardKcb.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     CmpReferenceHive @ 0x140670AB8 (CmpReferenceHive.c)
 */

char __fastcall CmpLockDeletedHashEntryExclusiveByKcb(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rdi
  unsigned __int64 v3; // r8
  ULONG_PTR v4; // rbx
  char result; // al

  v2 = *(_QWORD *)(BugCheckParameter4 + 32);
  v3 = (unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 16) ^ (*(_DWORD *)(BugCheckParameter4 + 16) >> 9)));
  v4 = *(_QWORD *)(v2 + 1656) + 24 * ((unsigned int)(*(_DWORD *)(v2 + 1664) - 1) & (v3 ^ (v3 >> 9)));
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  result = CmpReferenceHive(v2);
  if ( !result )
    KeBugCheckEx(0x51u, 0x17uLL, v2, 8uLL, BugCheckParameter4);
  return result;
}
