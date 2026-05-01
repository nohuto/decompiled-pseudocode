/*
 * XREFs of ?InitProperties@TrayInfoTipDisplayInfo@SystemTray@@AEAAXPEAUHSTRING__@@_N@Z @ 0x18037C8FC
 * Callers:
 *     ?RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z @ 0x18037CC3C (-RuntimeClassInitialize@TrayInfoTipDisplayInfo@SystemTray@@QEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$?0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z @ 0x18037BBB8 (--$-0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z.c)
 *     ??$GetAs@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@PropertySetAssembler@@AEAA?AV?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@XZ @ 0x18037BCCC (--$GetAs@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@PropertySetA.c)
 *     ??$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z @ 0x18037BD80 (--$InsertHString@PEB_W@PropertySetAssembler@@QEAA_NPEB_WPEAUHSTRING__@@1@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall SystemTray::TrayInfoTipDisplayInfo::InitProperties(
        SystemTray::TrayInfoTipDisplayInfo *this,
        HSTRING a2,
        unsigned __int8 a3)
{
  unsigned int v3; // r15d
  HRESULT v6; // eax
  LPVOID v7; // rbx
  int (__fastcall *v8)(LPVOID, PCWSTR, _QWORD, WCHAR *, int); // rdi
  PCWSTR StringRawBuffer; // rax
  unsigned int v10; // r8d
  HSTRING_HEADER *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, char *); // rsi
  __int64 v16; // rcx
  int v17; // eax
  LPVOID ppv; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR sourceString[264]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v3 = a3;
  ppv = 0LL;
  v6 = CoCreateInstance(
         &GUID_561df0d0_72eb_46f1_8d0a_5597dbbe6578,
         0LL,
         4u,
         &GUID_63672622_6d18_42ce_9cef_7a0118cd4dfe,
         &ppv);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      179LL,
      (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v20 = 0LL;
  v7 = ppv;
  v8 = *(int (__fastcall **)(LPVOID, PCWSTR, _QWORD, WCHAR *, int))(*(_QWORD *)ppv + 24LL);
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( v8(v7, StringRawBuffer, v3, sourceString, 260) >= 0 )
  {
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&hstringHeader, sourceString, v10);
    PropertySetAssembler::InsertHString<wchar_t const *>(
      (PropertySetAssembler *)&v20,
      v12,
      (HSTRING)v11[1].Reserved.Reserved1,
      v13);
  }
  PropertySetAssembler::GetAs<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v20,
    &v19);
  v14 = v19;
  if ( v19 )
  {
    v15 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v19 + 72LL);
    v16 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 11) = 0LL;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    v17 = v15(v14, (char *)this + 88);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        193LL,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipdisplayinfo.cpp",
        (const char *)(unsigned int)v17);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20 + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
}
