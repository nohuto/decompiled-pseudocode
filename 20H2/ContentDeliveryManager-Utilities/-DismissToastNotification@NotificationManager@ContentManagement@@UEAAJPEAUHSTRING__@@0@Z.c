/*
 * XREFs of ?DismissToastNotification@NotificationManager@ContentManagement@@UEAAJPEAUHSTRING__@@0@Z @ 0x18000F280
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007218 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::NotificationManager::DismissToastNotification(
        ContentManagement::NotificationManager *this,
        HSTRING a2,
        HSTRING a3)
{
  HRESULT v5; // eax
  int ActivationFactory; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING string; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v14[1] = -2LL;
  v13 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.UI.Notifications.ToastNotificationManager",
         0x31u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
  {
LABEL_14:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    JUMPOUT(0x18000F408LL);
  }
  ActivationFactory = RoGetActivationFactory(string, &GUID_7ab93c52_0e48_4750_ba9d_1a4113981847, &v13);
  v7 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_10;
  }
  v14[0] = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 48LL))(v13, v14);
  v7 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x110,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_8;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, HSTRING, HSTRING, HSTRING))(*(_QWORD *)v14[0] + 64LL))(v14[0], a2, a2, a3);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x113,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_14;
  }
  v7 = 0;
LABEL_8:
  v10 = v14[0];
  if ( v14[0] )
  {
    v14[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_10:
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v7;
}
