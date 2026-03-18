/*
 * XREFs of PopPowerAggregatorAllocateLogEntry @ 0x140763CE8
 * Callers:
 *     PopPowerAggregatorRecordIntent @ 0x1407639A0 (PopPowerAggregatorRecordIntent.c)
 *     PopPowerAggregatorSetCurrentState @ 0x140763A88 (PopPowerAggregatorSetCurrentState.c)
 *     PopPowerAggregatorInvokeStateMachine @ 0x140763BE8 (PopPowerAggregatorInvokeStateMachine.c)
 * Callees:
 *     KeQueryInterruptTimePrecise @ 0x14034C9E0 (KeQueryInterruptTimePrecise.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall PopPowerAggregatorAllocateLogEntry(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v5; // rbx
  __int64 result; // rax
  LARGE_INTEGER v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 312);
  *(_DWORD *)(a1 + 312) = ((_BYTE)v2 + 1) & 0x1F;
  v5 = 144 * v2 + a1;
  memset((void *)(144 * v2 + a1 + 324), 0, 0x8CuLL);
  *(_DWORD *)(v5 + 320) = a2;
  *(_QWORD *)(v5 + 328) = KeQueryInterruptTimePrecise(&v7);
  result = v5 + 320;
  *(_QWORD *)(v5 + 336) = *(_QWORD *)a1;
  return result;
}
