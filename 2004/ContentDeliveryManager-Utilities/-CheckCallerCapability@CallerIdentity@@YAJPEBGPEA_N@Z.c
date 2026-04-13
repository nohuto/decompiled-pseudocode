/*
 * XREFs of ?CheckCallerCapability@CallerIdentity@@YAJPEBGPEA_N@Z @ 0x180059284
 * Callers:
 *     ?get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z @ 0x1800135D0 (-get_AppManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIAppManager@2@@Z.c)
 *     ?get_NotificationManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUINotificationManager@2@@Z @ 0x180013B70 (-get_NotificationManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUINotificat.c)
 *     ?get_LaunchManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUILaunchManager@2@@Z @ 0x180013D70 (-get_LaunchManager@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUILaunchManager@2.c)
 *     ?get_ActionHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIActionHelper@2@@Z @ 0x180014280 (-get_ActionHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIActionHelper@2@@.c)
 *     ?get_PhoneShellNamespaceHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIPhoneShellNamespaceHelper@2@@Z @ 0x180014480 (-get_PhoneShellNamespaceHelper@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIPho.c)
 *     ?get_MobilityExperienceSettings@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIMobilityExperienceSettings@2@@Z @ 0x180014680 (-get_MobilityExperienceSettings@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAPEAUIMo.c)
 *     ?GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA?AV?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@XZ @ 0x1800464E4 (-GetOrCreateInstance@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@SA-AV-$.c)
 *     ?IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z @ 0x180059BD0 (-IsStoreBlockedByPolicy@AppManager@ContentManagement@@UEAAJPEAE@Z.c)
 *     ?IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z @ 0x180059E00 (-IsAppAllowedToInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAE@Z.c)
 *     ?GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z @ 0x18005A0C0 (-GetIsApplicable@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAE@Z.c)
 *     ?MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x18005A390 (-MoveAppInstallToFrontOfQueue@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?close_reset@?$resource_policy@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@SAXPEAX@Z @ 0x180048134 (-close_reset@-$resource_policy@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@ZU-$integral_constant@_K$0A@@w.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x1800591D0 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x1800596FC (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CallerIdentity::CheckCallerCapability(CallerIdentity *this, unsigned __int16 *a2, bool *a3)
{
  int CallingProcessHandle; // eax
  void **v6; // r9
  int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  HANDLE hObject; // [rsp+48h] [rbp+10h] BYREF

  *(_BYTE *)a2 = 0;
  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(0LL, a2, &hObject);
  v7 = 0;
  if ( CallingProcessHandle < 0 )
    v7 = CallingProcessHandle;
  if ( v7 >= 0 )
    v7 = CallerIdentity::CheckCapabilityFromProcessHandle((CallerIdentity *)hObject, this, a2, v6);
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"onecore\\shell\\lib\\calleridentity\\calleridentity_capability.cpp",
      (const char *)(unsigned int)v7);
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return (unsigned int)v7;
}
