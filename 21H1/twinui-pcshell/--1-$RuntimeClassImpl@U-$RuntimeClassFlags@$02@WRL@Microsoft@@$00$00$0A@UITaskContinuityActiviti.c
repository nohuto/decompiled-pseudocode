/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskContinuityActivitiesExperienceManager@Experience@Shell@Internal@Windows@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180096D94
 * Callers:
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x180096DF0 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ??1MeetNowExperienceManager@@UEAA@XZ @ 0x180096EE8 (--1MeetNowExperienceManager@@UEAA@XZ.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VICortanaExperienceManagerNotification@Cortana@TwinUI@@UIClosable@Foundation@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180097390 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VICortanaExperienceManagerNotificatio.c)
 *     ??1CortanaSharedExperienceManager@@UEAA@XZ @ 0x1801939F4 (--1CortanaSharedExperienceManager@@UEAA@XZ.c)
 *     ??_ECortanaExperienceManagerNotification@@UEAAPEAXI@Z @ 0x180193EE0 (--_ECortanaExperienceManagerNotification@@UEAAPEAXI@Z.c)
 *     ??_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z @ 0x18019C210 (--_ECTaskContinuityActivitiesExperienceManager@@UEAAPEAXI@Z.c)
 *     ??1CPeopleBarJumpViewExperienceManager@@UEAA@XZ @ 0x1801AA8C8 (--1CPeopleBarJumpViewExperienceManager@@UEAA@XZ.c)
 *     ??1CQuickConnectExperienceManager@@UEAA@XZ @ 0x1801B8A9C (--1CQuickConnectExperienceManager@@UEAA@XZ.c)
 *     ??1CScreenClippingExperienceManager@@EEAA@XZ @ 0x1801C42AC (--1CScreenClippingExperienceManager@@EEAA@XZ.c)
 *     ??1SearchAppExperienceManager@@UEAA@XZ @ 0x1801D266C (--1SearchAppExperienceManager@@UEAA@XZ.c)
 *     ??_GSearchAppExperienceManagerNotification@@UEAAPEAXI@Z @ 0x1801D2990 (--_GSearchAppExperienceManagerNotification@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoaderInternal@@@WRL@Microsoft@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180363C80 (--_E-$RuntimeClass@U-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIIconLoaderInternal@@@.c)
 *     ??_GCIconLoaderInternal@@UEAAPEAXI@Z @ 0x180363CC0 (--_GCIconLoaderInternal@@UEAAPEAXI@Z.c)
 *     ??1AltEscHotkeyHandler@@MEAA@XZ @ 0x180375E4C (--1AltEscHotkeyHandler@@MEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDispatcher@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180079540 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAsyncCallbackDi.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ITaskContinuityActivitiesExperienceManager,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 40);
  result = (unsigned __int64)v2 >> 63;
  if ( v2 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(
             2 * v2,
             a2);
  return result;
}
