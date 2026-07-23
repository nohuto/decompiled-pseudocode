/*
 * XREFs of ExpPartitionCreateThreadIfNecessary @ 0x14023DFDC
 * Callers:
 *     ExpTryQueueWorkItem @ 0x1402E061C (ExpTryQueueWorkItem.c)
 * Callees:
 *     ExpNewThreadNecessary @ 0x1402E70E0 (ExpNewThreadNecessary.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

LONG __fastcall ExpPartitionCreateThreadIfNecessary(__int64 a1, __int64 a2, __int64 a3)
{
  LONG result; // eax
  __int64 v4; // r9
  __int64 v5; // r10

  result = ExpNewThreadNecessary(a3, *(unsigned int *)(a3 + 720), a3, a2);
  if ( (_BYTE)result )
    return KeSetEvent(
             (PRKEVENT)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 8LL * *(unsigned __int16 *)(v4 + 146)) + 16LL),
             0,
             0);
  return result;
}
