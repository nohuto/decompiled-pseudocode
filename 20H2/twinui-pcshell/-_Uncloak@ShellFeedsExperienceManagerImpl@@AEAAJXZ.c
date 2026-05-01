/*
 * XREFs of ?_Uncloak@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009F648
 * Callers:
 *     ?_OnAppRequestedUncloak@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009E500 (-_OnAppRequestedUncloak@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ShellFeedsExperienceManagerImpl_FailureEvent@W4ShellFeedsExperienceManagerError@@J@ShellFeedsTelemetry@@SAX$$QEAW4ShellFeedsExperienceManagerError@@$$QEAJ@Z @ 0x18009A374 (--$ShellFeedsExperienceManagerImpl_FailureEvent@W4ShellFeedsExperienceManagerError@@J@ShellFeeds.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009CEB4 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801740DC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_Uncloak(ShellFeedsExperienceManagerImpl *this)
{
  const struct _tlgProvider_t *v2; // rcx
  int v3; // ecx
  int v4; // r9d
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  int v9; // [rsp+48h] [rbp+10h] BYREF

  v2 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && tlgKeywordOn((__int64)v2, 0x400000000000LL) )
  {
    v8 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v3,
      (unsigned int)&unk_180505B63,
      0,
      v4,
      (__int64)&v8);
  }
  LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 56LL))(*((_QWORD *)this + 9));
  v5 = v8;
  if ( (int)v8 >= 0 )
    return 0LL;
  v9 = 9;
  ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_FailureEvent<enum ShellFeedsExperienceManagerError,long>(
    &v9,
    (int *)&v8);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2C8,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)v5);
  return v5;
}
