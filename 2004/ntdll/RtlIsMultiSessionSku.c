/*
 * XREFs of RtlIsMultiSessionSku @ 0x180040200
 * Callers:
 *     RtlCapabilityCheck @ 0x18003FC80 (RtlCapabilityCheck.c)
 *     OpenGlobalizationUserSettingsKey @ 0x18006F3B4 (OpenGlobalizationUserSettingsKey.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x180088540 (RtlCapabilityCheckForSingleSessionSku.c)
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
