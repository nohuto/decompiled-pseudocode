/*
 * XREFs of MiHotRemovePartitionPageRun @ 0x1408DDD8C
 * Callers:
 *     MiActOnPartitionNodePages @ 0x14055EDD0 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiRemovePhysicalMemory @ 0x1408C87CC (MiRemovePhysicalMemory.c)
 */

__int64 __fastcall MiHotRemovePartitionPageRun(__int64 a1, ULONG_PTR a2)
{
  __int64 result; // rax

  result = MiRemovePhysicalMemory(a1, a2, 0x10u);
  if ( (int)result >= 0 )
    _InterlockedExchangeAdd64(&qword_140C4EE38, -(__int64)a2);
  return result;
}
