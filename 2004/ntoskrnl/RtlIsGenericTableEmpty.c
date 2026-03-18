/*
 * XREFs of RtlIsGenericTableEmpty @ 0x140392590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsGenericTableEmpty(PRTL_GENERIC_TABLE Table)
{
  return Table->TableRoot == 0LL;
}
