/*
 * XREFs of EtwpEnqueueOverflowBuffer @ 0x14035F118
 * Callers:
 *     EtwpSwitchBuffer @ 0x14027E018 (EtwpSwitchBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x14027E1FC (EtwpDequeueFreeBuffer.c)
 * Callees:
 *     EtwpUnlockBufferList @ 0x14027E450 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x14027E49C (EtwpLockBufferList.c)
 */

char __fastcall EtwpEnqueueOverflowBuffer(__int64 a1, __int64 a2)
{
  char result; // al
  unsigned __int8 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 44), 0, 1);
  EtwpLockBufferList(a1, &v5);
  *(_QWORD *)(a2 + 32) = 0LL;
  **(_QWORD **)(a1 + 80) = a2 + 32;
  *(_QWORD *)(a1 + 80) = a2 + 32;
  result = EtwpUnlockBufferList(a1, &v5);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 244));
  return result;
}
