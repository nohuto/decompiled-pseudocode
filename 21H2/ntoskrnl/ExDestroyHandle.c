/*
 * XREFs of ExDestroyHandle @ 0x1406839D8
 * Callers:
 *     PspJobDelete @ 0x1402046D0 (PspJobDelete.c)
 *     RtlpFreeHandleForAtom @ 0x140600D2C (RtlpFreeHandleForAtom.c)
 *     RtlpInsertStringAtom @ 0x14060B34C (RtlpInsertStringAtom.c)
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 *     AlpcpFreeMessageFunction @ 0x140680330 (AlpcpFreeMessageFunction.c)
 *     PspThreadDelete @ 0x140683580 (PspThreadDelete.c)
 * Callees:
 *     ExSweepSingleHandle @ 0x140275C04 (ExSweepSingleHandle.c)
 *     ExpFreeHandleTableEntry @ 0x140683A3C (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x14094CFD4 (ExpUpdateDebugInfo.c)
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
