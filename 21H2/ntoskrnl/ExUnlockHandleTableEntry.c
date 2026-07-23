/*
 * XREFs of ExUnlockHandleTableEntry @ 0x1405D6CB0
 * Callers:
 *     ExDupHandleTable @ 0x140695BF0 (ExDupHandleTable.c)
 *     EtwpObjectHandleEnumCallback @ 0x14093E0C0 (EtwpObjectHandleEnumCallback.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 */

int __fastcall ExUnlockHandleTableEntry(__int64 a1, volatile signed __int64 *a2)
{
  int result; // eax
  volatile __int64 *v3; // rcx
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  result = _InterlockedExchangeAdd64(a2, 1uLL);
  v3 = (volatile __int64 *)(a1 + 48);
  _InterlockedOr(v4, 0);
  if ( *v3 )
    return ExfUnblockPushLock(v3, 0LL);
  return result;
}
