/*
 * XREFs of ?PrelaunchTimerTicked@ShellFeedsExperienceManagerImpl@@UEAAJXZ @ 0x18009BBF0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009BC68 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589@@@details@wil@@QEAA_NXZ @ 0x18009E5B8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801743B8 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

__int64 __fastcall ShellFeedsExperienceManagerImpl::PrelaunchTimerTicked(ShellFeedsExperienceManagerImpl *this)
{
  const struct _tlgProvider_t *v2; // rcx
  int v3; // ecx
  int v4; // r9d
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_PerfTelemetry_36401589>::GetImpl'::`2'::impl) )
  {
    v2 = FeedsMicrosoftTelemetryProvider::Provider();
    if ( *(_DWORD *)v2 > 5u )
    {
      if ( tlgKeywordOn((__int64)v2, 0x200000000000LL) )
      {
        v6 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          v3,
          (unsigned int)&unk_18050629A,
          0,
          v4,
          (__int64)&v6);
      }
    }
  }
  *((_BYTE *)this + 161) = 1;
  return 0LL;
}
