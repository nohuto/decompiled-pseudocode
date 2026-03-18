/*
 * XREFs of ViIsThreadInsidePagingCodePaths @ 0x1409E2F58
 * Callers:
 *     VfDeadlockAcquireResource @ 0x1409E05D8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1409E1348 (VfDeadlockReleaseResource.c)
 * Callees:
 *     ViLowerIrql @ 0x1405A0A88 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405A0B00 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1409E22BC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1409E22F4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x1409E2DE8 (ViDeadlockSearchThread.c)
 */

_BOOL8 ViIsThreadInsidePagingCodePaths()
{
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v1; // edi
  unsigned __int8 v2; // si
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  v2 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(0);
  v3 = ViDeadlockSearchThread((unsigned __int64)CurrentThread);
  if ( v3 )
    v1 = *((_DWORD *)v3 + 11) != 0;
  ViDeadlockDetectionUnlock(0);
  ViLowerIrql(v2);
  return v1;
}
