/*
 * XREFs of ViIsThreadInsidePagingCodePaths @ 0x1409DCED8
 * Callers:
 *     VfDeadlockAcquireResource @ 0x1409DA558 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DB2C8 (VfDeadlockReleaseResource.c)
 * Callees:
 *     ViLowerIrql @ 0x14059C8F8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x14059C970 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1409DC23C (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1409DC274 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x1409DCD68 (ViDeadlockSearchThread.c)
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
