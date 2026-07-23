/*
 * XREFs of CmpGetLastHive @ 0x140664774
 * Callers:
 *     CmpDoFlushAll @ 0x14037D9EC (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     CmpReferenceHive @ 0x1406DBA08 (CmpReferenceHive.c)
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
    if ( (unsigned __int8)CmpReferenceHive(v1 - 1600) )
    {
      v0 = v3;
      break;
    }
    v1 = *(_QWORD *)(v4 + 8);
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  return v0;
}
