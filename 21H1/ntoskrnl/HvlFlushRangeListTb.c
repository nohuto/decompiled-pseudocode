/*
 * XREFs of HvlFlushRangeListTb @ 0x14038CA2C
 * Callers:
 *     KeFlushMultipleRangeTb @ 0x140293520 (KeFlushMultipleRangeTb.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140386658 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C4F7C (KeFlushMultipleRangeCurrentTb.c)
 * Callees:
 *     HvlpFlushRangeListTb @ 0x14038CA7C (HvlpFlushRangeListTb.c)
 *     HvlpUseExtendedProcessorSetHypercalls @ 0x14038CF5C (HvlpUseExtendedProcessorSetHypercalls.c)
 *     HvlpFlushRangeListTbEx @ 0x1404F54FC (HvlpFlushRangeListTbEx.c)
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
