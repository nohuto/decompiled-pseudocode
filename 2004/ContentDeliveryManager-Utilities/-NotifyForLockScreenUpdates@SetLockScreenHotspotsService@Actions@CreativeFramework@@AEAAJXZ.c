/*
 * XREFs of ?NotifyForLockScreenUpdates@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x1800995F8
 * Callers:
 *     ?Invoke@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800990E0 (-Invoke@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x180099150 (-Revert@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Commit@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x180099240 (-Commit@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180018C18 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086A60 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_p_ea_180086A60.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::NotifyForLockScreenUpdates(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, _QWORD **); // rdi
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  _QWORD *v8; // rbx
  __int64 (__fastcall *v9)(_QWORD *, PVOID, _QWORD, void *); // rbp
  void *v10; // rsi
  DWORD LengthSid; // edi
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  _QWORD *v15; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v16[2]; // [rsp+38h] [rbp-40h] BYREF
  HSTRING_HEADER v17; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v16[1] = -2LL;
  v15 = 0LL;
  v2 = wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)v16);
  v3 = *(_QWORD *)v2;
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD **))(**(_QWORD **)v2 + 112LL);
  v15 = 0LL;
  v5 = v4(v3, &v15);
  if ( v16[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16[0] + 16LL))(v16[0]);
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 140LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)v6);
    goto LABEL_9;
  }
  v8 = v15;
  v9 = *(__int64 (__fastcall **)(_QWORD *, PVOID, _QWORD, void *))(*v15 + 48LL);
  v10 = (void *)*((_QWORD *)this + 1);
  LengthSid = GetLengthSid(v10);
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, (const WCHAR **)off_1800FB2C8);
  v13 = v9(v8, v12[1].Reserved.Reserved1, LengthSid, v10);
  v5 = v13;
  if ( v13 < 0 )
  {
    v6 = (unsigned int)v13;
    v7 = 141LL;
    goto LABEL_7;
  }
  v5 = 0;
LABEL_9:
  if ( v15 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v15 + 16LL))(v15, *v15);
  return (unsigned int)v5;
}
