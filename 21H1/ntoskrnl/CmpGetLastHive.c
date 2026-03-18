/*
 * XREFs of CmpGetLastHive @ 0x1406E268C
 * Callers:
 *     CmpDoFlushAll @ 0x14037B05C (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     CmpReferenceHive @ 0x140695E40 (CmpReferenceHive.c)
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
  v1 = qword_140D2D920;
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
