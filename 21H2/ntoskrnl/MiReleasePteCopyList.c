/*
 * XREFs of MiReleasePteCopyList @ 0x140249314
 * Callers:
 *     MiFindContiguousPages @ 0x14030C430 (MiFindContiguousPages.c)
 *     MiAddPagesToEnclave @ 0x140549344 (MiAddPagesToEnclave.c)
 *     MmRelocatePfnList @ 0x1408D1C3C (MmRelocatePfnList.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D22E8 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1408D8140 (MiFillPerSessionProtos.c)
 *     MiReleaseScrubPacket @ 0x1408DC0B0 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)v1 )
    return MiReleasePtes(&qword_140C4EF80, *(_QWORD *)(a1 + 16), v1);
  return result;
}
