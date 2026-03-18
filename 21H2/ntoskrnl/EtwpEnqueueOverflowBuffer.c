/*
 * XREFs of EtwpEnqueueOverflowBuffer @ 0x140259D60
 * Callers:
 *     EtwpSwitchBuffer @ 0x1402E1704 (EtwpSwitchBuffer.c)
 *     EtwpDequeueFreeBuffer @ 0x1402E18F8 (EtwpDequeueFreeBuffer.c)
 * Callees:
 *     EtwpUnlockBufferList @ 0x1402E1B84 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1402E1BD0 (EtwpLockBufferList.c)
 */

__int64 __fastcall EtwpEnqueueOverflowBuffer(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 44), 0, 1);
  EtwpLockBufferList(a1, &v5);
  *(_QWORD *)(a2 + 32) = 0LL;
  **(_QWORD **)(a1 + 64) = a2 + 32;
  *(_QWORD *)(a1 + 64) = a2 + 32;
  result = EtwpUnlockBufferList(a1, &v5);
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 228));
  return result;
}
