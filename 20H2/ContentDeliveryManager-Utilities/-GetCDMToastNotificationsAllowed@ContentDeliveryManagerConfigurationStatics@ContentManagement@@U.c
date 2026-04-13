/*
 * XREFs of ?GetCDMToastNotificationsAllowed@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAJPEAE@Z @ 0x180061690
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::GetCDMToastNotificationsAllowed(
        ContentManagement::ContentDeliveryManagerConfigurationStatics *this,
        unsigned __int8 *a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  LPVOID v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  unsigned __int8 v11; // [rsp+68h] [rbp+28h] BYREF
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+38h] BYREF

  *a2 = 1;
  ppv = 0LL;
  v3 = CoCreateInstance(
         &GUID_d18705be_fc2f_44c8_aeff_1cd49aea8fc1,
         0LL,
         0x17u,
         &GUID_443b1739_3779_4aba_953b_9e4ff84dd4b6,
         &ppv);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\contentdeliverymanagerconfiguration\\contentdeliv"
               "erymanagerconfiguration.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_11;
  }
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(LPVOID, const wchar_t *, __int64 *))(*(_QWORD *)ppv + 24LL))(
         ppv,
         L"Windows.SystemToast.Suggested",
         &v12);
  v4 = v5;
  if ( v5 < 0 )
  {
    v6 = 23LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\contentdeliverymanagerconfiguration\\contentdeliv"
               "erymanagerconfiguration.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_9;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v12 + 40LL))(v12, &v11);
  v4 = v5;
  if ( v5 < 0 )
  {
    v6 = 25LL;
    goto LABEL_7;
  }
  *a2 = v11;
  v4 = 0;
LABEL_9:
  v7 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
LABEL_11:
  v8 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return v4;
}
