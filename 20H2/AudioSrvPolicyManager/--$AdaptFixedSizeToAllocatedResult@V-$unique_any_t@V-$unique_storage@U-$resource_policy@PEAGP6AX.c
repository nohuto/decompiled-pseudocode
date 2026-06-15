/*
 * XREFs of ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x180036DF4
 * Callers:
 *     ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180038278 (-GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180003B7C (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002B300 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18002B868 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18002B8A0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
        void **a1,
        __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  const char *v6; // r9
  __int64 v7; // rdx
  void **v9; // rax
  void *v10; // rbx
  unsigned int v11; // edi
  __int64 v12; // rdx
  void **v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  const char *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx
  LPVOID v19; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C8h] BYREF
  LPVOID v21; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID v22; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v23[2]; // [rsp+58h] [rbp-B0h] BYREF
  _WORD v24[256]; // [rsp+68h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  v23[1] = -2LL;
  v21 = 0LL;
  v24[0] = 0;
  v22 = 0LL;
  v19 = &v22;
  v23[0] = 256LL;
  pv = v24;
  v4 = *(_QWORD *)(a2 + 112);
  if ( !v4 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, LPVOID *, _QWORD *, LPVOID *))(*(_QWORD *)v4 + 32LL))(v4, &pv, v23, &v19);
  if ( v5 < 0 )
  {
    v7 = *(_QWORD *)(a2 + 112);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 24LL))(*(_QWORD *)(a2 + 112));
    return (unsigned int)v5;
  }
  if ( (unsigned __int64)v22 > 0x100 )
  {
    v13 = (void **)wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                     &pv,
                     0LL,
                     (unsigned __int64)v22 - 1,
                     v6);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      &v21,
      v13);
    if ( pv )
      CoTaskMemFree(pv);
    v10 = v21;
    v11 = v21 == 0LL ? 0x8007000E : 0;
    if ( !v21 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x75,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        (const char *)v11);
LABEL_11:
      v12 = *(_QWORD *)(a2 + 112);
      if ( v12 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 24LL))(*(_QWORD *)(a2 + 112));
      return v11;
    }
    v19 = 0LL;
    pv = &v19;
    v23[0] = v22;
    v14 = *(_QWORD *)(a2 + 112);
    if ( !v14 )
      wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
    v15 = (*(__int64 (__fastcall **)(__int64, LPVOID *, _QWORD *, LPVOID *))(*(_QWORD *)v14 + 32LL))(
            v14,
            &v21,
            v23,
            &pv);
    v11 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x78,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        (const char *)(unsigned int)v15);
      CoTaskMemFree(v10);
      v17 = *(_QWORD *)(a2 + 112);
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
      return v11;
    }
    if ( v22 != v19 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x7B,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        v16);
      __debugbreak();
    }
  }
  else
  {
    v9 = (void **)wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                    &pv,
                    (char *)v24,
                    (unsigned __int64)v22 - 1,
                    v6);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      &v21,
      v9);
    if ( pv )
      CoTaskMemFree(pv);
    v10 = v21;
    v11 = v21 == 0LL ? 0x8007000E : 0;
    if ( !v21 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        (const char *)v11);
      goto LABEL_11;
    }
  }
  v19 = v10;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
    a1,
    &v19);
  if ( v19 )
    CoTaskMemFree(v19);
  v18 = *(_QWORD *)(a2 + 112);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18);
  return 0LL;
}
