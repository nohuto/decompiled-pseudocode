/*
 * XREFs of MiInsertPrivateVad @ 0x140316D84
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x14069F198 (MiAllocateNewSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x1406EA4D0 (MiReserveUserMemory.c)
 *     MiAllocateEnclaveVad @ 0x1408D1E58 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiInsertVad @ 0x140316330 (MiInsertVad.c)
 */

void __fastcall MiInsertPrivateVad(__int64 a1, __int64 a2)
{
  if ( MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3] == 16 )
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1680) + 424LL);
  MiInsertVad(a1, a2, 1LL, MiVadPageSizes);
}
