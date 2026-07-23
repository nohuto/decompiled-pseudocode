/*
 * XREFs of _RtlIsMultiSessionSku@0 @ 0x4B2AD7C0
 * Callers:
 *     _GetGlobalizationUserModelType@0 @ 0x4B2AD797 (_GetGlobalizationUserModelType@0.c)
 *     _RtlCapabilityCheck@12 @ 0x4B2EF210 (_RtlCapabilityCheck@12.c)
 *     _RtlCapabilityCheckForSingleSessionSku@12 @ 0x4B346050 (_RtlCapabilityCheckForSingleSessionSku@12.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( RtlGetCurrentServiceSessionId() )
    return *((_BYTE *)NtCurrentPeb()->SharedData + 28);
  else
    return MEMORY[0x7FFE02F1] & 1;
}
