/*
 * XREFs of RtlpShadowStackEnforced @ 0x18010AF48
 * Callers:
 *     RtlRaiseException @ 0x180051020 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

_BOOL8 RtlpShadowStackEnforced()
{
  return ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 60) & 3) == 1;
}
