/*
 * XREFs of MiReleasePteCopyList @ 0x140250BDC
 * Callers:
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiAddPagesToEnclave @ 0x1405A7D28 (MiAddPagesToEnclave.c)
 *     MmRelocatePfnList @ 0x140978C9C (MmRelocatePfnList.c)
 *     MiCopyPagesIntoEnclave @ 0x140979274 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x140983680 (MiFillPerSessionProtos.c)
 *     MiReleaseScrubPacket @ 0x140983AC0 (MiReleaseScrubPacket.c)
 * Callees:
 *     MiReleasePtes @ 0x1402BB6D0 (MiReleasePtes.c)
 */

__int64 __fastcall MiReleasePteCopyList(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = *(unsigned int *)(a1 + 4);
  if ( (_DWORD)v1 )
    return MiReleasePtes(&qword_140C534C0, *(_QWORD *)(a1 + 16), v1);
  return result;
}
