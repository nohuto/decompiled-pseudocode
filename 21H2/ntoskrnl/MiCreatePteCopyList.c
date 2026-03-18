/*
 * XREFs of MiCreatePteCopyList @ 0x14024B428
 * Callers:
 *     MiFindContiguousPagesEx @ 0x140277D10 (MiFindContiguousPagesEx.c)
 *     MiGetPteMappingSet @ 0x1402E8000 (MiGetPteMappingSet.c)
 *     MiAddPagesToEnclave @ 0x1405A7D28 (MiAddPagesToEnclave.c)
 *     MmRelocatePfnList @ 0x140978C9C (MmRelocatePfnList.c)
 *     MiCopyPagesIntoEnclave @ 0x140979274 (MiCopyPagesIntoEnclave.c)
 *     MiFillPerSessionProtos @ 0x140983680 (MiFillPerSessionProtos.c)
 *     MiInitializeScrubPacket @ 0x1409839C0 (MiInitializeScrubPacket.c)
 * Callees:
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 */

__int64 __fastcall MiCreatePteCopyList(unsigned __int64 a1, int a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rdx

  *(_DWORD *)a3 = 0;
  *(_QWORD *)(a3 + 16) = 0LL;
  v5 = (unsigned int)(2 * a2);
  *(_WORD *)(a3 + 8) = 17;
  *(_DWORD *)(a3 + 4) = v5;
  do
  {
    result = MiReservePtes(&qword_140C534C0, v5);
    *(_QWORD *)(a3 + 16) = result;
    if ( result )
      break;
    v7 = *(unsigned int *)(a3 + 4);
    if ( v7 <= a1 )
    {
      *(_DWORD *)(a3 + 4) = 0;
      return result;
    }
    v5 = (unsigned int)(v7 - a1);
    *(_DWORD *)(a3 + 4) = v5;
  }
  while ( (_DWORD)v5 );
  return result;
}
