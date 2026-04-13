/*
 * XREFs of ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800276AC
 * Callers:
 *     _lambda_c7a3d71a2342ccc4636948ba7f796bf6_::operator() @ 0x18002D740 (_lambda_c7a3d71a2342ccc4636948ba7f796bf6_--operator().c)
 *     ?CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ @ 0x18002EE10 (-CloseConnection@ContentManagementService@ContentManagement@@AEAAXXZ.c)
 *     ?GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z @ 0x18002EFA8 (-GetExistingStringSettingRemoveOnFailure@ContentManagement@@YAJPEBG0PEAPEAG@Z.c)
 *     ?QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z @ 0x18002FC90 (-QueueActionAfterUnlock@ContentManagementService@ContentManagement@@UEAAJPEAUIInspectable@@@Z.c)
 *     ContentManagement::ExecuteHandlerByEventPolicy__lambda_c7a3d71a2342ccc4636948ba7f796bf6___ @ 0x180039080 (ContentManagement--ExecuteHandlerByEventPolicy__lambda_c7a3d71a2342ccc4636948ba7f796bf6___.c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x18004378C (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 *     ?Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x180049A00 (-Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_.c)
 *     ??_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z @ 0x18007E340 (--_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z.c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x18007E43C (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008597C (-SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008AD2C (-LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ.c)
 *     ?Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z @ 0x18009F1E0 (-Resolve@MRTHelperBase@ShellMRTHelper@@AEAAJW4MRTResolutionType@12@PEBGPEAPEAG@Z.c)
 *     ?IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ @ 0x1800A0FF0 (-IsMicrosoftInternalUser@AccountTokens@ContentDeliveryManager@@YA_NXZ.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x1800059E4 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::_Log_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, (unsigned int)a2, a3, 0LL, 0LL, retaddr, 2, (unsigned int)a4);
}
