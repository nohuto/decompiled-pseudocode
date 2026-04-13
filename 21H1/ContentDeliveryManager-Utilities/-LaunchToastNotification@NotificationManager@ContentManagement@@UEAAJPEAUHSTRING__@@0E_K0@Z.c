/*
 * XREFs of ?LaunchToastNotification@NotificationManager@ContentManagement@@UEAAJPEAUHSTRING__@@0E_K0@Z @ 0x18000F180
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ContentManagement::NotificationManager::LaunchToastNotification(
        ContentManagement::NotificationManager *this,
        HSTRING a2,
        HSTRING a3,
        char a4,
        unsigned __int64 a5,
        HSTRING string)
{
  HRESULT Instance; // eax
  __int64 v10; // rax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  PCWSTR StringRawBuffer; // rsi
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, const WCHAR *, PCWSTR, _QWORD, int, PCWSTR, PCWSTR, PCWSTR, int *, _DWORD, _DWORD, _QWORD, _QWORD, _QWORD, bool, int *); // r14
  PCWSTR v16; // rdi
  PCWSTR v17; // rax
  int v18; // eax
  const char *v19; // r9
  wil::details::in1diag3 *v20; // rcx
  __int64 result; // rax
  int v22; // [rsp+90h] [rbp-38h] BYREF
  __int64 v23; // [rsp+98h] [rbp-30h] BYREF
  LPVOID ppv[2]; // [rsp+A0h] [rbp-28h] BYREF
  int v25; // [rsp+B0h] [rbp-18h] BYREF
  unsigned __int64 v26; // [rsp+B4h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  ppv[1] = (LPVOID)-2LL;
  ppv[0] = 0LL;
  Instance = CoCreateInstance(
               &GUID_0c9281f9_6da1_4006_8729_de6e6b61581c,
               0LL,
               0x17u,
               &GUID_df8e9480_ca73_448e_b8f0_da000f581428,
               ppv);
  try
  {
    if ( Instance < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xE7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)Instance);
    }
    else
    {
      v23 = 0LL;
      v10 = *(_QWORD *)ppv[0];
      v23 = 0LL;
      v11 = (*(__int64 (__fastcall **)(LPVOID, __int64 *))(v10 + 24))(ppv[0], &v23);
      v12 = retaddr;
      if ( v11 >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
        v22 = 0;
        v14 = v23;
        v15 = *(__int64 (__fastcall **)(__int64, const WCHAR *, PCWSTR, _QWORD, int, PCWSTR, PCWSTR, PCWSTR, int *, _DWORD, _DWORD, _QWORD, _QWORD, _QWORD, bool, int *))(*(_QWORD *)v23 + 64LL);
        v25 = 1;
        v26 = a5;
        v16 = WindowsGetStringRawBuffer(a2, 0LL);
        v17 = WindowsGetStringRawBuffer(string, 0LL);
        v18 = v15(
                v14,
                L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy",
                v17,
                0LL,
                1,
                v16,
                StringRawBuffer,
                StringRawBuffer,
                &v25,
                0,
                0,
                0LL,
                0LL,
                0LL,
                a4 != 0,
                &v22);
        v20 = retaddr;
        if ( v18 >= 0 )
        {
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          if ( ppv[0] )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
          return 0LL;
        }
LABEL_12:
        wil::details::in1diag3::Throw_Hr(
          v20,
          (void *)0x103,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v18);
        JUMPOUT(0x18000F3C2LL);
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0xEA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_12;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x106,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
                           v19);
  }
  return result;
}
