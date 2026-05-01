/*
 * XREFs of ?_OnSetForegroundFailed@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009D440
 * Callers:
 *     ?OnSetForegroundFailed@ShellFeedsExperienceManagerNotification@@UEAAXXZ @ 0x18009B950 (-OnSetForegroundFailed@ShellFeedsExperienceManagerNotification@@UEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009BC68 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_Hide@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009CE54 (-_Hide@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801743B8 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnSetForegroundFailed(ShellFeedsExperienceManagerImpl *this)
{
  const struct _tlgProvider_t *v2; // rcx
  int v3; // ecx
  int v4; // r9d
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && tlgKeywordOn((__int64)v2, 0x200000000000LL) )
  {
    v6 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
      v3,
      (unsigned int)&unk_180505FD1,
      0,
      v4,
      (__int64)&v6);
  }
  ShellFeedsExperienceManagerImpl::_Hide(this);
  return 0LL;
}
