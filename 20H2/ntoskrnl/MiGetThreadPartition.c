/*
 * XREFs of MiGetThreadPartition @ 0x1403649E4
 * Callers:
 *     MiResolveMemoryEvent @ 0x1407213B0 (MiResolveMemoryEvent.c)
 *     MmCombineIdenticalPages @ 0x140722BCC (MmCombineIdenticalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1838LL));
}
