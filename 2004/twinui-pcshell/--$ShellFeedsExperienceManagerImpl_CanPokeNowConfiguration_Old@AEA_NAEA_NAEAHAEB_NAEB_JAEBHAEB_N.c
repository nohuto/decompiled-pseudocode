/*
 * XREFs of ??$ShellFeedsExperienceManagerImpl_CanPokeNowConfiguration_Old@AEA_NAEA_NAEAHAEB_NAEB_JAEBHAEB_N@ShellFeedsTelemetry@@SAXAEA_N0AEAHAEB_NAEB_JAEBH2@Z @ 0x180098354
 * Callers:
 *     ?CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA?B_NXZ @ 0x180099474 (-CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA-B_NXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$03@@3443AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U1@U-$_tlgWrapperByVal@$0.c)
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009BC68 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_CanPokeNowConfiguration_Old<bool &,bool &,int &,bool const &,__int64 const &,int const &,bool const &>(
        char *a1,
        char *a2,
        int *a3,
        char *a4,
        int *a5,
        int *a6,
        char *a7)
{
  const struct _tlgProvider_t *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r10d
  char v15; // dl
  int v16; // ecx
  char v18; // [rsp+60h] [rbp-20h] BYREF
  char v19; // [rsp+61h] [rbp-1Fh] BYREF
  char v20; // [rsp+62h] [rbp-1Eh] BYREF
  char v21; // [rsp+63h] [rbp-1Dh] BYREF
  int v22; // [rsp+64h] [rbp-1Ch] BYREF
  int v23; // [rsp+68h] [rbp-18h] BYREF
  int v24; // [rsp+6Ch] [rbp-14h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h] BYREF

  v11 = FeedsMicrosoftTelemetryProvider::Provider();
  if ( *(_DWORD *)v11 > 5u )
  {
    LOBYTE(v11) = tlgKeywordOn((__int64)v11, 0x400000000000LL);
    if ( (_BYTE)v11 )
    {
      v25 = 0x1000000LL;
      v15 = *a7;
      v22 = *a6;
      v18 = v15;
      v16 = *a5;
      v19 = *a4;
      v24 = *a3;
      v20 = *a2;
      v21 = *a1;
      v23 = v16;
      LOBYTE(v11) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                      v14,
                      (int)&unk_180505AD5,
                      v12,
                      v13,
                      (__int64)&v21,
                      (__int64)&v20,
                      (__int64)&v24,
                      (__int64)&v19,
                      (__int64)&v23,
                      (__int64)&v22,
                      (__int64)&v18,
                      (__int64)&v25);
    }
  }
  return (char)v11;
}
