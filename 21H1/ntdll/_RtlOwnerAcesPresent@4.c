/*
 * XREFs of _RtlOwnerAcesPresent@4 @ 0x4B346CE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpOwnerAcesPresent@8 @ 0x4B2D8769 (_RtlpOwnerAcesPresent@8.c)
 */

char __stdcall RtlOwnerAcesPresent(int a1)
{
  return RtlpOwnerAcesPresent(0, a1);
}
