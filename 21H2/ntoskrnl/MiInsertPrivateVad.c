/*
 * XREFs of MiInsertPrivateVad @ 0x140321AD4
 * Callers:
 *     MiAllocateNewSubAllocatedRegion @ 0x1405FE4DC (MiAllocateNewSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x1407018B0 (MiReserveUserMemory.c)
 *     MiAllocateEnclaveVad @ 0x1408D1FB8 (MiAllocateEnclaveVad.c)
 * Callees:
 *     MiInsertVad @ 0x140321080 (MiInsertVad.c)
 */

void __fastcall MiInsertPrivateVad(__int64 a1, __int64 a2)
{
  if ( MiVadPageSizes[(*(_DWORD *)(a1 + 48) >> 18) & 3] == 16 )
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1680) + 424LL);
  MiInsertVad(a1, a2, 1LL, MiVadPageSizes);
}
