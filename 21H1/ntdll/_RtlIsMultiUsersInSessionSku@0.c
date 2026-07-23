/*
 * XREFs of _RtlIsMultiUsersInSessionSku@0 @ 0x4B2F1D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0x7FFE02F0] & 0x200) != 0;
}
