/*
 * XREFs of MiInsertPrivateVad @ 0x1402A3C34
 * Callers:
 *     MiReserveUserMemory @ 0x1406343A0 (MiReserveUserMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406CEA44 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateEnclaveVad @ 0x1408CD508 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiInsertVad @ 0x1402A2A00 (MiInsertVad.c)
 */

void __fastcall MiInsertPrivateVad(__int64 a1, __int64 a2)
{
  if ( MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3] == 16 )
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1680) + 424LL);
  MiInsertVad(a1, a2, 1LL, MiVadPageSizes);
}
