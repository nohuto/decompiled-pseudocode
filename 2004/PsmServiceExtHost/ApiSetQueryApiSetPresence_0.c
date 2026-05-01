/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1800458D0
 * Callers:
 *     IsUMgrQueryUserContextFromSidPresent @ 0x1800455D0 (IsUMgrQueryUserContextFromSidPresent.c)
 *     IsRmRpsInitializePresent @ 0x1800457D8 (IsRmRpsInitializePresent.c)
 *     IsQueryUserTokenPresent @ 0x180045968 (IsQueryUserTokenPresent.c)
 *     IsPsmQueryBackgroundActivationTypePresent @ 0x180045A48 (IsPsmQueryBackgroundActivationTypePresent.c)
 *     IsPackageRundownNotificationForStoreLicense2Present @ 0x180045BB4 (IsPackageRundownNotificationForStoreLicense2Present.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180045CCC (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     IsGetPackageTypeForPsmKeyPresent @ 0x180045D20 (IsGetPackageTypeForPsmKeyPresent.c)
 *     IsChangeWindowMessageFilterExPresent @ 0x1800461B8 (IsChangeWindowMessageFilterExPresent.c)
 *     IsRegisterWindowMessageWPresent @ 0x180046298 (IsRegisterWindowMessageWPresent.c)
 *     IsGetThreadDesktopPresent @ 0x1800462EC (IsGetThreadDesktopPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
