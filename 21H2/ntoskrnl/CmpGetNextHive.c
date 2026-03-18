/*
 * XREFs of CmpGetNextHive @ 0x14071BA34
 * Callers:
 *     CmpDoFlushAll @ 0x14022EA80 (CmpDoFlushAll.c)
 *     CmpUnblockHiveWrites @ 0x14071A730 (CmpUnblockHiveWrites.c)
 *     CmLoadAppKey @ 0x14071A870 (CmLoadAppKey.c)
 *     CmpBlockHiveWrites @ 0x14071B99C (CmpBlockHiveWrites.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 *     CmpReferenceHive @ 0x14071BBD8 (CmpReferenceHive.c)
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
    v3 = (__int64 **)(P + 402);
  ExAcquirePushLockSharedEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  v4 = *v3;
  while ( v4 != &CmpHiveListHead )
  {
    v1 = v4 - 201;
    if ( (unsigned __int8)CmpReferenceHive(v4 - 201) )
      break;
    v4 = *v5;
    v1 = 0LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  if ( P && _InterlockedExchangeAdd(P + 1058, 0xFFFFFFFF) == 1 )
    CmpDeleteHive(P);
  return v1;
}
