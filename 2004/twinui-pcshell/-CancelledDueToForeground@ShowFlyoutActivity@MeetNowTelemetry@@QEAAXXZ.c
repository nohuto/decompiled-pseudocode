/*
 * XREFs of ?CancelledDueToForeground@ShowFlyoutActivity@MeetNowTelemetry@@QEAAXXZ @ 0x18009FA5C
 * Callers:
 *     ?OnSetForegroundFailed@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A0EB0 (-OnSetForegroundFailed@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?Provider@MeetNowTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800A1914 (-Provider@MeetNowTelemetryLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801743B8 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall MeetNowTelemetry::ShowFlyoutActivity::CancelledDueToForeground(
        MeetNowTelemetry::ShowFlyoutActivity *this)
{
  const struct _tlgProvider_t *v2; // rcx
  int v3; // ecx
  int v4; // r9d
  int v5; // r8d
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = MeetNowTelemetryLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x400000000000LL) )
    {
      v5 = *((_QWORD *)this + 6) + 8;
      v6 = 50331648LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
        v3,
        (unsigned int)&unk_1805065EC,
        v5,
        v4,
        (__int64)&v6);
    }
  }
}
