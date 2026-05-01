/*
 * XREFs of ?_OnViewCreated@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009D6AC
 * Callers:
 *     ?_OnViewChangedHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18009D590 (-_OnViewChangedHandler@ShellFeedsExperienceManagerImpl@@AEAAJPEAUIShellExperienceView@Experience.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009BC68 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_CancelDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009C9D0 (-_CancelDeferredSuspensionTimer@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ?_RegisterViewPresentationChanged@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009DD38 (-_RegisterViewPresentationChanged@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801743B8 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnViewCreated(struct _TP_TIMER **this)
{
  const struct _tlgProvider_t *v2; // rcx
  int v3; // ecx
  int v4; // r9d
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && tlgKeywordOn((__int64)v2, 0x200000000000LL) )
  {
    v10 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v3,
      (unsigned int)&unk_18050616D,
      0,
      v4,
      (__int64)&v10);
  }
  v5 = ShellFeedsExperienceManagerImpl::_CancelDeferredSuspensionTimer(this);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x389,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  v6 = ShellFeedsExperienceManagerImpl::_RegisterViewPresentationChanged((ShellFeedsExperienceManagerImpl *)this);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x38A,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
