/*
 * XREFs of __global_unwind2 @ 0x4B2FB800
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUnwind@16 @ 0x4B2E8E30 (_RtlUnwind@16.c)
 */

void __cdecl _global_unwind2(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &loc_4B2FB818, 0, 0);
}
