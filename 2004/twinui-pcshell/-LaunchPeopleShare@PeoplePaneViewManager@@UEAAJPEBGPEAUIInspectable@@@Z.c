/*
 * XREFs of ?LaunchPeopleShare@PeoplePaneViewManager@@UEAAJPEBGPEAUIInspectable@@@Z @ 0x180261080
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002FD9C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18002FE10 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18008DA5C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180158A58 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@$$QEAV21@@Z @ 0x18025D6AC (--$_Emplace_reallocate@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeopleP.c)
 *     ??0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z @ 0x18025DAB8 (--0PeoplePaneViewInfo@@QEAA@PEBGW4ViewType@@UtagSIZE@@@Z.c)
 *     ?RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z @ 0x1802617F4 (-RemovePendingShareViewInfoForContactId@PeoplePaneViewManager@@AEAAXPEBG@Z.c)
 *     ?StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ @ 0x180261D88 (-StartTelemetryShowTimer@PeoplePaneViewInfo@@QEAAJXZ.c)
 *     ?s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ @ 0x180262838 (-s_GetAppId@PeoplePaneViewManager@@CAPEBGXZ.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall PeoplePaneViewManager::LaunchPeopleShare(
        RTL_SRWLOCK *this,
        unsigned __int16 *a2,
        struct IInspectable *a3)
{
  _DWORD *v5; // rsi
  char v6; // di
  char *Ptr; // rdx
  HRESULT Instance; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  HRESULT v11; // eax
  HWND WindowW; // rax
  const char *v13; // r9
  IUnknown *v14; // rbx
  unsigned int v15; // r8d
  HSTRING_HEADER *v16; // rax
  IUnknown *pUnk; // [rsp+40h] [rbp-69h] BYREF
  std::_Ref_count_base *v19[2]; // [rsp+48h] [rbp-61h] BYREF
  unsigned __int16 *v20; // [rsp+58h] [rbp-51h] BYREF
  RTL_SRWLOCK *v21; // [rsp+60h] [rbp-49h]
  unsigned __int16 **v22; // [rsp+68h] [rbp-41h]
  char v23; // [rsp+70h] [rbp-39h]
  char v24[8]; // [rsp+78h] [rbp-31h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+80h] [rbp-29h] BYREF
  __int64 v26; // [rsp+98h] [rbp-11h]
  HSTRING_HEADER v27; // [rsp+A0h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v20 = a2;
  v19[0] = (std::_Ref_count_base *)0x25E000001F4LL;
  v5 = operator new(0x60uLL);
  v6 = 1;
  v5[2] = 1;
  v5[3] = 1;
  *(_QWORD *)v5 = &std::_Ref_count_obj<PeoplePaneViewInfo>::`vftable';
  PeoplePaneViewInfo::PeoplePaneViewInfo((__int64)(v5 + 4), v20, 1, (__int64)v19[0]);
  v19[0] = (std::_Ref_count_base *)(v5 + 4);
  v19[1] = (std::_Ref_count_base *)v5;
  PeoplePaneViewInfo::StartTelemetryShowTimer((PeoplePaneViewInfo *)(v5 + 4));
  AcquireSRWLockExclusive(this + 5);
  v21 = this + 5;
  Ptr = (char *)this[7].Ptr;
  if ( this[8].Ptr == Ptr )
  {
    std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo>>(
      &this[6].Ptr,
      Ptr,
      v19);
  }
  else
  {
    *(_QWORD *)Ptr = v5 + 4;
    *((_QWORD *)Ptr + 1) = v5;
    *(_OWORD *)v19 = 0LL;
    this[7].Ptr = (char *)this[7].Ptr + 16;
  }
  if ( this != (RTL_SRWLOCK *)-40LL )
    ReleaseSRWLockExclusive(this + 5);
  if ( v19[1] )
    std::_Ref_count_base::_Decref(v19[1]);
  v21 = this - 11;
  v22 = &v20;
  v23 = 1;
  pUnk = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pUnk);
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManager,
               0LL,
               1u,
               &GUID_54e4c428_d1d4_47d4_ade6_46c829114a7d,
               (LPVOID *)&pUnk);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v10 = 302LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_18;
  }
  v11 = CoAllowSetForegroundWindow(pUnk, 0LL);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x130,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)v11);
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( !SetForegroundWindow(WindowW) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x132,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      v13);
  v19[0] = (std::_Ref_count_base *)PeoplePaneViewManager::s_GetAppId();
  v14 = pUnk;
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Windows.Launch", 0xFu, 0xEu);
  v16 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, (const WCHAR **)v19, v15);
  Instance = ((__int64 (__fastcall *)(IUnknown *, PVOID, _QWORD, __int64, struct IInspectable *, _DWORD, char *))v14->lpVtbl[1].QueryInterface)(
               v14,
               v16[1].Reserved.Reserved1,
               0LL,
               v26,
               a3,
               0,
               v24);
  v9 = Instance;
  if ( Instance < 0 )
  {
    v10 = 315LL;
    goto LABEL_16;
  }
  v6 = 0;
  v9 = 0;
LABEL_18:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pUnk);
  if ( v6 )
    PeoplePaneViewManager::RemovePendingShareViewInfoForContactId((PeoplePaneViewManager *)&this[-11], v20);
  return v9;
}
