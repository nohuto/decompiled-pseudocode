/*
 * XREFs of ExDestroyHandle @ 0x14069AF88
 * Callers:
 *     PspJobDelete @ 0x14027ABB0 (PspJobDelete.c)
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     AlpcpFreeMessageFunction @ 0x140698E00 (AlpcpFreeMessageFunction.c)
 *     PspThreadDelete @ 0x14069AB30 (PspThreadDelete.c)
 *     RtlpFreeHandleForAtom @ 0x1406F1D8C (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x1406FC29C (RtlpInsertStringAtom.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x1402D22DC (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x14069AFEC (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x140949874 (ExpUpdateDebugInfo.c)
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
