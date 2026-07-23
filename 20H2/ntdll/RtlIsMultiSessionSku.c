/*
 * XREFs of RtlIsMultiSessionSku @ 0x180040250
 * Callers:
 *     RtlCapabilityCheck @ 0x18003FCD0 (RtlCapabilityCheck.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18006F4B4 (OpenGlobalizationUserSettingsKey.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x180088640 (RtlCapabilityCheckForSingleSessionSku.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_BYTE *)NtCurrentPeb()->SharedData + 28);
  else
    return MEMORY[0x7FFE02F1] & 1;
}
