/*
 * XREFs of RtlCallEnclave @ 0x1800A1640
 * Callers:
 *     LdrInitializeEnclave @ 0x1800CCE20 (LdrInitializeEnclave.c)
 *     LdrpIssueEnclaveCall @ 0x1800CD8B0 (LdrpIssueEnclaveCall.c)
 * Callees:
 *     ZwCallEnclave @ 0x18009E850 (ZwCallEnclave.c)
 */

__int64 RtlCallEnclave()
{
  return ZwCallEnclave();
}
