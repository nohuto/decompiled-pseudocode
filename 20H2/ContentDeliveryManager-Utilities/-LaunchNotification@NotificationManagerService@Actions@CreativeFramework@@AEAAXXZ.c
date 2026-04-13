/*
 * XREFs of ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x180093714
 * Callers:
 *     ?Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800935B0 (-Invoke@NotificationManagerService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006AEBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086610 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_180086610.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x18008EA60 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180093B14 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator_ea_180093B14.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x18009C7D8 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::Actions::NotificationManagerService::LaunchNotification(const WCHAR **this)
{
  bool v2; // si
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, PVOID, PVOID, __int64, const WCHAR *, PVOID); // r14
  const WCHAR *v7; // rax
  PVOID Reserved1; // r15
  const WCHAR *v9; // r12
  const WCHAR *v10; // rax
  PVOID v11; // r13
  __int64 ToastContentXML; // rax
  HSTRING_HEADER *v13; // rax
  __int64 v14; // r9
  int v15; // eax
  const WCHAR *v16; // [rsp+48h] [rbp-79h] BYREF
  __int64 v17; // [rsp+50h] [rbp-71h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-69h] BYREF
  void *v19[3]; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int64 v20; // [rsp+80h] [rbp-41h]
  HSTRING_HEADER v21; // [rsp+88h] [rbp-39h] BYREF
  __int64 v22; // [rsp+A0h] [rbp-21h]
  HSTRING_HEADER v23; // [rsp+A8h] [rbp-19h] BYREF
  HSTRING_HEADER v24; // [rsp+C8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v18[1] = -2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)v18);
  v2 = 0;
  v17 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v18[0] + 72LL))(v18[0], &v17);
  v4 = retaddr;
  if ( v3 < 0 )
  {
LABEL_21:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x71,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x180093948LL);
  }
  v20 = 7LL;
  v19[2] = 0LL;
  LOWORD(v19[0]) = 0;
  std::wstring::assign(v19, (char *)L"isGhost", aIsghost[0] != 0 ? 7 : 0);
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
    this + 15,
    &v16,
    v19);
  if ( v20 >= 8 )
    operator delete(v19[0]);
  if ( v16 != this[15] )
    v2 = std::operator==<wchar_t>((_QWORD *)v16 + 8, L"true");
  v5 = v17;
  v6 = *(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64, const WCHAR *, PVOID))(*(_QWORD *)v17 + 56LL);
  v7 = (const WCHAR *)(this + 10);
  if ( (unsigned __int64)this[13] >= 8 )
    v7 = *(const WCHAR **)v7;
  v16 = v7;
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v16)[1].Reserved.Reserved1;
  v9 = this[14];
  v10 = (const WCHAR *)(this + 6);
  if ( (unsigned __int64)this[9] >= 8 )
    v10 = *(const WCHAR **)v10;
  v16 = v10;
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, &v16)[1].Reserved.Reserved1;
  ToastContentXML = CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML(this[17], v19);
  if ( *(_QWORD *)(ToastContentXML + 24) >= 8uLL )
    ToastContentXML = *(_QWORD *)ToastContentXML;
  v16 = (const WCHAR *)ToastContentXML;
  v13 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, &v16);
  LOBYTE(v14) = v2;
  v15 = v6(v5, v13[1].Reserved.Reserved1, v11, v14, v9, Reserved1);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\notificationmanager.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_21;
  }
  v22 = 0LL;
  if ( v20 >= 8 )
    operator delete(v19[0]);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
}
