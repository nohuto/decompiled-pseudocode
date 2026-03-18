/*
 * XREFs of RtlpHpLegacyGetEnvHandle @ 0x1403314E4
 * Callers:
 *     RtlCreateHeap @ 0x1407658C0 (RtlCreateHeap.c)
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
