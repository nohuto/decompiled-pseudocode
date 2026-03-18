/*
 * XREFs of MiInsertPrivateVad @ 0x14022EDE0
 * Callers:
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406C37D0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateEnclaveVad @ 0x1408D4698 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiInsertVad @ 0x14022DF50 (MiInsertVad.c)
 */

__int64 __fastcall MiInsertPrivateVad(__int64 a1, __int64 a2)
{
  if ( MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3] == 16 )
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1680) + 424LL);
  return MiInsertVad(a1, a2, 1LL);
}
