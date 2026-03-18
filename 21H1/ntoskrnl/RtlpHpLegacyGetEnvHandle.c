/*
 * XREFs of RtlpHpLegacyGetEnvHandle @ 0x140322CBC
 * Callers:
 *     RtlCreateHeap @ 0x140752DF0 (RtlCreateHeap.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall RtlpHpLegacyGetEnvHandle(_OWORD *a1)
{
  _OWORD *result; // rax

  result = a1;
  *a1 = RtlpHpLegacyEnvHandle;
  return result;
}
