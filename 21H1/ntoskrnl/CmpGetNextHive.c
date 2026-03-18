/*
 * XREFs of CmpGetNextHive @ 0x140695840
 * Callers:
 *     CmpDoFlushAll @ 0x14037B05C (CmpDoFlushAll.c)
 *     CmpUnblockHiveWrites @ 0x1406919AC (CmpUnblockHiveWrites.c)
 *     CmpBlockHiveWrites @ 0x140693BB8 (CmpBlockHiveWrites.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     CmpDeleteHive @ 0x14065B4F8 (CmpDeleteHive.c)
 *     CmpReferenceHive @ 0x140695E40 (CmpReferenceHive.c)
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
    CmpDeleteHive(P);
  return v1;
}
