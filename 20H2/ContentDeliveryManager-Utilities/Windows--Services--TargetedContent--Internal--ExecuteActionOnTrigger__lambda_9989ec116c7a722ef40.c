/*
 * XREFs of Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_9989ec116c7a722ef409e952aab4eb08___ @ 0x18006D504
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_311bfc761077399e03144c1d22cc53cd__0__std::allocator_std::_Func_class_void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18006FE90 (std--_Func_impl_std--_Callable_obj__lambda_311bfc761077399e03144c1d22cc53cd__0__std_ea_18006FE90.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$TriggerStateTransition@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WPEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W000$$QEAPEB_W1PEBD@Z @ 0x18006D3F4 (--$TriggerStateTransition@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WPEB_WPEB_W@ContentDeliveryManagerTelem.c)
 *     ?ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnownTrigger@1234@@Z @ 0x180071150 (-ResolveNameFromTrigger@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentKnown.c)
 *     ?GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180071308 (-GetNameForTrigger@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsof.c)
 *     ?ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContentTriggerState@1234@@Z @ 0x180073A04 (-ResolveNameFromTriggerState@Internal@TargetedContent@Services@Windows@@YAPEB_WW4TargetedContent.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_9989ec116c7a722ef409e952aab4eb08___(
        __int64 a1,
        unsigned int **a2)
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
  __int64 v24; // rbx
  const char *v25; // r9
  __int64 result; // rax
  HSTRING v27; // [rsp+40h] [rbp-78h] BYREF
  HSTRING v28; // [rsp+48h] [rbp-70h] BYREF
  HSTRING v29; // [rsp+50h] [rbp-68h] BYREF
  HSTRING string; // [rsp+58h] [rbp-60h]
  HSTRING v31; // [rsp+60h] [rbp-58h] BYREF
  __int64 v32; // [rsp+68h] [rbp-50h] BYREF
  __int64 v33; // [rsp+70h] [rbp-48h] BYREF
  PCWSTR StringRawBuffer; // [rsp+78h] [rbp-40h] BYREF
  PCWSTR v35; // [rsp+80h] [rbp-38h] BYREF
  __int64 v36; // [rsp+88h] [rbp-30h] BYREF
  __int64 v37[5]; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  unsigned int v39; // [rsp+C0h] [rbp+8h] BYREF
  HSTRING v40; // [rsp+D0h] [rbp+18h] BYREF
  HSTRING v41; // [rsp+D8h] [rbp+20h] BYREF

  v37[1] = -2LL;
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
      v29 = 0LL;
      v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 176LL);
      WindowsDeleteString(0LL);
      v29 = 0LL;
      v7 = v6(a1, &v29);
      v8 = retaddr;
      if ( v7 >= 0 )
      {
        v28 = 0LL;
        v9 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 192LL);
        WindowsDeleteString(0LL);
        v28 = 0LL;
        v10 = v9(a1, &v28);
        v11 = retaddr;
        if ( v10 >= 0 )
        {
          v27 = 0LL;
          v12 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 96LL);
          WindowsDeleteString(0LL);
          v27 = 0LL;
          v13 = v12(a1, &v27);
          v14 = retaddr;
          if ( v13 >= 0 )
          {
            v41 = 0LL;
            v15 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 144LL);
            WindowsDeleteString(0LL);
            v41 = 0LL;
            v16 = v15(a1, &v41);
            v17 = retaddr;
            if ( v16 >= 0 )
            {
              v40 = 0LL;
              v18 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a1 + 128LL);
              WindowsDeleteString(0LL);
              v40 = 0LL;
              v19 = v18(a1, &v40);
              v20 = retaddr;
              if ( v19 >= 0 )
              {
                v21 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 80LL))(a1, &v39);
                v22 = retaddr;
                if ( v21 >= 0 )
                {
                  v23 = Windows::Services::TargetedContent::Internal::ResolveNameFromTrigger(v39);
                  Windows::Services::TargetedContent::Internal::GetNameForTrigger(&v31, a1);
                  WindowsGetStringRawBuffer(string, 0LL);
                  WindowsGetStringRawBuffer(v40, 0LL);
                  WindowsGetStringRawBuffer(v41, 0LL);
                  WindowsGetStringRawBuffer(v27, 0LL);
                  StringRawBuffer = WindowsGetStringRawBuffer(v28, 0LL);
                  v35 = WindowsGetStringRawBuffer(v29, 0LL);
                  v37[0] = (__int64)WindowsGetStringRawBuffer(v31, 0LL);
                  v36 = v23;
                  v24 = *(_QWORD *)a2[2] + 8LL;
                  v32 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(*a2[1]);
                  v33 = Windows::Services::TargetedContent::Internal::ResolveNameFromTriggerState(**a2);
                  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerStateTransition<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const *,wchar_t const *>(
                    v37,
                    &v36,
                    (__int64 *)&v35,
                    (__int64 *)&StringRawBuffer,
                    &v33,
                    &v32,
                    v24);
                  WindowsDeleteString(v31);
                  v31 = 0LL;
                  WindowsDeleteString(v40);
                  v40 = 0LL;
                  WindowsDeleteString(v41);
                  v41 = 0LL;
                  WindowsDeleteString(v27);
                  v27 = 0LL;
                  WindowsDeleteString(v28);
                  v28 = 0LL;
                  WindowsDeleteString(v29);
                  v29 = 0LL;
                  WindowsDeleteString(string);
                  return 0LL;
                }
LABEL_16:
                wil::details::in1diag3::Throw_Hr(
                  v22,
                  (void *)0x53,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
                  (const char *)(unsigned int)v21);
                JUMPOUT(0x18006D968LL);
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
                           v25);
  }
  return result;
}
