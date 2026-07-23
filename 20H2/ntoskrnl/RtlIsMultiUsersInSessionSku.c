/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x140916170
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1403A3F8C (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0xFFFFF780000002F0] & 0x200) != 0;
}
