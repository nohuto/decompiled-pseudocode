/*
 * XREFs of MiPreparePlaceholderVadReplacement @ 0x14097F038
 * Callers:
 *     MiMapViewOfDataSection @ 0x1406FB4D0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 * Callees:
 *     MiRemoveVad @ 0x14030DA80 (MiRemoveVad.c)
 *     MiReferenceVad @ 0x14030EB64 (MiReferenceVad.c)
 *     PerfInfoLogVirtualFree @ 0x1409E4084 (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MiPreparePlaceholderVadReplacement(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v6; // rax

  _InterlockedIncrement((volatile signed __int32 *)(a3 + 232));
  MiReferenceVad(a1);
  MiRemoveVad(a1, 0, 0LL);
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
             a2,
             0x8000LL);
  }
  return result;
}
