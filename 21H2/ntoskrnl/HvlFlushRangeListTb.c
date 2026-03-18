/*
 * XREFs of HvlFlushRangeListTb @ 0x14039DB1C
 * Callers:
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     KeFlushMultipleRangeTb @ 0x1402F3C40 (KeFlushMultipleRangeTb.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     KeFlushSingleCurrentTb @ 0x1403AD304 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403AD40C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     HvlpFlushRangeListTb @ 0x14039DB6C (HvlpFlushRangeListTb.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14039DECC (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFlushRangeListTbEx @ 0x14054CD1C (HvlpFlushRangeListTbEx.c)
 */

char __fastcall HvlFlushRangeListTb(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, int a6, __int64 a7)
{
  int v7; // r10d
  char v8; // bl

  v7 = a1;
  if ( a2 && (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls(a1, a2, a3, a4) )
  {
    v8 = a5;
    HvlpFlushRangeListTbEx(v7, a2, a3, a4, a5, a6, a7);
  }
  else
  {
    v8 = a5;
    HvlpFlushRangeListTb(v7, a2, a3, a4, a5, a6, a7);
  }
  return v8;
}
