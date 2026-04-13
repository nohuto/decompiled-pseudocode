/*
 * XREFs of ?RuntimeClassInitialize@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@QEAAJXZ @ 0x1800425CC
 * Callers:
 *     ??$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubscriptionManager@234@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UISubscriptionManager@Internal@TargetedContent@ContentManagement@@@WRL@Microsoft@@@012@@Z @ 0x1800464AC (--$MakeAndInitialize@VSubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@UISubs.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x180040444 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x180046A98 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RuntimeClassInitialize(
        ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl *this,
        __int64 a2,
        __int64 a3)
{
  int v4; // eax
  struct wil::details::wnf_subscription_state_base *v5; // rdx
  wil::details *v6; // rbx
  wil::details **v7; // rsi
  wil::details *v8; // r14
  DWORD LastError; // edi
  struct wil::details::wnf_subscription_state_base *v10; // rdx
  wil::details *v12[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v13[8]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v14[13]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD *v15; // [rsp+A0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v12[1] = (wil::details *)-2LL;
  v14[0] = off_1800DDBA0;
  v14[1] = this;
  v15 = v14;
  v4 = wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(this, v13, a3, v12);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x424,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x1800426EFLL);
  }
  v6 = v12[0];
  v7 = (wil::details **)((char *)this + 72);
  if ( v7 != v12 )
  {
    v8 = *v7;
    if ( *v7 )
    {
      LastError = GetLastError();
      wil::details::delete_wnf_subscription_state(v8, v10);
      SetLastError(LastError);
    }
    *v7 = v6;
    v6 = 0LL;
  }
  if ( v6 )
    wil::details::delete_wnf_subscription_state(v6, v5);
  if ( v15 )
    (*(void (__fastcall **)(_QWORD *))(*v15 + 24LL))(v15);
  return 0LL;
}
