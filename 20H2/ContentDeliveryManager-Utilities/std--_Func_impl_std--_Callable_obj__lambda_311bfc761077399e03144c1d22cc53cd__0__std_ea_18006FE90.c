/*
 * XREFs of std::_Func_impl_std::_Callable_obj__lambda_311bfc761077399e03144c1d22cc53cd__0__std::allocator_std::_Func_class_void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x18006FE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x1800333E4 (--0-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_9989ec116c7a722ef409e952aab4eb08___ @ 0x18006D504 (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_9989ec116c7a722ef40.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800B0180 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::_Func_impl_std::_Callable_obj__lambda_311bfc761077399e03144c1d22cc53cd__0__std::allocator_std::_Func_class_void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil____void_Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal___enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_enum_Windows::Services::TargetedContent::Internal::TargetedContentTriggerState_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call(
        __int64 a1,
        __int64 *a2,
        int *a3,
        int *a4)
{
  int v5; // r10d
  int v6; // r9d
  __int64 v7; // rsi
  _DWORD *v8; // rax
  unsigned int *v9; // rax
  unsigned int *v10; // rbx
  volatile signed __int32 *v11; // rbx
  unsigned int *v12; // rax
  __int64 result; // rax
  _QWORD *v14; // rdx
  char *v15; // rcx
  _QWORD *v16; // rdx
  int v17; // [rsp+28h] [rbp-49h] BYREF
  int v18; // [rsp+30h] [rbp-41h] BYREF
  __int64 v19; // [rsp+38h] [rbp-39h] BYREF
  unsigned int *v20[6]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v21; // [rsp+78h] [rbp+7h] BYREF
  _QWORD v22[3]; // [rsp+88h] [rbp+17h] BYREF
  _QWORD *v23; // [rsp+A0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v20[4] = (unsigned int *)-2LL;
  v5 = *a4;
  v18 = *a4;
  v6 = *a3;
  v17 = *a3;
  v7 = *a2;
  v8 = &unk_1801971D0;
  while ( *v8 != v6 || v8[1] != v5 )
  {
    v8 += 10;
    if ( v8 == (_DWORD *)&unk_180197270 )
    {
      v22[0] = &std::_Func_impl<std::_Callable_fun<void (*const)(Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>),0>,std::allocator<std::_Func_class<void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,void,Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
      v22[1] = Windows::Services::TargetedContent::Internal::NoopTriggerTransition;
      v23 = v22;
      goto LABEL_6;
    }
  }
  v23 = 0LL;
  v15 = (char *)*((_QWORD *)v8 + 4);
  if ( v15 )
  {
    if ( v15 == (char *)(v8 + 2) )
      v16 = v22;
    else
      v16 = 0LL;
    v23 = (_QWORD *)(**(__int64 (__fastcall ***)(char *, _QWORD *))v15)(v15, v16);
  }
  else
  {
    v23 = 0LL;
  }
LABEL_6:
  v9 = (unsigned int *)std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>(
                         &v21,
                         *(__int64 **)(a1 + 8));
  v10 = v9;
  v20[5] = v9;
  v19 = v7;
  if ( !v23 )
LABEL_22:
    std::_Xbad_function_call();
  (*(void (__fastcall **)(_QWORD *, __int64 *, unsigned int *))(*v23 + 16LL))(v23, &v19, v9);
  v11 = (volatile signed __int32 *)*((_QWORD *)v10 + 1);
  if ( v11 )
  {
    if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  v12 = *(unsigned int **)(a1 + 8);
  v20[0] = (unsigned int *)&v17;
  v20[1] = (unsigned int *)&v18;
  v20[2] = v12;
  result = Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_9989ec116c7a722ef409e952aab4eb08___(
             v7,
             v20);
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1A2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanager.cpp",
      (const char *)(unsigned int)result);
    goto LABEL_22;
  }
  if ( v23 )
  {
    v14 = v22;
    LOBYTE(v14) = v23 != v22;
    return (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v23 + 32LL))(v23, v14);
  }
  return result;
}
