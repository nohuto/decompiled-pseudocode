/*
 * XREFs of ExDestroyHandle @ 0x140619D78
 * Callers:
 *     PspJobDelete @ 0x140287530 (PspJobDelete.c)
 *     PspProcessDelete @ 0x1406136C0 (PspProcessDelete.c)
 *     AlpcpFreeMessageFunction @ 0x1406166D0 (AlpcpFreeMessageFunction.c)
 *     PspThreadDelete @ 0x140619920 (PspThreadDelete.c)
 *     RtlpFreeHandleForAtom @ 0x1406A159C (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x1406ACC5C (RtlpInsertStringAtom.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x140254694 (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x140619DDC (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x14094CE04 (ExpUpdateDebugInfo.c)
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
