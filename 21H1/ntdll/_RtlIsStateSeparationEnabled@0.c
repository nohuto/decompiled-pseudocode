/*
 * XREFs of _RtlIsStateSeparationEnabled@0 @ 0x4B2E60A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsStateSeparationEnabled(void)
{
  return (MEMORY[0x7FFE02F0] & 0x400) != 0;
}
