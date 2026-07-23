/*
 * XREFs of NtIsSystemResumeAutomatic @ 0x14077A6B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN NtIsSystemResumeAutomatic(void)
{
  return (PopFullWake & 3) == 0;
}
