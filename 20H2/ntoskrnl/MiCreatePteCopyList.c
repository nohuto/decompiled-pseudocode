/*
 * XREFs of MiCreatePteCopyList @ 0x1402910E8
 * Callers:
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MiAddPagesToEnclave @ 0x140547604 (MiAddPagesToEnclave.c)
 *     MiGetPteMappingPair @ 0x140561B2C (MiGetPteMappingPair.c)
 *     MmRelocatePfnList @ 0x1408D431C (MmRelocatePfnList.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D49C8 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1408DA820 (MiFillPerSessionProtos.c)
 *     MiInitializeScrubPacket @ 0x1408DE690 (MiInitializeScrubPacket.c)
 * Callees:
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 */

ULONG_PTR __fastcall MiCreatePteCopyList(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  ULONG_PTR result; // rax
  int v6; // eax
  bool v7; // zf

  *(_DWORD *)a3 = 0;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_WORD *)(a3 + 8) = 17;
  if ( a1 <= a2 >> 1 )
    v4 = 2 * a1;
  else
    v4 = a2 & 0xFFFFFFFE;
  *(_DWORD *)(a3 + 4) = v4;
  do
  {
    result = MiReservePtes((__int64)&qword_140C4EDC0, v4);
    *(_QWORD *)(a3 + 16) = result;
    if ( result )
      break;
    v6 = *(_DWORD *)(a3 + 4);
    v7 = v6 == 2;
    result = (unsigned int)(v6 - 2);
    *(_DWORD *)(a3 + 4) = result;
    v4 = result;
  }
  while ( !v7 );
  return result;
}
