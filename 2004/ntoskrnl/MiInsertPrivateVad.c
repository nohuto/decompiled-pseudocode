/*
 * XREFs of MiInsertPrivateVad @ 0x14024AC04
 * Callers:
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x1406EFD48 (MiAllocateNewSubAllocatedRegion.c)
 *     MiAllocateEnclaveVad @ 0x1408CE858 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiInsertVad @ 0x1402499D0 (MiInsertVad.c)
 */

void __fastcall MiInsertPrivateVad(__int64 a1, __int64 a2)
{
  if ( MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3] == 16 )
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1680) + 424LL);
  MiInsertVad(a1, a2, 1LL, MiVadPageSizes);
}
