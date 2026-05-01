/*
 * XREFs of ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180478EA4
 * Callers:
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x1804790B4 (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 *     _lambda_0af0b81a69df187aa7d3da55687287d8_::operator() @ 0x18047971C (_lambda_0af0b81a69df187aa7d3da55687287d8_--operator().c)
 *     _lambda_e332a86548024bbd20a61c99a01105df_::operator() @ 0x180479B60 (_lambda_e332a86548024bbd20a61c99a01105df_--operator().c)
 * Callees:
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x18001622C (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800163A0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800163E8 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::AssignedAccess::PersistentLocationHelper::GetRedirectedPathIfNeeded(
        char *a1,
        __int64 a2,
        void **a3,
        const char *a4)
{
  void *v5; // rcx
  int v7; // eax
  const char *v8; // r9
  unsigned int v9; // edi
  void *v10; // rbx
  void *v11; // rcx
  LPVOID pv; // [rsp+28h] [rbp-59h] BYREF
  LPVOID v13; // [rsp+30h] [rbp-51h] BYREF
  __int128 v14; // [rsp+38h] [rbp-49h]
  __int64 v15; // [rsp+48h] [rbp-39h]
  _BYTE v16[8]; // [rsp+50h] [rbp-31h] BYREF
  void **v17; // [rsp+58h] [rbp-29h] BYREF
  __int128 v18; // [rsp+60h] [rbp-21h]
  void ***v19; // [rsp+C0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  char *v21; // [rsp+E8h] [rbp+67h] BYREF
  __int64 v22; // [rsp+F0h] [rbp+6Fh] BYREF
  LPVOID v23; // [rsp+100h] [rbp+7Fh] BYREF

  v22 = a2;
  v21 = a1;
  v15 = -2LL;
  if ( a2 )
  {
    v23 = 0LL;
    *(_QWORD *)&v14 = &v21;
    *((_QWORD *)&v14 + 1) = &v22;
    v17 = &wistd::__function::__func<_lambda_c77ebd57e75c5492ee747e3492d1d178_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
    v18 = v14;
    v19 = &v17;
    v7 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
           &v23,
           (__int64)v16);
    v9 = v7;
    if ( v7 >= 0 )
    {
      v10 = 0LL;
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v13,
        (char *)v23,
        0xFFFFFFFFFFFFFFFFuLL,
        v8);
      if ( a3 == &v13 )
      {
        v11 = v13;
      }
      else
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          a3,
          v13);
        v11 = 0LL;
      }
      if ( v11 )
        CoTaskMemFree(v11);
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F,
        (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\persistentlocationhelper.h",
        (const char *)(unsigned int)v7);
      v10 = v23;
    }
    if ( v10 )
      CoTaskMemFree(v10);
    return v9;
  }
  else
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      a1,
      0xFFFFFFFFFFFFFFFFuLL,
      a4);
    if ( a3 == &pv )
    {
      v5 = pv;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        a3,
        pv);
      v5 = 0LL;
    }
    if ( v5 )
      CoTaskMemFree(v5);
    return 0LL;
  }
}
