/*
 * XREFs of MiGetThreadPartition @ 0x140364C48
 * Callers:
 *     MiResolveMemoryEvent @ 0x140725C50 (MiResolveMemoryEvent.c)
 *     MmCombineIdenticalPages @ 0x14072665C (MmCombineIdenticalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1838LL));
}
