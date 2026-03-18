/*
 * XREFs of @_EH4_GlobalUnwind@4 @ 0xEE29C
 * Callers:
 *     __except_handler4 @ 0xEE020 (__except_handler4.c)
 * Callees:
 *     _RtlUnwind@16 @ 0xEE2FB (_RtlUnwind@16.c)
 */

void __thiscall _EH4_GlobalUnwind(PVOID TargetFrame)
{
  RtlUnwind(TargetFrame, &loc_EE2B1, 0, 0);
}
