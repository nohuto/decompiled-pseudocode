/*
 * XREFs of RIMCmIsContactSuppressed @ 0x1C017EA1C
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C015981C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C015A4C4 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C0177CBC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0178004 (rimApplyPointerDevicePolicies.c)
 *     rimFinalizePointerFlags @ 0x1C017A154 (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C017B0F0 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C017B2EC (rimProcessPointerDeviceContact.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C017E5B8 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmDeactivateContact @ 0x1C017E80C (RIMCmDeactivateContact.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C017E9B0 (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C017EA98 (RIMCmRemoveContactSuppressionReasons.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMCmIsContactSuppressed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  return *(_DWORD *)(a1 + 8) != 0;
}
