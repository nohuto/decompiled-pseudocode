/*
 * XREFs of CmpGetNextHive @ 0x1405DF1A0
 * Callers:
 *     CmpDoFlushAll @ 0x14037BDDC (CmpDoFlushAll.c)
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     CmpUnblockHiveWrites @ 0x14063F860 (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x14063FB6C (CmpBlockHiveWrites.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     CmpReferenceHive @ 0x1405DF7A0 (CmpReferenceHive.c)
 *     CmpDeleteHive @ 0x140644B4C (CmpDeleteHive.c)
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
    if ( (unsigned __int8)CmpReferenceHive(v4 - 200) )
      break;
    v4 = *v5;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  if ( P && _InterlockedExchangeAdd(P + 1068, 0xFFFFFFFF) == 1 )
    CmpDeleteHive((PVOID)P);
  return v1;
}
