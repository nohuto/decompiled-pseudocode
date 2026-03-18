/*
 * XREFs of MiCreatePteCopyList @ 0x1402244A8
 * Callers:
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiFindContiguousPages @ 0x14027EAE0 (MiFindContiguousPages.c)
 *     MiAddPagesToEnclave @ 0x1405435E4 (MiAddPagesToEnclave.c)
 *     MiGetPteMappingPair @ 0x14055DB0C (MiGetPteMappingPair.c)
 *     MmRelocatePfnList @ 0x1408CD18C (MmRelocatePfnList.c)
 *     MiCopyPagesIntoEnclave @ 0x1408CD838 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1408D3690 (MiFillPerSessionProtos.c)
 *     MiInitializeScrubPacket @ 0x1408D7500 (MiInitializeScrubPacket.c)
 * Callees:
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 */

__int64 __fastcall MiCreatePteCopyList(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  int v6; // eax
  bool v7; // zf

  *(_DWORD *)a3 = 0;
  *(_QWORD *)(a3 + 16) = 0LL;
  *(_WORD *)(a3 + 8) = 17;
  if ( a1 <= a2 >> 1 )
    v4 = (unsigned int)(2 * a1);
  else
    v4 = (unsigned int)a2 & 0xFFFFFFFE;
  *(_DWORD *)(a3 + 4) = v4;
  do
  {
    result = MiReservePtes(&qword_140C4EE80, v4);
    *(_QWORD *)(a3 + 16) = result;
    if ( result )
      break;
    v6 = *(_DWORD *)(a3 + 4);
    v7 = v6 == 2;
    result = (unsigned int)(v6 - 2);
    *(_DWORD *)(a3 + 4) = result;
    v4 = (unsigned int)result;
  }
  while ( !v7 );
  return result;
}
