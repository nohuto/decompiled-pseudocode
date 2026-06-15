/*
 * XREFs of Create_SpatialAudioDeviceStateReader @ 0x180055BF4
 * Callers:
 *     ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x18005C43C (-MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18005C758 (-RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180055B2C (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x180068CF0 (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 */

__int64 __fastcall Create_SpatialAudioDeviceStateReader(
        const unsigned __int16 *a1,
        struct IPropertyStore *a2,
        _QWORD *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  SpatialAudioDeviceStateReader *v7; // [rsp+40h] [rbp-10h] BYREF
  __int64 v8; // [rsp+48h] [rbp-8h] BYREF
  const unsigned __int16 *v9; // [rsp+70h] [rbp+20h] BYREF
  struct IPropertyStore *v10; // [rsp+78h] [rbp+28h] BYREF
  __int64 v11; // [rsp+80h] [rbp+30h] BYREF
  __int64 v12; // [rsp+88h] [rbp+38h] BYREF

  v10 = a2;
  v9 = a1;
  v7 = 0LL;
  if ( a3 )
  {
    *a3 = 0LL;
    Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(&v7);
    v4 = Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDeviceStateReader,SpatialAudioDeviceStateReader,unsigned short const * &,IPropertyStore * &>(
           &v7,
           &v9,
           &v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      if ( (unsigned int)dword_18019D4B0 > 2 )
      {
        LODWORD(v11) = v4;
        LODWORD(v12) = 53;
        v8 = (__int64)"Create_SpatialAudioDeviceStateReader";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_18019D4B0,
          (__int64)&v8,
          (__int64)&v12,
          (__int64)&v11);
      }
    }
    else
    {
      v5 = (**((__int64 (__fastcall ***)(char *, GUID *, _QWORD *))v7 + 71))(
             (char *)v7 + 568,
             &GUID_10002311_cdcb_40d4_9791_eb7aa089009e,
             a3);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v11) = -2147024809;
      v8 = (__int64)"Create_SpatialAudioDeviceStateReader";
      LODWORD(v12) = 48;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v8,
        (__int64)&v12,
        (__int64)&v11);
    }
    v5 = -2147024809;
  }
  Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(&v7);
  return v5;
}
