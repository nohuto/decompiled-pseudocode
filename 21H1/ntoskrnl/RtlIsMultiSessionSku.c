/*
 * XREFs of RtlIsMultiSessionSku @ 0x1406CCA90
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1403A132C (OpenGlobalizationUserSettingsKey.c)
 *     SepIsImpersonationAllowedDueToCapability @ 0x1406CCA20 (SepIsImpersonationAllowedDueToCapability.c)
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 *     NtSetDefaultLocale @ 0x140777660 (NtSetDefaultLocale.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1407A7718 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     RtlCapabilityCheck @ 0x14090ECC0 (RtlCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x14090F0A0 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x140947400 (NtSetSystemTime.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 */

BOOLEAN RtlIsMultiSessionSku(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return *(_BYTE *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 139) + 28LL);
  else
    return MEMORY[0xFFFFF780000002F1] & 1;
}
