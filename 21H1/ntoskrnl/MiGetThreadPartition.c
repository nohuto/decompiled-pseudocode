/*
 * XREFs of MiGetThreadPartition @ 0x1402E6D0C
 * Callers:
 *     MiResolveMemoryEvent @ 0x1406B4960 (MiResolveMemoryEvent.c)
 *     MmCombineIdenticalPages @ 0x140712880 (MmCombineIdenticalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1838LL));
}
