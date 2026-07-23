/*
 * XREFs of NtIsSystemResumeAutomatic @ 0x140767510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN NtIsSystemResumeAutomatic(void)
{
  return (PopFullWake & 3) == 0;
}
