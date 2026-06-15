/*
 * XREFs of sub_180053FA0 @ 0x180053FA0
 * Callers:
 *     ?HasUnrealizedChores@ScheduleGroupSegmentBase@details@Concurrency@@IEAA_NXZ @ 0x180053F84 (-HasUnrealizedChores@ScheduleGroupSegmentBase@details@Concurrency@@IEAA_NXZ.c)
 *     sub_180064244 @ 0x180064244 (sub_180064244.c)
 *     sub_1800BB014 @ 0x1800BB014 (sub_1800BB014.c)
 * Callees:
 *     <none>
 */

__int64 *sub_180053FA0()
{
  __int64 *result; // rax

  InitOnceExecuteOnce(&stru_18019F898, (PINIT_ONCE_FN)InitFn, 0LL, 0LL);
  result = &qword_18019E4D0;
  byte_18019E510 = 1;
  return result;
}
