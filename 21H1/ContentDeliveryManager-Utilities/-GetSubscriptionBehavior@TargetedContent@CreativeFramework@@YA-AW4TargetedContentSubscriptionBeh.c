/*
 * XREFs of ?GetSubscriptionBehavior@TargetedContent@CreativeFramework@@YA?AW4TargetedContentSubscriptionBehavior@12@PEBG@Z @ 0x180029E80
 * Callers:
 *     ?GetOrCreateBaseEventForPlacementId@?$GenericOffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@CA?AV?$shared_ptr@VBaseScenarioEvents@details@Health@CreativeFramework@@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@6@@Z @ 0x18003D154 (-GetOrCreateBaseEventForPlacementId@-$GenericOffersHealthTracker@$0L@$00@details@Health@Creative.c)
 * Callees:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_e475c25afe6ff700c51d270fc6441ea7_@@$0A@@std@@V?$allocator@V?$_Func_class@_NAEBUTargetedContentSubscriptionConfiguration@TargetedContent@CreativeFramework@@U_Nil@std@@U45@U45@U45@U45@U45@@std@@@2@_NAEBUTargetedContentSubscriptionConfiguration@TargetedContent@CreativeFramework@@U_Nil@2@U72@U72@U72@U72@U72@@std@@UEAA_NAEBUTargetedContentSubscriptionConfiguration@TargetedContent@CreativeFramework@@@Z @ 0x18003F190 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_e475c25afe6ff700c51d270fc6441ea7_@@$0A@@std@@V-.c)
 *     ??2@YAPEAX_K@Z @ 0x1800ADD58 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800ADF48 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800ADF70 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreativeFramework::TargetedContent::GetSubscriptionBehavior(__int64 a1)
{
  char *v1; // rax
  void **v2; // rbx
  char *v3; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+28h] [rbp-19h] BYREF
  __int128 v6; // [rsp+30h] [rbp-11h]
  __int64 v7; // [rsp+40h] [rbp-1h]
  __int128 v8; // [rsp+48h] [rbp+7h] BYREF
  __int128 v9; // [rsp+58h] [rbp+17h]
  __int64 v10; // [rsp+68h] [rbp+27h]
  char v11; // [rsp+70h] [rbp+2Fh] BYREF
  char *v12; // [rsp+88h] [rbp+47h]

  v7 = -2LL;
  v5 = a1;
  v8 = *(_OWORD *)&off_1800E7788;
  v9 = xmmword_1800E7798;
  v10 = 3600LL;
  *(_QWORD *)&v6 = &v5;
  *((_QWORD *)&v6 + 1) = &v8;
  v12 = 0LL;
  v1 = (char *)operator new(0x20uLL);
  if ( !v1 )
    std::_Xbad_alloc();
  *(_QWORD *)v1 = &std::_Func_impl<std::_Callable_obj<_lambda_e475c25afe6ff700c51d270fc6441ea7_,0>,std::allocator<std::_Func_class<bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
  *(_OWORD *)(v1 + 8) = v6;
  v12 = v1;
  v2 = (void **)off_1800DC400;
  while ( 1 )
  {
    if ( !v1 )
      std::_Xbad_function_call();
    if ( !(unsigned __int8)std::_Func_impl<std::_Callable_obj<_lambda_e475c25afe6ff700c51d270fc6441ea7_,0>,std::allocator<std::_Func_class<bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,bool,CreativeFramework::TargetedContent::TargetedContentSubscriptionConfiguration const &,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::_Do_call(
                             v1,
                             v2) )
      break;
    v2 += 5;
    if ( v2 == &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,ContentManagement::ICreativeEventReportedCache>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IWeakReferenceSource,ContentManagement::ICreativeEventReportedCache>'} )
      break;
    v1 = v12;
  }
  v3 = v12;
  if ( v12 )
  {
    (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v12 + 40LL))(v12, 0LL);
    if ( v3 != &v11 )
      operator delete(v3);
  }
  result = (unsigned int)v9;
  if ( (v9 & 0x80) != 0 )
    return (unsigned int)v9 | 1;
  return result;
}
