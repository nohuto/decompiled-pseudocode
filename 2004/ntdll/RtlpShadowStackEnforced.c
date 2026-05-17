/*
 * XREFs of RtlpShadowStackEnforced @ 0x18010AF48
 * Callers:
 *     RtlRaiseException @ 0x180051020 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

_BOOL8 RtlpShadowStackEnforced()
{
  return ((*((_QWORD *)&xmmword_18017F390 + 1) >> 60) & 3) == 1;
}
