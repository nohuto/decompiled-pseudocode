/*
 * XREFs of Create_SpatialAudioEncoderProperties @ 0x18012C920
 * Callers:
 *     ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x18001C160 (-LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z.c)
 *     ?ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSettings@@PEAUSpatialAudioEncoderDescriptor@@I@Z @ 0x180068020 (-ConfigureForSpatialAudioEncoderSettings@SpatialAudioConfigureDevice@@UEAAJPEAUSpatialAudioSetti.c)
 *     ?ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z @ 0x18012ACD0 (-ConfigureForSpatialAudioEncoder@SpatialAudioConfigureDevice@@UEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 *     ??$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioEncoderProperties@@AEBU_GUID@@AEAH@Z @ 0x18012B4A4 (--$MakeAndInitialize@VSpatialAudioEncoderProperties@@V1@AEBU_GUID@@AEAH@Details@WRL@Microsoft@@Y.c)
 */

__int64 __fastcall Create_SpatialAudioEncoderProperties(const struct _GUID *a1, int a2, _QWORD *a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  int v11; // [rsp+40h] [rbp-10h] BYREF
  __int64 v12; // [rsp+48h] [rbp-8h] BYREF
  __int64 v13; // [rsp+78h] [rbp+28h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF
  SpatialAudioEncoderProperties *v15; // [rsp+88h] [rbp+38h] BYREF

  LODWORD(v13) = a2;
  v11 = 0;
  v15 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v15);
    v7 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioEncoderProperties,SpatialAudioEncoderProperties,_GUID const &,int &>(
           &v15,
           a1,
           &v11);
    v6 = v7;
    if ( v7 >= 0 )
    {
      v6 = (**(__int64 (__fastcall ***)(SpatialAudioEncoderProperties *, GUID *, _QWORD *))v15)(
             v15,
             &GUID_b090ccfb_2d8c_416b_bfef_598bca3c91a9,
             a3);
    }
    else if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v13) = v7;
      LODWORD(v14) = 122;
      v12 = (__int64)"Create_SpatialAudioEncoderProperties";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4B0,
        byte_18016D2CE,
        v8,
        v9,
        (const CHAR **)&v12,
        (__int64)&v14,
        (__int64)&v13);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v13) = -2147024809;
      v12 = (__int64)"Create_SpatialAudioEncoderProperties";
      LODWORD(v14) = 117;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4B0,
        byte_18016D300,
        0LL,
        a4,
        (const CHAR **)&v12,
        (__int64)&v14,
        (__int64)&v13);
    }
    v6 = -2147024809;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v15);
  return v6;
}
