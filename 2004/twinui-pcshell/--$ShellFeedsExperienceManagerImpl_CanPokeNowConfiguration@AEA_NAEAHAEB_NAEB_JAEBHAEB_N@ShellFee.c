/*
 * XREFs of ??$ShellFeedsExperienceManagerImpl_CanPokeNowConfiguration@AEA_NAEAHAEB_NAEB_JAEBHAEB_N@ShellFeedsTelemetry@@SAXAEA_NAEAHAEB_NAEB_JAEBH2@Z @ 0x180098260
 * Callers:
 *     ?CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA?B_NXZ @ 0x180099474 (-CanPokeNow@ShellFeedsExperienceManagerImpl@@AEAA-B_NXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@3443AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800010E0 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@U1@U-$_tlgWrapperByVal@$07@@.c)
 *     _tlgKeywordOn @ 0x1800238E4 (_tlgKeywordOn.c)
 *     ?Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18009BC68 (-Provider@FeedsMicrosoftTelemetryProvider@@SAQEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall ShellFeedsTelemetry::ShellFeedsExperienceManagerImpl_CanPokeNowConfiguration<bool &,int &,bool const &,__int64 const &,int const &,bool const &>(
        _BYTE *a1,
        int *a2,
        char *a3,
        int *a4,
        int *a5,
        char *a6)
{
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r10d
  char v14; // dl
  int v15; // ecx
  char v17; // [rsp+60h] [rbp-20h] BYREF
  char v18; // [rsp+61h] [rbp-1Fh] BYREF
  _BYTE v19[2]; // [rsp+62h] [rbp-1Eh] BYREF
  int v20; // [rsp+64h] [rbp-1Ch] BYREF
  int v21; // [rsp+68h] [rbp-18h] BYREF
  int v22; // [rsp+6Ch] [rbp-14h] BYREF
  __int64 v23; // [rsp+70h] [rbp-10h] BYREF

  v10 = FeedsMicrosoftTelemetryProvider::Provider();
  if ( *(_DWORD *)v10 > 5u )
  {
    LOBYTE(v10) = tlgKeywordOn((__int64)v10, 0x400000000000LL);
    if ( (_BYTE)v10 )
    {
      v23 = 0x1000000LL;
      v14 = *a6;
      v15 = *a5;
      v21 = *a4;
      v18 = *a3;
      v22 = *a2;
      v19[0] = *a1;
      v17 = v14;
      v20 = v15;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                      v13,
                      (int)&unk_18050585E,
                      v11,
                      v12,
                      (__int64)v19,
                      (__int64)&v22,
                      (__int64)&v18,
                      (__int64)&v21,
                      (__int64)&v20,
                      (__int64)&v17,
                      (__int64)&v23);
    }
  }
  return (char)v10;
}
