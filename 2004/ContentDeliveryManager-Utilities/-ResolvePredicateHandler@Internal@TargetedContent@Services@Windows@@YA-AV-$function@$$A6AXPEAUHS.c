/*
 * XREFs of ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180072654
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800729C0 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x1800757F4 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::ResolvePredicateHandler(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  _QWORD *v5; // rax
  __int64 v6; // rax
  char *v7; // rcx
  _QWORD *v8; // rdx
  int v9; // eax
  _QWORD *v10; // rax
  void *v11; // rdx
  _QWORD *v12; // rcx
  __int64 (__fastcall ***v13)(_QWORD, _QWORD); // rcx
  _QWORD *v14; // rdx
  _QWORD *v15; // r8
  _QWORD *v16; // rdx
  _QWORD *v17; // rdx
  int v19; // [rsp+24h] [rbp-4Ch] BYREF
  int v20; // [rsp+28h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h]
  _QWORD *v22; // [rsp+38h] [rbp-38h]
  _QWORD v23[3]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v24; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v21 = -2LL;
  v22 = a1;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 112LL))(a2, &v19);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x176,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x18007289ALL);
  }
  v5 = &unk_180197270;
  while ( *(_DWORD *)v5 != v19 )
  {
    v5 += 5;
    if ( v5 == (_QWORD *)&unk_180197310 )
    {
      v6 = 0LL;
      goto LABEL_12;
    }
  }
  a1[3] = 0LL;
  v7 = (char *)v5[4];
  if ( v7 )
  {
    if ( v7 == (char *)(v5 + 1) )
      v8 = a1;
    else
      v8 = 0LL;
    v6 = (**(__int64 (__fastcall ***)(char *, _QWORD *))v7)(v7, v8);
  }
  else
  {
    v6 = 0LL;
  }
LABEL_12:
  a1[3] = v6;
  if ( !a1[3] )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v20);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x189,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
    v10 = &unk_180197310;
    while ( *(_DWORD *)v10 != v20 )
    {
      v10 += 5;
      v11 = &unk_1801973B0;
      if ( v10 == (_QWORD *)&unk_1801973B0 )
      {
        v23[0] = &std::_Func_impl<std::_Callable_fun<void (*const)(HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *),0>,std::allocator<std::_Func_class<void,HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,void,HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
        v23[1] = Windows::Services::TargetedContent::Internal::DefaultBiPredicateCreator;
        v12 = v23;
        v24 = v23;
        goto LABEL_24;
      }
    }
    v11 = v10 + 1;
    v24 = 0LL;
    v13 = (__int64 (__fastcall ***)(_QWORD, _QWORD))v10[4];
    if ( v13 )
    {
      if ( v13 == v11 )
        v14 = v23;
      else
        v14 = 0LL;
      v24 = (_QWORD *)(**v13)(v13, v14);
      v12 = v24;
    }
    else
    {
      v12 = 0LL;
      v24 = 0LL;
    }
LABEL_24:
    if ( a1 == v23 )
      goto LABEL_34;
    v15 = (_QWORD *)a1[3];
    if ( v15 )
    {
      LOBYTE(v11) = v15 != a1;
      (*(void (__fastcall **)(_QWORD, void *))(*v15 + 32LL))(a1[3], v11);
      a1[3] = 0LL;
      v12 = v24;
    }
    if ( !v12 )
    {
      a1[3] = 0LL;
      goto LABEL_34;
    }
    if ( v12 == v23 )
    {
      a1[3] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v12 + 8LL))(v12, a1);
      v12 = v24;
      if ( !v24 )
        goto LABEL_34;
      v16 = v23;
      LOBYTE(v16) = v24 != v23;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v24 + 32LL))(v24, v16);
    }
    else
    {
      a1[3] = v12;
    }
    v12 = 0LL;
    v24 = 0LL;
LABEL_34:
    if ( v12 )
    {
      v17 = v23;
      LOBYTE(v17) = v12 != v23;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v12 + 32LL))(v12, v17);
    }
  }
  return a1;
}
