/*
 * XREFs of HvlFlushRangeListTb @ 0x14038FA8C
 * Callers:
 *     KeFlushMultipleRangeTb @ 0x1402BFBA0 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x140353AC8 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140389788 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C897C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     HvlpFlushRangeListTb @ 0x14038FADC (HvlpFlushRangeListTb.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14038FFBC (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFlushRangeListTbEx @ 0x1404F93DC (HvlpFlushRangeListTbEx.c)
 */

char __fastcall HvlFlushRangeListTb(int a1, __int64 a2, int a3, int a4, char a5, int a6, __int64 a7)
{
  int v7; // r10d
  char v8; // bl

  v7 = a1;
  if ( a2 && (unsigned __int8)HvlpUseExtendedProcessorSetHypercalls() )
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
