/*
 * XREFs of ExDestroyHandle @ 0x1407A2B78
 * Callers:
 *     PspJobDelete @ 0x140207100 (PspJobDelete.c)
 *     RtlpFreeHandleForAtom @ 0x1406AB574 (RtlpFreeHandleForAtom.c)
 *     AlpcpFreeMessageFunction @ 0x1406BB760 (AlpcpFreeMessageFunction.c)
 *     RtlpInsertStringAtom @ 0x1406C5878 (RtlpInsertStringAtom.c)
 *     ObCloseHandleTableEntry @ 0x1407A2E10 (ObCloseHandleTableEntry.c)
 *     PspThreadDelete @ 0x1407A41E0 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x1402F3584 (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x1407A2BDC (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x1409F92FC (ExpUpdateDebugInfo.c)
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
