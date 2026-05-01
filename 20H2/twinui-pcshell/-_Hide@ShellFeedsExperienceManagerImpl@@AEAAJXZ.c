/*
 * XREFs of ?_Hide@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009E0B4
 * Callers:
 *     ?DisplaySettingsChange@ShellFeedsExperienceManagerImpl@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18009B6B0 (-DisplaySettingsChange@ShellFeedsExperienceManagerImpl@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_.c)
 *     ?Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z @ 0x18009CCE0 (-Poke@ShellFeedsExperienceManagerImpl@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?_OnAppRequestedDismiss@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009E474 (-_OnAppRequestedDismiss@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_OnSetForegroundFailed@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009E7EC (-_OnSetForegroundFailed@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ShellFeedsExperienceManagerImpl_FailureEvent@W4ShellFeedsExperienceManagerError@@J@ShellFeedsTelemetry@@SAX$$QEAW4ShellFeedsExperienceManagerError@@$$QEAJ@Z @ 0x18009A374 (--$ShellFeedsExperienceManagerImpl_FailureEvent@W4ShellFeedsExperienceManagerError@@J@ShellFeeds.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009CEB4 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_StartDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009F57C (-_StartDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801740DC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_Hide(ShellFeedsExperienceManagerImpl *this)
{
  const struct _tlgProvider_t *v2; // rcx
  int v3; // ecx
  int v4; // r9d
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && tlgKeywordOn((__int64)v2, 0x200000000000LL) )
  {
    v9 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v3,
      (unsigned int)&unk_180505BAA,
      0,
      v4,
      (__int64)&v9);
  }
  if ( *((_BYTE *)this + 220)
    && (LODWORD(v9) = ShellFeedsExperienceManagerImpl::_StartDeferredSuspensionTimer(this), v5 = v9, (int)v9 < 0) )
  {
    v10 = 5;
    ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_FailureEvent<enum ShellFeedsExperienceManagerError,long>(
      &v10,
      (int *)&v9);
    v6 = 698LL;
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
    LODWORD(v9) = result;
    v5 = result;
    if ( (int)result >= 0 )
      return result;
    v10 = 6;
    ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_FailureEvent<enum ShellFeedsExperienceManagerError,long>(
      &v10,
      (int *)&v9);
    v6 = 703LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)v5);
  return v5;
}
