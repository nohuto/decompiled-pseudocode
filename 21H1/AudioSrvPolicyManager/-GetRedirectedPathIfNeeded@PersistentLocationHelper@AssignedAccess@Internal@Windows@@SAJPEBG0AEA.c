/*
 * XREFs of ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18003DB38
 * Callers:
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x18003D2F0 (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 *     ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ @ 0x18003E320 (-Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003F90 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180030C00 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180031168 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x18003C6B4 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::AssignedAccess::PersistentLocationHelper::GetRedirectedPathIfNeeded(
        char *a1,
        __int64 a2,
        void **a3,
        const char *a4)
{
  int v6; // eax
  const char *v7; // r9
  unsigned int v8; // edi
  void *v9; // rbx
  __int128 v10; // [rsp+28h] [rbp-49h]
  _BYTE v11[8]; // [rsp+40h] [rbp-31h] BYREF
  void **v12; // [rsp+48h] [rbp-29h] BYREF
  __int128 v13; // [rsp+50h] [rbp-21h]
  void ***v14; // [rsp+B0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  char *v16; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v17; // [rsp+E0h] [rbp+6Fh] BYREF
  LPVOID pv; // [rsp+F0h] [rbp+7Fh] BYREF

  v17 = a2;
  v16 = a1;
  if ( a2 )
  {
    pv = 0LL;
    *(_QWORD *)&v10 = &v16;
    *((_QWORD *)&v10 + 1) = &v17;
    v12 = &wistd::__function::__func<_lambda_c77ebd57e75c5492ee747e3492d1d178_,long (unsigned short *,unsigned __int64,unsigned __int64 *)>::`vftable';
    v13 = v10;
    v14 = &v12;
    v6 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
           &pv,
           (__int64)v11);
    v8 = v6;
    if ( v6 >= 0 )
    {
      v9 = 0LL;
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &pv,
        (char *)pv,
        0xFFFFFFFFFFFFFFFFuLL,
        v7);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
        a3,
        &pv);
      if ( pv )
        CoTaskMemFree(pv);
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F,
        (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\persistentlocationhelper.h",
        (const char *)(unsigned int)v6);
      v9 = pv;
    }
    if ( v9 )
      CoTaskMemFree(v9);
    return v8;
  }
  else
  {
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      a1,
      0xFFFFFFFFFFFFFFFFuLL,
      a4);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      a3,
      &pv);
    if ( pv )
      CoTaskMemFree(pv);
    return 0LL;
  }
}
