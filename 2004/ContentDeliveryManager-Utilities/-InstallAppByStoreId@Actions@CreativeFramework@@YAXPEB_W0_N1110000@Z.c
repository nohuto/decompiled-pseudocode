/*
 * XREFs of ?InstallAppByStoreId@Actions@CreativeFramework@@YAXPEB_W0_N1110000@Z @ 0x1800851C4
 * Callers:
 *     ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800859D0 (-Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018C18 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ParseStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@PEAPEAU3@1@Z @ 0x180084750 (-ParseStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@PEAPEAU3@1@Z.c)
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W111_N@Z @ 0x180084E08 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086A60 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_180086A60.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CreativeFramework::Actions::InstallAppByStoreId(
        const WCHAR *this,
        const wchar_t *a2,
        const wchar_t *a3,
        char a4,
        char a5,
        bool a6,
        const WCHAR *a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10)
{
  char v11; // r12
  __int64 v12; // rax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  HSTRING_HEADER *v15; // rax
  HSTRING *v16; // r9
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, PVOID, __int64, __int64, PVOID, PVOID, PVOID, _QWORD); // r15
  PVOID Reserved1; // r14
  PVOID v22; // rsi
  PVOID v23; // rdi
  HSTRING_HEADER *v24; // rax
  __int64 v25; // r9
  __int64 v26; // r8
  int v27; // eax
  HSTRING v28; // [rsp+50h] [rbp-B0h] BYREF
  HSTRING string; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h] BYREF
  const WCHAR *v32; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v33; // [rsp+78h] [rbp-88h] BYREF
  const WCHAR *v34; // [rsp+80h] [rbp-80h] BYREF
  PCWSTR StringRawBuffer; // [rsp+88h] [rbp-78h] BYREF
  PCWSTR v36; // [rsp+90h] [rbp-70h] BYREF
  const WCHAR *v37; // [rsp+98h] [rbp-68h] BYREF
  const WCHAR *v38; // [rsp+A0h] [rbp-60h] BYREF
  const WCHAR *v39[2]; // [rsp+A8h] [rbp-58h] BYREF
  HSTRING_HEADER v40; // [rsp+B8h] [rbp-48h] BYREF
  HSTRING_HEADER v41; // [rsp+D8h] [rbp-28h] BYREF
  HSTRING_HEADER v42; // [rsp+F8h] [rbp-8h] BYREF
  HSTRING_HEADER v43; // [rsp+118h] [rbp+18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v39[1] = (const WCHAR *)-2LL;
  v11 = (char)a3;
  v32 = this;
  v39[0] = a2;
  v38 = a7;
  v37 = a8;
  v34 = a9;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(&v33);
  v30 = 0LL;
  v12 = *v33;
  v30 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v12 + 48))(v33, &v30);
  v14 = retaddr;
  if ( v13 < 0 )
    goto LABEL_14;
  if ( !a4 )
  {
    WindowsDeleteString(0LL);
    v28 = 0LL;
    WindowsDeleteString(0LL);
    string = 0LL;
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, &v32);
    v17 = CreativeFramework::StoreHelpers::ParseStoreId((HSTRING)v15[1].Reserved.Reserved1, &string, &v28, v16);
    v18 = retaddr;
    if ( v17 < 0 )
    {
LABEL_15:
      wil::details::in1diag3::Throw_Hr(
        v18,
        (void *)0xB5,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v17);
      JUMPOUT(0x18008547BLL);
    }
    StringRawBuffer = WindowsGetStringRawBuffer(v28, 0LL);
    v36 = WindowsGetStringRawBuffer(string, 0LL);
    v31 = v30;
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
    CreativeFramework::Actions::GetEntitlementForRecord(&v31, (WCHAR *)&v36, (WCHAR *)&StringRawBuffer, &v34, &a10, a5);
    WindowsDeleteString(v28);
    v28 = 0LL;
    WindowsDeleteString(string);
  }
  v19 = v30;
  v20 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, __int64, PVOID, PVOID, PVOID, _QWORD))(*(_QWORD *)v30 + 112LL);
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v40, &v37)[1].Reserved.Reserved1;
  v22 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v41, &v38)[1].Reserved.Reserved1;
  v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v42, v39)[1].Reserved.Reserved1;
  v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v43, &v32);
  LOBYTE(v25) = a6;
  LOBYTE(v26) = v11;
  v27 = v20(v19, v24[1].Reserved.Reserved1, v26, v25, v23, v22, Reserved1, 0LL);
  if ( v27 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v27);
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0xB0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v13);
    goto LABEL_15;
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v33 )
    (*(void (__fastcall **)(__int64 *))(*v33 + 16))(v33);
}
