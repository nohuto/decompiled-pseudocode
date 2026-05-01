/*
 * XREFs of ??$ShellFeedsExperienceManagerImpl_NotifyTaskbarButtonInteraction@AEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAW4ShellFeedsButtonInteraction@2345@PEBGHHAEA_NAEA_NAEA_NAEA_N@ShellFeedsTelemetry@@SAXAEAW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@AEAW4ShellFeedsButtonInteraction@2345@$$QEAPEBG$$QEAH3AEA_N444@Z @ 0x18009A3FC
 * Callers:
 *     ?NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Experience@Shell@Internal@Windows@@W4ShellFeedsButtonInteraction@3456@PEAUHSTRING__@@@Z @ 0x18009C850 (-NotifyTaskbarButtonInteraction@ShellFeedsExperienceManagerImpl@@UEAAJW4ShellFeedsButtonType@Exp.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U1@U1@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@33AEBU?$_tlgWrapperByVal@$00@@555AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800011A4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U1@U1@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U-.c)
 *     _tlgKeywordOn @ 0x18001EC84 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009CEB4 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_NotifyTaskbarButtonInteraction<enum Windows::Internal::Shell::Experience::ShellFeedsButtonType &,enum Windows::Internal::Shell::Experience::ShellFeedsButtonInteraction &,unsigned short const *,int,int,bool &,bool &,bool &,bool &>(
        int *a1,
        int *a2,
        __int64 *a3,
        int *a4,
        int *a5,
        char *a6,
        char *a7,
        char *a8,
        char *a9)
{
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // r10d
  char v17; // dl
  int v18; // ecx
  char v20; // [rsp+78h] [rbp-1h] BYREF
  char v21; // [rsp+79h] [rbp+0h] BYREF
  char v22; // [rsp+7Ah] [rbp+1h] BYREF
  char v23; // [rsp+7Bh] [rbp+2h] BYREF
  int v24; // [rsp+7Ch] [rbp+3h] BYREF
  int v25; // [rsp+80h] [rbp+7h] BYREF
  int v26; // [rsp+84h] [rbp+Bh] BYREF
  int v27; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v28; // [rsp+90h] [rbp+17h] BYREF
  __int64 v29; // [rsp+98h] [rbp+1Fh] BYREF

  v13 = FeedsMicrosoftTelemetryProvider::Provider();
  if ( *(_DWORD *)v13 > 5u )
  {
    LOBYTE(v13) = tlgKeywordOn((__int64)v13, 0x400000000000LL);
    if ( (_BYTE)v13 )
    {
      v28 = 0x1000000LL;
      v17 = *a9;
      v21 = *a8;
      v20 = v17;
      v22 = *a7;
      v23 = *a6;
      v18 = *a5;
      v25 = *a4;
      v29 = *a3;
      v26 = *a2;
      v27 = *a1;
      v24 = v18;
      LOBYTE(v13) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                      v16,
                      (int)&dword_180505638,
                      v14,
                      v15,
                      (__int64)&v27,
                      (__int64)&v26,
                      (const WCHAR **)&v29,
                      (__int64)&v25,
                      (__int64)&v24,
                      (__int64)&v23,
                      (__int64)&v22,
                      (__int64)&v21,
                      (__int64)&v20,
                      (__int64)&v28);
    }
  }
  return (char)v13;
}
