/*
 * XREFs of ??$ShellFeedsDesktopExperienceView_PositionShellFeedsWindow@AEAJAEAJAEAJAEAJAEAJAEAJAEAJAEAJ@ShellFeedsTelemetry@@SAXAEAJ0000000@Z @ 0x1800A52B8
 * Callers:
 *     ?PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ @ 0x1800A86DC (-PositionShellFeedsWindow@ShellFeedsDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800013A8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemp.c)
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009CEB4 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsDesktopExperienceView_PositionShellFeedsWindow<long &,long &,long &,long &,long &,long &,long &,long &>(
        int *a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        int *a6,
        int *a7,
        int *a8)
{
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r10d
  int v16; // edx
  int v17; // ecx
  int v19; // [rsp+78h] [rbp+7h] BYREF
  int v20; // [rsp+7Ch] [rbp+Bh] BYREF
  int v21; // [rsp+80h] [rbp+Fh] BYREF
  int v22; // [rsp+84h] [rbp+13h] BYREF
  int v23; // [rsp+88h] [rbp+17h] BYREF
  int v24; // [rsp+8Ch] [rbp+1Bh] BYREF
  int v25; // [rsp+90h] [rbp+1Fh] BYREF
  int v26; // [rsp+94h] [rbp+23h] BYREF
  __int64 v27; // [rsp+98h] [rbp+27h] BYREF

  v12 = FeedsMicrosoftTelemetryProvider::Provider((__int64)a1);
  if ( *(_DWORD *)v12 > 5u )
  {
    LOBYTE(v12) = tlgKeywordOn((__int64)v12, 0x200000000000LL);
    if ( (_BYTE)v12 )
    {
      v27 = 0x1000000LL;
      v16 = *a8;
      v20 = *a7;
      v19 = v16;
      v21 = *a6;
      v17 = *a5;
      v23 = *a4;
      v24 = *a3;
      v25 = *a2;
      v26 = *a1;
      v22 = v17;
      LOBYTE(v12) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                      v15,
                      (int)&unk_1805073B4,
                      v13,
                      v14,
                      (__int64)&v26,
                      (__int64)&v25,
                      (__int64)&v24,
                      (__int64)&v23,
                      (__int64)&v22,
                      (__int64)&v21,
                      (__int64)&v20,
                      (__int64)&v19,
                      (__int64)&v27);
    }
  }
  return (char)v12;
}
