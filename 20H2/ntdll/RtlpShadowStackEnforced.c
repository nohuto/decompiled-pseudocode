/*
 * XREFs of RtlpShadowStackEnforced @ 0x18010B458
 * Callers:
 *     RtlRaiseException @ 0x180051070 (RtlRaiseException.c)
 * Callees:
 *     <none>
 */

_BOOL8 RtlpShadowStackEnforced()
{
  return ((*((_QWORD *)&xmmword_180181390 + 1) >> 60) & 3) == 1;
}
