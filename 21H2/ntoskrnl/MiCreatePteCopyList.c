/*
 * XREFs of MiCreatePteCopyList @ 0x140240B38
 * Callers:
 *     MiCopyPage @ 0x140240220 (MiCopyPage.c)
 *     MiFindContiguousPages @ 0x1403016E0 (MiFindContiguousPages.c)
 *     MiAddPagesToEnclave @ 0x140549104 (MiAddPagesToEnclave.c)
 *     MiGetPteMappingPair @ 0x1405635FC (MiGetPteMappingPair.c)
 *     MmRelocatePfnList @ 0x1408D1ADC (MmRelocatePfnList.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D2188 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1408D7FE0 (MiFillPerSessionProtos.c)
 *     MiInitializeScrubPacket @ 0x1408DBE50 (MiInitializeScrubPacket.c)
 * Callees:
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiCreatePteCopyList(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // edx
  ULONG_PTR result; // rax
  int v7; // eax
  bool v8; // zf

  *(_DWORD *)a3 = 0;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_WORD *)(a3 + 8) = 17;
  if ( a1 <= a2 >> 1 )
    v5 = 2 * a1;
  else
    v5 = a2 & 0xFFFFFFFE;
  *(_DWORD *)(a3 + 4) = v5;
  do
  {
    result = MiReservePtes((__int64)&qword_140C4EF40, v5, a3, a4);
    *(_QWORD *)(a3 + 16) = result;
    if ( result )
      break;
    v7 = *(_DWORD *)(a3 + 4);
    v8 = v7 == 2;
    result = (unsigned int)(v7 - 2);
    *(_DWORD *)(a3 + 4) = result;
    v5 = result;
  }
  while ( !v8 );
  return result;
}
