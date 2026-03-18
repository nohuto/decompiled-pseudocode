/*
 * XREFs of CmpDecrementAppHiveUnloadCount @ 0x140272734
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x1406434F0 (CmpLateUnloadHiveWorker.c)
 *     CmpCompleteUnloadKey @ 0x14064364C (CmpCompleteUnloadKey.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x140325748 (ExpUnblockPushLock.c)
 */

__int64 CmpDecrementAppHiveUnloadCount()
{
  __int64 result; // rax
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  result = (unsigned int)--CmpActiveAppHiveUnloadCount;
  if ( !CmpActiveAppHiveUnloadCount )
  {
    _InterlockedOr(v1, 0);
    if ( CmpActiveAppHiveUnloadEvent )
      return ExpUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL, 0LL);
  }
  return result;
}
