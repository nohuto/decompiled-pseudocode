/*
 * XREFs of IsWindowDestroyed @ 0x1C00C65F4
 * Callers:
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsWindowDestroyed(__int64 a1)
{
  return *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 19LL) >> 7;
}
