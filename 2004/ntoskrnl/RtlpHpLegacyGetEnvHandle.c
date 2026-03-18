/*
 * XREFs of RtlpHpLegacyGetEnvHandle @ 0x1403608CC
 * Callers:
 *     RtlCreateHeap @ 0x140756C80 (RtlCreateHeap.c)
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
