/*
 * XREFs of ExDestroyHandle @ 0x1405F1A78
 * Callers:
 *     PspJobDelete @ 0x1402D96F0 (PspJobDelete.c)
 *     RtlpFreeHandleForAtom @ 0x1405D5D8C (RtlpFreeHandleForAtom.c)
 *     AlpcpFreeMessageFunction @ 0x1405EF8F0 (AlpcpFreeMessageFunction.c)
 *     PspThreadDelete @ 0x1405F1620 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     RtlpInsertStringAtom @ 0x1406D883C (RtlpInsertStringAtom.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x14023F444 (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x1405F1ADC (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x1409484D4 (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDestroyHandle(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebx

  if ( *(_QWORD *)(a1 + 96) )
    ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a2, 2LL);
  v6 = ExSweepSingleHandle(a1, a3);
  ExpFreeHandleTableEntry(a1, a2, a3);
  return v6;
}
