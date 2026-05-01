/*
 * XREFs of ?_OnAppRequestedUncloak@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009D248
 * Callers:
 *     ?OnAppRequestedUncloak@ShellFeedsExperienceManagerNotification@@UEAAXXZ @ 0x18009B8C0 (-OnAppRequestedUncloak@ShellFeedsExperienceManagerNotification@@UEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18004F918 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009BC68 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?_Uncloak@ShellFeedsExperienceManagerImpl@@AEAAJXZ @ 0x18009E1A0 (-_Uncloak@ShellFeedsExperienceManagerImpl@@AEAAJXZ.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::_OnAppRequestedUncloak(ShellFeedsExperienceManagerImpl *this)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  char v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = FeedsMicrosoftTelemetryProvider::Provider((__int64)this);
  if ( *(_DWORD *)v2 > 5u && tlgKeywordOn((__int64)v2, 0x200000000000LL) )
  {
    v5 = *((_BYTE *)this + 184);
    v6 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
      v3,
      byte_18050593A,
      0LL,
      v3,
      (__int64)&v5,
      (__int64)&v6);
  }
  if ( *((_BYTE *)this + 184) )
    ShellFeedsExperienceManagerImpl::_Uncloak(this);
  return 0LL;
}
