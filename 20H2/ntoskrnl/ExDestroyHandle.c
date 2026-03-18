/*
 * XREFs of ExDestroyHandle @ 0x1406672F8
 * Callers:
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     AlpcpFreeMessageFunction @ 0x140663C50 (AlpcpFreeMessageFunction.c)
 *     PspThreadDelete @ 0x140666EA0 (PspThreadDelete.c)
 *     RtlpFreeHandleForAtom @ 0x14068D0FC (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x1406CEB3C (RtlpInsertStringAtom.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x140264CC4 (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x14066735C (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x14094F634 (ExpUpdateDebugInfo.c)
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
