/*
 * XREFs of RtlIsMultiUsersInSessionSku @ 0x14090F290
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1403A132C (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsMultiUsersInSessionSku(void)
{
  return (MEMORY[0xFFFFF780000002F0] & 0x200) != 0;
}
