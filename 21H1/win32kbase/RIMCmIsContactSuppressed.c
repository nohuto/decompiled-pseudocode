/*
 * XREFs of RIMCmIsContactSuppressed @ 0x1C0186B4C
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C01620CC (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C0162D74 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C017FDEC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0180134 (rimApplyPointerDevicePolicies.c)
 *     rimFinalizePointerFlags @ 0x1C0182284 (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C0183220 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C018341C (rimProcessPointerDeviceContact.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01866E8 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmDeactivateContact @ 0x1C018693C (RIMCmDeactivateContact.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C0186AE0 (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C0186BC8 (RIMCmRemoveContactSuppressionReasons.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMCmIsContactSuppressed(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  return *(_DWORD *)(a1 + 8) != 0;
}
