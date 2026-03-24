/*
 * XREFs of NtIsSystemResumeAutomatic @ 0x14077A4F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool NtIsSystemResumeAutomatic()
{
  return (PopFullWake & 3) == 0;
}
