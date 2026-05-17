/*
 * XREFs of @_EH4_GlobalUnwind@4 @ 0x4B2F6FD4
 * Callers:
 *     __except_handler4_common @ 0x4B2F68B0 (__except_handler4_common.c)
 * Callees:
 *     _RtlUnwind@16 @ 0x4B2E8E30 (_RtlUnwind@16.c)
 */

void __thiscall _EH4_GlobalUnwind(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &loc_4B2F6FE9, 0, 0);
}
