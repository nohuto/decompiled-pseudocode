/*
 * XREFs of MiGetThreadPartition @ 0x140364DF8
 * Callers:
 *     MiResolveMemoryEvent @ 0x140725E20 (MiResolveMemoryEvent.c)
 *     MmCombineIdenticalPages @ 0x140726B10 (MmCombineIdenticalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1838LL));
}
