/*
 * XREFs of ?OnHidden@ShellFeedsExperienceManagerNotification@@UEAAXXZ @ 0x18009CB60
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009CEB4 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1801740DC (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 */

void __fastcall ShellFeedsExperienceManagerNotification::OnHidden(ShellFeedsExperienceManagerNotification *this)
{
  __int64 v1; // rbx
  const struct _tlgProvider_t *v2; // rcx
  int v3; // ecx
  int v4; // r9d
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
  {
    v2 = FeedsMicrosoftTelemetryProvider::Provider();
    if ( *(_DWORD *)v2 > 5u )
    {
      if ( tlgKeywordOn((__int64)v2, 0x200000000000LL) )
      {
        v5 = 0x1000000LL;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>>(
          v3,
          (unsigned int)&unk_1805058D4,
          0,
          v4,
          (__int64)&v5);
      }
    }
    *(_WORD *)(v1 + 216) = 0;
  }
}
