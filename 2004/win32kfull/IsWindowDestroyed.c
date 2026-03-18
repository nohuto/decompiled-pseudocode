/*
 * XREFs of IsWindowDestroyed @ 0x1C002933C
 * Callers:
 *     xxxSysCommand @ 0x1C005556C (xxxSysCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowDestroyed(__int64 a1)
{
  return *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 19LL) >> 7;
}
