/*
 * XREFs of ?OnTargetedMessage@CToastCenterExperienceManager@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801A0D94
 * Callers:
 *     ?OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z @ 0x1801A0910 (-OnMessage@CToastCenterExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800520CC (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Hide@CToastCenterExperienceManager@@AEAAJXZ @ 0x180079A68 (-Hide@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ??$ToastDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEBK@Z @ 0x18019D660 (--$ToastDidntLaunchInSpecifiedTime@AEBK@NotificationCenterTelemetry@NotificationCenterUITelemetr.c)
 *     ?OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x18019FFFC (-OnCriticalNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A0100 (-OnDisplayContextChanged@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A0978 (-OnNewNotification@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1801A0AE0 (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CToastCenterExperienceManager::OnTargetedMessage(struct _TP_TIMER **a1, int a2)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v6; // rdx
  int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v7 = CToastCenterExperienceManager::OnShellReady((CToastCenterExperienceManager *)a1);
    if ( v7 < 0 )
    {
      v8 = 509LL;
      goto LABEL_21;
    }
    return 0LL;
  }
  v3 = a2 - 1;
  if ( !v3 )
    goto LABEL_17;
  v4 = v3 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      v6 = (enum Windows::Internal::Shell::Holographic::UserDisplayContext *)(unsigned int)(v5 - 2);
      if ( (_DWORD)v6 )
      {
        if ( (_DWORD)v6 != 1 )
        {
          v7 = -2147418113;
          v8 = 530LL;
LABEL_21:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v8,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v7);
          return (unsigned int)v7;
        }
LABEL_17:
        v7 = CToastCenterExperienceManager::OnNewNotification(a1);
        if ( v7 < 0 )
        {
          v8 = 514LL;
          goto LABEL_21;
        }
        return 0LL;
      }
      v7 = CToastCenterExperienceManager::OnDisplayContextChanged((CToastCenterExperienceManager *)a1, v6);
      if ( v7 < 0 )
      {
        v8 = 526LL;
        goto LABEL_21;
      }
    }
    else
    {
      NotificationCenterUITelemetry::NotificationCenterTelemetry::ToastDidntLaunchInSpecifiedTime<unsigned long const &>();
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        a1 + 82,
        0LL);
      v9 = CToastCenterExperienceManager::Hide((CToastCenterExperienceManager *)a1);
      v7 = v9;
      if ( v9 >= 0 )
        v7 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x266,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
      if ( v7 < 0 )
      {
        v8 = 522LL;
        goto LABEL_21;
      }
    }
  }
  else
  {
    v7 = CToastCenterExperienceManager::OnCriticalNotification(a1);
    if ( v7 < 0 )
    {
      v8 = 518LL;
      goto LABEL_21;
    }
  }
  return 0LL;
}
