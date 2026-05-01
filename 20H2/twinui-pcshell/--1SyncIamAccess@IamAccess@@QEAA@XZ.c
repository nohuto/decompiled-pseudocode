/*
 * XREFs of ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x18007FBAC
 * Callers:
 *     ?SetActiveProcess@CPrivilegedDesktopOperations@@EEAAJK@Z @ 0x18007F9D0 (-SetActiveProcess@CPrivilegedDesktopOperations@@EEAAJK@Z.c)
 *     ?SetActivationFilter@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@H@Z @ 0x18007FA70 (-SetActivationFilter@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@H@Z.c)
 *     ?QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z @ 0x18007FB20 (-QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?AllowSetForegroundWindow@CPrivilegedForegroundOperations@@EEAAJXZ @ 0x180229320 (-AllowSetForegroundWindow@CPrivilegedForegroundOperations@@EEAAJXZ.c)
 *     ?ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ @ 0x180229490 (-ClearForeground@CPrivilegedDesktopOperations@@EEAAJXZ.c)
 *     ?CreateWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJPEAK@Z @ 0x1802295B0 (-CreateWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJPEAK@Z.c)
 *     ?DeleteWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJK@Z @ 0x180229660 (-DeleteWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJK@Z.c)
 *     ?EnableShellWindowManagementBehavior@CPrivilegedTabletModeOperations@@EEAAJKK@Z @ 0x180229700 (-EnableShellWindowManagementBehavior@CPrivilegedTabletModeOperations@@EEAAJKK@Z.c)
 *     ?EnableWindowGroupPolicy@PrivilegedWindowGroupingOperations@@EEAAJKKK@Z @ 0x1802297B0 (-EnableWindowGroupPolicy@PrivilegedWindowGroupingOperations@@EEAAJKKK@Z.c)
 *     ?InsertAfterWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@0@Z @ 0x18022A5C0 (-InsertAfterWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@0@Z.c)
 *     ?MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z @ 0x18022A760 (-MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?RegisterWindowArrangementCallout@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@H@Z @ 0x18022B2F0 (-RegisterWindowArrangementCallout@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@H@Z.c)
 *     ?RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE_HOTKEY_REGISTRATION@@PEAUIImmersiveWindowMessageNotification@@PEAK@Z @ 0x18022B490 (-RequestPrivilegedHotkeys@PrivilegedHotkeyOperations@@UEAAJIQEBUIMMERSIVE_WINDOW_MESSAGE_SERVICE.c)
 *     _PrivilegedHotkeyOperations::RequestPrivilegedHotkeys_::_1_::dtor$3 @ 0x18022B666 (_PrivilegedHotkeyOperations--RequestPrivilegedHotkeys_--_1_--dtor$3.c)
 *     ?SetBridgeWindowChild@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x18022B7A0 (-SetBridgeWindowChild@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z.c)
 *     ?SetCancelRotationDelayHintWindow@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@@Z @ 0x18022B850 (-SetCancelRotationDelayHintWindow@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@@Z.c)
 *     ?SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z @ 0x18022B8F0 (-SetFallbackForeground@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@K@Z.c)
 *     ?SetWindowArrangement@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEBUtagRECT@@PEAU3@K@Z @ 0x18022B9D0 (-SetWindowArrangement@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEBUtagRECT@@PEAU3@K@Z.c)
 *     ?SetWindowCompositionAttribute@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@KPEAXI@Z @ 0x18022BA90 (-SetWindowCompositionAttribute@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@KPEAXI@Z.c)
 *     ?SetWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJKPEAUHWND__@@KK@Z @ 0x18022BB60 (-SetWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJKPEAUHWND__@@KK@Z.c)
 *     ?SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z @ 0x18022BD50 (-SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z.c)
 *     ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x18022BE04 (-SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z @ 0x18022C920 (-UpdateSizeConstraints@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@PEAUtagSIZE@@1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall IamAccess::SyncIamAccess::~SyncIamAccess(IamAccess::SyncIamAccess *this)
{
  EnableIAMAccess(*(_QWORD *)(*(_QWORD *)this + 40LL), 0LL);
  ReleaseSRWLockExclusive((PSRWLOCK)(*(_QWORD *)this + 48LL));
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((__int64 *)this);
}
