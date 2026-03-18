/*
 * XREFs of CmpGetNextHive @ 0x140700CD8
 * Callers:
 *     CmpDoFlushAll @ 0x14037DB0C (CmpDoFlushAll.c)
 *     CmpUnblockHiveWrites @ 0x1406FFA18 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x1406FFD24 (CmpBlockHiveWrites.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     CmpReferenceHive @ 0x140670AB8 (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x1406A3308 (CmpDeleteHive.c)
 */

__int64 *__fastcall CmpGetNextHive(volatile signed __int32 *P)
{
  __int64 *v1; // rdi
  __int64 **v3; // rsi
  __int64 *v4; // r8
  __int64 **v5; // r8

  v1 = 0LL;
  v3 = (__int64 **)&CmpHiveListHead;
  if ( P )
    v3 = (__int64 **)(P + 400);
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  v4 = *v3;
  while ( v4 != &CmpHiveListHead )
  {
    v1 = v4 - 200;
    if ( CmpReferenceHive((__int64)(v4 - 200)) )
      break;
    v4 = *v5;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  if ( P && _InterlockedExchangeAdd(P + 1068, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
  return v1;
}
