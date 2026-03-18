/*
 * XREFs of RIMCmIsContactSuppressed @ 0x1C0180E4C
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C015BD7C (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbUpdateDeadzonesAndResurrectContacts @ 0x1C015CA24 (rimAbUpdateDeadzonesAndResurrectContacts.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C017A0EC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimApplyPointerDevicePolicies @ 0x1C017A434 (rimApplyPointerDevicePolicies.c)
 *     rimFinalizePointerFlags @ 0x1C017C584 (rimFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C017D520 (rimProcessPointerDeviceButtonContact.c)
 *     rimProcessPointerDeviceContact @ 0x1C017D71C (rimProcessPointerDeviceContact.c)
 *     RIMCmAddContactSuppressionReasons @ 0x1C01809E8 (RIMCmAddContactSuppressionReasons.c)
 *     RIMCmDeactivateContact @ 0x1C0180C3C (RIMCmDeactivateContact.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C0180DE0 (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 *     RIMCmRemoveContactSuppressionReasons @ 0x1C0180EC8 (RIMCmRemoveContactSuppressionReasons.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall RIMCmIsContactSuppressed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( (*(_DWORD *)(a1 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  return *(_DWORD *)(a1 + 8) != 0;
}
