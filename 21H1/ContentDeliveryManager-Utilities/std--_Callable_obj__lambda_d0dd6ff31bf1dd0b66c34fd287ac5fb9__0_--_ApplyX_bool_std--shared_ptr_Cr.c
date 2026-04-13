/*
 * XREFs of std::_Callable_obj__lambda_d0dd6ff31bf1dd0b66c34fd287ac5fb9__0_::_ApplyX_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_ @ 0x180079870
 * Callers:
 *     std::_Func_impl_std::_Callable_obj__lambda_d0dd6ff31bf1dd0b66c34fd287ac5fb9__0__std::allocator_std::_Func_class_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x180079110 (std--_Func_impl_std--_Callable_obj__lambda_d0dd6ff31bf1dd0b66c34fd287ac5fb9__0__std_ea_180079110.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentTriggerState@1234@PEB_W@Z @ 0x18007184C (-ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA-AW4TargetedContentTri.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x180072858 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x180073F74 (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADD58 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800ADF48 (-_Xbad_alloc@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall std::_Callable_obj__lambda_d0dd6ff31bf1dd0b66c34fd287ac5fb9__0_::_ApplyX_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v3; // rcx
  HSTRING *v5; // r9
  HSTRING *v6; // r9
  const WCHAR *StringRawBuffer; // rax
  __int64 v8; // rdx
  char *v9; // rax
  char *v10; // rax
  volatile signed __int32 *v11; // rdi
  __int128 v13; // [rsp+30h] [rbp-19h] BYREF
  _BYTE v14[24]; // [rsp+40h] [rbp-9h] BYREF
  char *v15; // [rsp+58h] [rbp+Fh]
  __int128 v16; // [rsp+60h] [rbp+17h]
  __int128 v17; // [rsp+70h] [rbp+27h]
  __int128 v18; // [rsp+80h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]
  int v20; // [rsp+B0h] [rbp+67h] BYREF
  HSTRING v21; // [rsp+B8h] [rbp+6Fh] BYREF
  HSTRING string; // [rsp+C0h] [rbp+77h] BYREF
  __int128 *v23; // [rsp+C8h] [rbp+7Fh]

  *((_QWORD *)&v3 + 1) = a3;
  v13 = 0LL;
  if ( &v13 != (__int128 *)a2 )
  {
    *((_QWORD *)&v13 + 1) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)&v13 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v23 = &v13;
  v21 = 0LL;
  WindowsDeleteString(0LL);
  v21 = 0LL;
  if ( Windows::Services::TargetedContent::Internal::GetStringValue(
         *((Windows::Services::TargetedContent::Internal **)&v3 + 1),
         (struct CreativeFramework::Triggers::PropertySetHelper *)L"StateTransitions",
         (const wchar_t *)&v21,
         v5) )
  {
    string = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
            *((Windows::Services::TargetedContent::Internal **)&v3 + 1),
            (struct CreativeFramework::Triggers::PropertySetHelper *)L"triggerState",
            (const wchar_t *)&string,
            v6) )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x23F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)0x80070490LL);
      JUMPOUT(0x180079A6CLL);
    }
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v20 = Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(StringRawBuffer);
    v8 = a1[2];
    *(_QWORD *)&v3 = a1[1];
    *(_QWORD *)&v16 = *a1;
    *((_QWORD *)&v16 + 1) = &v20;
    v17 = v3;
    *(_QWORD *)&v18 = v8;
    *((_QWORD *)&v18 + 1) = &v13;
    v15 = 0LL;
    v9 = (char *)operator new(0x40uLL);
    if ( !v9 )
      std::_Xbad_alloc();
    *(_QWORD *)v9 = off_1800E52A0;
    *(_OWORD *)(v9 + 8) = v16;
    *(_OWORD *)(v9 + 24) = v17;
    *(_OWORD *)(v9 + 40) = v18;
    v15 = v9;
    v10 = (char *)WindowsGetStringRawBuffer(v21, 0LL);
    Windows::Services::TargetedContent::Internal::EnumerateTriggerStateTransitions(v10, (__int64)v14);
    WindowsDeleteString(string);
    string = 0LL;
  }
  WindowsDeleteString(v21);
  v21 = 0LL;
  v11 = (volatile signed __int32 *)*((_QWORD *)&v13 + 1);
  if ( *((_QWORD *)&v13 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v13 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( !_InterlockedDecrement(v11 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return 1;
}
