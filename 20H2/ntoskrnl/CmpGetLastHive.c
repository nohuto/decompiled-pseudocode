/*
 * XREFs of CmpGetLastHive @ 0x1406D8514
 * Callers:
 *     CmpDoFlushAll @ 0x14037DB0C (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     CmpReferenceHive @ 0x140670AB8 (CmpReferenceHive.c)
 */

__int64 CmpGetLastHive()
{
  __int64 v0; // rbx
  __int64 v1; // r8
  __int64 *v2; // r9
  __int64 v3; // rcx
  __int64 v4; // r8

  v0 = 0LL;
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  v1 = qword_140D2E918;
  v2 = &CmpHiveListHead;
  while ( (__int64 *)v1 != v2 )
  {
    if ( CmpReferenceHive(v1 - 1600) )
    {
      v0 = v3;
      break;
    }
    v1 = *(_QWORD *)(v4 + 8);
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  return v0;
}
