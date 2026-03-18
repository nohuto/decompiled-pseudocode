/*
 * XREFs of MiPreparePlaceholderVadReplacement @ 0x1408D4EB0
 * Callers:
 *     MiMapViewOfDataSection @ 0x1405FD6E0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 * Callees:
 *     MiReferenceVad @ 0x14024B6B0 (MiReferenceVad.c)
 *     MiRemovePlaceholderVad @ 0x14054FEC8 (MiRemovePlaceholderVad.c)
 *     PerfInfoLogVirtualFree @ 0x140934694 (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MiPreparePlaceholderVadReplacement(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a3 + 232));
  MiReferenceVad(a1);
  MiRemovePlaceholderVad(a1);
  result = *(unsigned int *)(a1 + 28);
  *(_QWORD *)(a2 + 1176) += (((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32))
                            - (result | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32))) << 12)
                          - 4096;
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x8000) != 0 )
  {
    v6 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
    return PerfInfoLogVirtualFree(
             v6 << 12,
             ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) - v6 + 1) << 12,
             a2);
  }
  return result;
}
