/*
 * XREFs of ?GetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x180031150
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18002B300 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18002B8A0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x1800328D0 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationSpecificEndpointInfo::GetPersistedDefaultAudioEndpoint(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char *a4)
{
  char *v8; // rdx
  LPVOID v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  char *v13; // rdx
  bool v14; // bl
  void *v15; // rdi
  DWORD LastError; // ebx
  int updated; // eax
  void *v18; // rcx
  LPVOID v19; // rax
  LPVOID v21; // [rsp+20h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]

  v21 = 0LL;
  if ( a2 == 1 )
  {
    v8 = *(char **)(a1 + 8LL * (int)a3 + 96);
    if ( !v8 )
      goto LABEL_21;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      v8,
      0xFFFFFFFFFFFFFFFFuLL,
      a4);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      &v21,
      &pv);
    if ( pv )
      CoTaskMemFree(pv);
    v9 = v21;
    if ( !v21 )
    {
      v10 = -2147024882;
      v11 = 188LL;
      v12 = 2147942414LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
        (const char *)v12);
      v18 = v21;
      goto LABEL_22;
    }
  }
  else
  {
    if ( a2 )
      goto LABEL_21;
    v13 = *(char **)(a1 + 8LL * (int)a3 + 168);
    if ( !v13 )
      goto LABEL_21;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      v13,
      0xFFFFFFFFFFFFFFFFuLL,
      a4);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator=(
      &v21,
      &pv);
    if ( pv )
      CoTaskMemFree(pv);
    v9 = v21;
    if ( !v21 )
    {
      v10 = -2147024882;
      v11 = 196LL;
      v12 = 2147942414LL;
      goto LABEL_20;
    }
  }
  pv = 0LL;
  v14 = (int)mmdDevGetMMDeviceFromInterfaceId(v9, &pv) >= 0;
  if ( pv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
  if ( !v14 )
  {
    v15 = v21;
    if ( v21 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v15);
      SetLastError(LastError);
    }
    v21 = 0LL;
    updated = ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId(a1, a2, a3, &v21);
    v10 = updated;
    if ( updated < 0 )
    {
      v12 = (unsigned int)updated;
      v11 = 214LL;
      goto LABEL_20;
    }
  }
LABEL_21:
  v19 = v21;
  v18 = 0LL;
  v21 = 0LL;
  v10 = 0;
  *(_QWORD *)a4 = v19;
LABEL_22:
  if ( v18 )
    CoTaskMemFree(v18);
  return v10;
}
