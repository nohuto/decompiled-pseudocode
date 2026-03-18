/*
 * XREFs of FlushAndWait @ 0x18020F888
 * Callers:
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x18020EFD0 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180031EA8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18003506C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E1920 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18014E4E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18014E98C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18014FBE8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall FlushAndWait(__int64 *a1)
{
  __int64 v1; // rax
  __int64 (__fastcall *v3)(__int64 *, GUID *, __int64 *); // rbx
  int v4; // eax
  int LastErrorFailHr; // edi
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, _QWORD, _QWORD, GUID *, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rdx
  HANDLE v10; // rbx
  __int64 v11; // rdx
  wil::details *v12; // rcx
  wil::details *Event; // rdi
  __int64 v14; // r8
  const char *v15; // r9
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  void *v19; // rdx
  DWORD v20; // eax
  const char *v21; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  __int64 v24; // [rsp+50h] [rbp+20h] BYREF
  __int64 v25; // [rsp+58h] [rbp+28h] BYREF
  HANDLE hHandle; // [rsp+60h] [rbp+30h] BYREF

  v1 = *a1;
  v25 = 0LL;
  v3 = *(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(v1 + 56);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v25);
  v4 = v3(a1, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, &v25);
  LastErrorFailHr = v4;
  if ( v4 >= 0 )
  {
    v6 = v25;
    v24 = 0LL;
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, __int64 *))(*(_QWORD *)v25 + 288LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v24);
    v8 = v7(v6, 0LL, 0LL, &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76, &v24);
    LastErrorFailHr = v8;
    if ( v8 < 0 )
    {
      v9 = 249LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
        (const char *)(unsigned int)v8);
LABEL_22:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v24);
      goto LABEL_23;
    }
    v8 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64))(*a1 + 112))(a1, v24, 1LL);
    LastErrorFailHr = v8;
    if ( v8 < 0 )
    {
      v9 = 250LL;
      goto LABEL_7;
    }
    v10 = 0LL;
    hHandle = 0LL;
    Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (wil::details **)&hHandle,
        Event);
      v10 = hHandle;
      LastErrorFailHr = 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v12, v11, v14, v15);
    }
    if ( LastErrorFailHr >= 0 )
    {
      v18 = (*(__int64 (__fastcall **)(__int64, __int64, HANDLE))(*(_QWORD *)v24 + 72LL))(v24, 1LL, v10);
      LastErrorFailHr = v18;
      if ( v18 >= 0 )
      {
        v20 = WaitForSingleObjectEx(v10, 0xFFFFFFFF, 0);
        if ( v20 == 258 )
        {
          LastErrorFailHr = wil::details::in1diag3::Return_GetLastError(
                              retaddr,
                              (void *)0x100,
                              (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
                              v21);
        }
        else
        {
          if ( v20 )
          {
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0xA09,
              (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
              v21);
            __debugbreak();
          }
          LastErrorFailHr = 0;
        }
        goto LABEL_21;
      }
      v16 = (unsigned int)v18;
      v17 = 255LL;
    }
    else
    {
      v16 = (unsigned int)LastErrorFailHr;
      v17 = 254LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
      (const char *)v16);
LABEL_21:
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
      (wil::details **)&hHandle,
      v19);
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF4,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\common\\surfacedebug.cpp",
    (const char *)(unsigned int)v4);
LABEL_23:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v25);
  return (unsigned int)LastErrorFailHr;
}
