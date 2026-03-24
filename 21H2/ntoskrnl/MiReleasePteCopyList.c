/*
 * XREFs of MiReleasePteCopyList @ 0x1402CAA24
 * Callers:
 *     MiFindContiguousPages @ 0x1403016E0 (MiFindContiguousPages.c)
 *     MiAddPagesToEnclave @ 0x140549104 (MiAddPagesToEnclave.c)
 *     MmRelocatePfnList @ 0x1408D1ADC (MmRelocatePfnList.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D2188 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x1408D7FE0 (MiFillPerSessionProtos.c)
 *     MiReleaseScrubPacket @ 0x1408DBF50 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 */

unsigned __int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  unsigned int v1; // r8d
  unsigned __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
    return MiReleasePtes((__int64)&qword_140C4EF40, *(_QWORD **)(a1 + 16), v1);
  return result;
}
