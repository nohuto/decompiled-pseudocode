/*
 * XREFs of ?_OnShown@ShellFeedsExperienceManagerImpl@@AEAAJPEAUICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Z @ 0x18009E878
 * Callers:
 *     ?OnShown@ShellFeedsExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x18009CBF0 (-OnShown@ShellFeedsExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009CEB4 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801740DC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnShown(
        ShellFeedsExperienceManagerImpl *this,
        struct Windows::Internal::Shell::Experience::ICortanaShownEventArgs *a2)
{
  const struct _tlgProvider_t *v3; // rcx
  unsigned int v4; // r8d
  int v5; // ecx
  int v6; // r9d
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, PVOID, _QWORD); // rbx
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  int v13[2]; // [rsp+30h] [rbp-38h] BYREF
  HSTRING_HEADER v14; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v3 > 5u && tlgKeywordOn((__int64)v3, 0x200000000000LL) )
  {
    *(_QWORD *)v13 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v5,
      (unsigned int)&unk_180505B1C,
      0,
      v6,
      (__int64)v13);
  }
  *((_BYTE *)this + 216) = 1;
  v7 = *((_QWORD *)this + 13);
  if ( !v7 )
    return 0LL;
  v8 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD))(*(_QWORD *)v7 + 120LL);
  v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v14, (const WCHAR **)off_180497D58, v4);
  v10 = v8(v7, v9[1].Reserved.Reserved1, 0LL);
  v11 = v10;
  if ( v10 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)v10);
  return v11;
}
