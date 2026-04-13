/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_c61fab55ebd7ca4a424d2b4e7316a3f3__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18007B9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ @ 0x1800289C8 (--0TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@QEAAJPEAUHSTRING__@@W4TargetedContentTriggerState@2345@1@Z @ 0x180062E40 (-RuntimeClassInitialize@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Servi.c)
 *     ?InsertAtInternal@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@AEAAJIPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@_N@Z @ 0x180064DD0 (-InsertAtInternal@-$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Se.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD9C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

char __fastcall std::_Func_impl_std::_Callable_obj__lambda_c61fab55ebd7ca4a424d2b4e7316a3f3__0__std::allocator_std::_Func_class_bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_HSTRING_____enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call(
        __int64 a1,
        HSTRING *a2,
        int *a3,
        int *a4)
{
  HSTRING v4; // rbp
  int v6; // edi
  int v7; // esi
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *v8; // rax
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *v9; // rbx
  int v10; // edi
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v14; // [rsp+40h] [rbp+8h]

  v4 = *a2;
  v6 = *a4;
  v7 = *a3;
  v14 = 0LL;
  v8 = (Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *)operator new(
                                                                                                    0x50uLL,
                                                                                                    (const struct std::nothrow_t *)&std::nothrow);
  if ( !v8 )
  {
    v10 = -2147024882;
    goto LABEL_15;
  }
  v9 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::TargetedContentTriggerStateTransitionImpl(v8);
  v10 = Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::RuntimeClassInitialize(
          (__int64)v9,
          v4,
          v7,
          v6);
  if ( v10 >= 0 )
  {
    if ( v9 )
      (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *))(*(_QWORD *)v9 + 8LL))(v9);
    v14 = (__int64)v9;
    if ( v9 )
      (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = 0;
  }
  else if ( v9 )
  {
    (*(void (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( v10 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x166,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v10);
    JUMPOUT(0x18007BB07LL);
  }
  v11 = Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::InsertAtInternal(
          *(_QWORD *)(a1 + 8),
          0,
          v14,
          1);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x158,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  return 1;
}
