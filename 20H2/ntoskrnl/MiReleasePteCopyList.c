/*
 * XREFs of MiReleasePteCopyList @ 0x1403292F4
 * Callers:
 *     MiFindContiguousPages @ 0x14034B980 (MiFindContiguousPages.c)
 *     MiAddPagesToEnclave @ 0x140547604 (MiAddPagesToEnclave.c)
 *     MmRelocatePfnList @ 0x1408D431C (MmRelocatePfnList.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D49C8 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1408DA820 (MiFillPerSessionProtos.c)
 *     MiReleaseScrubPacket @ 0x1408DE790 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 */

char __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  char result; // al

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&qword_140C4EDC0, *(_QWORD **)(a1 + 16), v1);
  return result;
}
