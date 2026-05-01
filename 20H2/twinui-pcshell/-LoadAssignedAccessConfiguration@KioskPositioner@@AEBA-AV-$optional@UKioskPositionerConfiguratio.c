/*
 * XREFs of ?LoadAssignedAccessConfiguration@KioskPositioner@@AEBA?AV?$optional@UKioskPositionerConfiguration@KioskPositioner@@@std@@XZ @ 0x1800B7E0C
 * Callers:
 *     ?RuntimeClassInitialize@KioskPositioner@@QEAAJXZ @ 0x1803DCBD4 (-RuntimeClassInitialize@KioskPositioner@@QEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000B910 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x1800B7814 (--$ActivateInstance@UIAssignedAccessManager@AssignedAccess@Internal@Windows@@@wil@@YA-AV-$com_pt.c)
 *     ?GetUserSidString@KioskPositioner@@AEBA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAX@Z @ 0x1800B7CC8 (-GetUserSidString@KioskPositioner@@AEBA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180138628 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x18019B9C4 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801AE1F0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDele.c)
 *     ??0Win32PrimaryAppProxy@@QEAA@PEBG@Z @ 0x1803D9E68 (--0Win32PrimaryAppProxy@@QEAA@PEBG@Z.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1803D9FA8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU.c)
 *     GetAssignedAccessTypeForUser @ 0x180477C04 (GetAssignedAccessTypeForUser.c)
 */

// Hidden C++ exception states: #wind=63
__int64 __fastcall KioskPositioner::LoadAssignedAccessConfiguration(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 (__fastcall *v6)(__int64, __int64 *); // rsi
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64 *); // rsi
  __int64 v11; // rax
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rsi
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 (__fastcall *v19)(__int64, _QWORD, __int64 *); // rsi
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  int v22; // eax
  __int64 (__fastcall *v23)(__int64, HSTRING *); // r14
  int v24; // eax
  const unsigned __int16 *StringRawBuffer; // rbx
  Win32PrimaryAppProxy *v26; // rax
  _BYTE v28[4]; // [rsp+20h] [rbp-59h] BYREF
  int v29; // [rsp+24h] [rbp-55h]
  __int64 v30; // [rsp+28h] [rbp-51h] BYREF
  __int64 v31; // [rsp+30h] [rbp-49h] BYREF
  __int64 v32; // [rsp+38h] [rbp-41h] BYREF
  Win32PrimaryAppProxy *v33; // [rsp+40h] [rbp-39h] BYREF
  __int64 v34; // [rsp+48h] [rbp-31h] BYREF
  HSTRING string; // [rsp+50h] [rbp-29h] BYREF
  __int64 v36; // [rsp+58h] [rbp-21h] BYREF
  Win32PrimaryAppProxy *v37; // [rsp+60h] [rbp-19h] BYREF
  int v38; // [rsp+68h] [rbp-11h] BYREF
  __int64 v39; // [rsp+70h] [rbp-9h]
  char v40; // [rsp+78h] [rbp-1h]
  __int64 v41; // [rsp+80h] [rbp+7h]
  _BYTE v42[24]; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v43; // [rsp+A0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v41 = a2;
  v29 = 0;
  KioskPositioner::GetUserSidString(a1, (LPWSTR *)&v33, -4LL);
  LOBYTE(v3) = 1;
  if ( (unsigned int)GetAssignedAccessTypeForUser(v33, v3) == 3 )
  {
    v39 = 0LL;
    v40 = 0;
    wil::ActivateInstance<Windows::Internal::AssignedAccess::IAssignedAccessManager>((__int64)&v36, v4, v5);
    v31 = 0LL;
    v6 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 56LL);
    v31 = 0LL;
    v7 = v6(v36, &v31);
    v8 = retaddr;
    if ( v7 >= 0 )
    {
      v30 = 0LL;
      v9 = v31;
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v31 + 72LL);
      v30 = 0LL;
      v37 = v33;
      v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v42, &v37);
      v12 = v10(v9, *(_QWORD *)(v11 + 24), &v30);
      v13 = retaddr;
      if ( v12 < 0 )
      {
LABEL_20:
        wil::details::in1diag3::Throw_Hr(
          v13,
          1114LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v12);
LABEL_21:
        wil::details::in1diag3::Throw_Hr(
          v15,
          1120LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v14);
LABEL_22:
        wil::details::in1diag3::Throw_Hr(
          v18,
          1126LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v17);
LABEL_23:
        wil::details::in1diag3::Throw_Hr(
          v21,
          1128LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v20);
        __debugbreak();
      }
      v43 = 0LL;
      if ( !v30 )
      {
        *(_OWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 16) = 0LL;
        *(_BYTE *)a2 = 0;
        *(_BYTE *)(a2 + 16) = 0;
        v29 = 1;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v36);
        goto LABEL_17;
      }
      v28[0] = 0;
      v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 88LL))(v30, v28);
      v15 = retaddr;
      if ( v14 < 0 )
        goto LABEL_21;
      if ( !v28[0] )
      {
        *(_OWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 16) = 0LL;
        *(_BYTE *)a2 = 0;
        *(_BYTE *)(a2 + 16) = 0;
        v29 = 1;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v36);
        goto LABEL_17;
      }
      v34 = 0LL;
      v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 120LL);
      v34 = 0LL;
      v17 = v16(v30, &v34);
      v18 = retaddr;
      if ( v17 < 0 )
        goto LABEL_22;
      v32 = 0LL;
      v19 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v34 + 48LL);
      v32 = 0LL;
      v20 = v19(v34, 0LL, &v32);
      v21 = retaddr;
      if ( v20 < 0 )
        goto LABEL_23;
      v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v32 + 64LL))(v32, &v38);
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1130LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
          (const char *)(unsigned int)v22);
        __debugbreak();
      }
      if ( v38 != 3 )
      {
        *(_OWORD *)a2 = 0LL;
        *(_QWORD *)(a2 + 16) = 0LL;
        *(_BYTE *)a2 = 0;
        *(_BYTE *)(a2 + 16) = 0;
        v29 = 1;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v32);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v34);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v36);
        goto LABEL_17;
      }
      string = 0LL;
      v23 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v32 + 48LL);
      string = 0LL;
      v24 = v23(v32, &string);
      if ( v24 >= 0 )
      {
        StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
        v37 = (Win32PrimaryAppProxy *)operator new(0x28uLL);
        v26 = Win32PrimaryAppProxy::Win32PrimaryAppProxy(v37, StringRawBuffer);
        v40 = 1;
        v39 = 0LL;
        *(_QWORD *)a2 = v26;
        *(_BYTE *)(a2 + 8) = 1;
        *(_BYTE *)(a2 + 16) = 1;
        v29 = 1;
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>>(&string);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v32);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v34);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v30);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v31);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v36);
        goto LABEL_17;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1136LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
        (const char *)(unsigned int)v24);
    }
    wil::details::in1diag3::Throw_Hr(
      v8,
      1112LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\kioskpositioner.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_20;
  }
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_BYTE *)a2 = 0;
  *(_BYTE *)(a2 + 16) = 0;
  v29 = 1;
LABEL_17:
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v33);
  return a2;
}
