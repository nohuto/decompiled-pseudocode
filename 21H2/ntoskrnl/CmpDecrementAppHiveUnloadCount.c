/*
 * XREFs of CmpDecrementAppHiveUnloadCount @ 0x140361500
 * Callers:
 *     CmpLateUnloadHiveWorker @ 0x14071C570 (CmpLateUnloadHiveWorker.c)
 *     CmpCompleteUnloadKey @ 0x14071CB34 (CmpCompleteUnloadKey.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x14029CE28 (ExpUnblockPushLock.c)
 */

int CmpDecrementAppHiveUnloadCount()
{
  int result; // eax
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  result = --CmpActiveAppHiveUnloadCount;
  if ( !CmpActiveAppHiveUnloadCount )
  {
    _InterlockedOr(v1, 0);
    if ( CmpActiveAppHiveUnloadEvent )
      return ExpUnblockPushLock(&CmpActiveAppHiveUnloadEvent, 0LL, 0);
  }
  return result;
}
