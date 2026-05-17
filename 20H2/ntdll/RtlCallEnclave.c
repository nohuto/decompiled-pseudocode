/*
 * XREFs of RtlCallEnclave @ 0x1800A1060
 * Callers:
 *     LdrInitializeEnclave @ 0x1800CCE60 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CD8F0 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     ZwCallEnclave @ 0x18009E2C0 (ZwCallEnclave.c)
 */

__int64 RtlCallEnclave()
{
  return ZwCallEnclave();
}
