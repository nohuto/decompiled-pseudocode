/*
 * XREFs of NtDeleteWnfStateData @ 0x1407CD960
 * Callers:
 *     <none>
 * Callees:
 *     ExpNtDeleteWnfStateData @ 0x1407CD97C (ExpNtDeleteWnfStateData.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateData(PCWNF_STATE_NAME StateName, const void *ExplicitScope)
{
  return ExpNtDeleteWnfStateData(StateName, ExplicitScope, 1LL);
}
