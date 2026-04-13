/*
 * XREFs of Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_cbb39659d92f3de839865b35544205a6___ @ 0x18006BBA8
 * Callers:
 *     wil::details::lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___::_lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___ @ 0x18006A5B8 (wil--details--lambda_call__lambda_24a5146baa4e894af4084bd69754f4d6___--_lambda_call__lambda_24a5.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TriggerRegistrationFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000PEBD@Z @ 0x18006BA98 (--$TriggerRegistrationFailed@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_W@TriggerManagerRegi.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x1800715A0 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180071758 (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_cbb39659d92f3de839865b35544205a6___(
        __int64 a1,
        __int64 a2)
{
  __int64 (*v4)(void); // rbx
  int v5; // eax
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rbx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 (__fastcall *v9)(__int64, HSTRING *); // rbx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 (__fastcall *v12)(__int64, HSTRING *); // rbx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 (__fastcall *v15)(__int64, HSTRING *); // rbx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 (__fastcall *v18)(__int64, HSTRING *); // rbx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  __int64 v23; // rbx
  const char *v24; // r9
  __int64 result; // rax
  HSTRING v26; // [rsp+40h] [rbp-78h] BYREF
  HSTRING v27; // [rsp+48h] [rbp-70h] BYREF
  HSTRING v28; // [rsp+50h] [rbp-68h] BYREF
  HSTRING string; // [rsp+58h] [rbp-60h]
  HSTRING v30; // [rsp+60h] [rbp-58h] BYREF
  PCWSTR StringRawBuffer; // [rsp+68h] [rbp-50h] BYREF
  PCWSTR v32; // [rsp+70h] [rbp-48h] BYREF
  PCWSTR v33; // [rsp+78h] [rbp-40h] BYREF
  PCWSTR v34; // [rsp+80h] [rbp-38h] BYREF
  __int64 v35; // [rsp+88h] [rbp-30h] BYREF
  __int64 v36[5]; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  unsigned int v38; // [rsp+C0h] [rbp+8h] BYREF
  HSTRING v39; // [rsp+D0h] [rbp+18h] BYREF
  HSTRING v40; // [rsp+D8h] [rbp+20h] BYREF

  v36[1] = -2LL;
  string = 0LL;
  v4 = *(__int64 (**)(void))(*(_QWORD *)a1 + 48LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  try
  {
    v5 = v4();
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x47,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
        (const char *)(unsigned int)v5);
    }
    else
    {
      v28 = 0LL;
      v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 176LL);
      WindowsDeleteString(0LL);
      v28 = 0LL;
      v7 = v6(a1, &v28);
      v8 = retaddr;
      if ( v7 >= 0 )
      {
        v27 = 0LL;
        v9 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 192LL);
        WindowsDeleteString(0LL);
        v27 = 0LL;
        v10 = v9(a1, &v27);
        v11 = retaddr;
        if ( v10 >= 0 )
        {
          v26 = 0LL;
          v12 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 96LL);
          WindowsDeleteString(0LL);
          v26 = 0LL;
          v13 = v12(a1, &v26);
          v14 = retaddr;
          if ( v13 >= 0 )
          {
            v40 = 0LL;
            v15 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 144LL);
            WindowsDeleteString(0LL);
            v40 = 0LL;
            v16 = v15(a1, &v40);
            v17 = retaddr;
            if ( v16 >= 0 )
            {
              v39 = 0LL;
              v18 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 128LL);
              WindowsDeleteString(0LL);
              v39 = 0LL;
              v19 = v18(a1, &v39);
              v20 = retaddr;
              if ( v19 >= 0 )
              {
                v21 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, &v38);
                v22 = retaddr;
                if ( v21 >= 0 )
                {
                  v23 = Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v38);
                  Windows::Services::TargetedContent::Internal::GetNameForTrigger(&v30, a1);
                  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
                  WindowsGetStringRawBuffer(v39, 0LL);
                  WindowsGetStringRawBuffer(v40, 0LL);
                  v32 = WindowsGetStringRawBuffer(v26, 0LL);
                  v33 = WindowsGetStringRawBuffer(v27, 0LL);
                  v34 = WindowsGetStringRawBuffer(v28, 0LL);
                  v36[0] = (__int64)WindowsGetStringRawBuffer(v30, 0LL);
                  v35 = v23;
                  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerRegisterActivity::TriggerRegistrationFailed<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &>(
                    v36,
                    &v35,
                    (__int64 *)&v34,
                    (__int64 *)&v33,
                    (__int64 *)&v32,
                    (__int64 *)&StringRawBuffer,
                    **(_QWORD **)(a2 + 8) + 8LL);
                  WindowsDeleteString(v30);
                  v30 = 0LL;
                  WindowsDeleteString(v39);
                  v39 = 0LL;
                  WindowsDeleteString(v40);
                  v40 = 0LL;
                  WindowsDeleteString(v26);
                  v26 = 0LL;
                  WindowsDeleteString(v27);
                  v27 = 0LL;
                  WindowsDeleteString(v28);
                  v28 = 0LL;
                  WindowsDeleteString(string);
                  return 0LL;
                }
LABEL_16:
                wil::details::in1diag3::Throw_Hr(
                  v22,
                  (void *)0x53,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                  (const char *)(unsigned int)v21);
                JUMPOUT(0x18006BFF5LL);
              }
LABEL_15:
              wil::details::in1diag3::Throw_Hr(
                v20,
                (void *)0x51,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                (const char *)(unsigned int)v19);
              goto LABEL_16;
            }
LABEL_14:
            wil::details::in1diag3::Throw_Hr(
              v17,
              (void *)0x4F,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
              (const char *)(unsigned int)v16);
            goto LABEL_15;
          }
LABEL_13:
          wil::details::in1diag3::Throw_Hr(
            v14,
            (void *)0x4D,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
            (const char *)(unsigned int)v13);
          goto LABEL_14;
        }
LABEL_12:
        wil::details::in1diag3::Throw_Hr(
          v11,
          (void *)0x4B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
          (const char *)(unsigned int)v10);
        goto LABEL_13;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x49,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_12;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x62,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                           v24);
  }
  return result;
}
