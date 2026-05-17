/*
 * XREFs of RtlCallEnclave @ 0x1800A0DC0
 * Callers:
 *     LdrInitializeEnclave @ 0x1800CCC80 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CD710 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     ZwCallEnclave @ 0x18009E020 (ZwCallEnclave.c)
 */

__int64 RtlCallEnclave()
{
  return ZwCallEnclave();
}
