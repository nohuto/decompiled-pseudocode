/*
 * XREFs of ?MakeActive@CSpatialProperties@@QEAAJPEBG_NPEAUIPropertyStore@@@Z @ 0x18005C53C
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180058F30 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     Create_SpatialAudioDevicePropertyReader @ 0x18002A42C (Create_SpatialAudioDevicePropertyReader.c)
 *     Create_SpatialAudioDeviceStateReader @ 0x180055CF4 (Create_SpatialAudioDeviceStateReader.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180058274 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     Create_SpatialAudioConfigureDevice @ 0x18005C648 (Create_SpatialAudioConfigureDevice.c)
 *     Create_SpatialAudioDeviceStateWriter @ 0x18005C968 (Create_SpatialAudioDeviceStateWriter.c)
 *     MigrateSpatialProperties @ 0x18005CEEC (MigrateSpatialProperties.c)
 *     DoesPlatformSupportSpatialAudio @ 0x18005CFE8 (DoesPlatformSupportSpatialAudio.c)
 *     _tlgKeywordOn @ 0x1800B7ADC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B8194 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

__int64 __fastcall CSpatialProperties::MakeActive(
        struct IUnknown **this,
        const unsigned __int16 *a2,
        char a3,
        struct IPropertyStore *a4)
{
  _QWORD *v8; // r15
  _QWORD *v9; // r14
  int SpatialAudioConfigureDevice; // ebx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  const unsigned __int16 *v15; // [rsp+68h] [rbp+10h] BYREF

  if ( !a2 || !a4 )
  {
    SpatialAudioConfigureDevice = -2147024809;
LABEL_16:
    if ( this[5] )
      ATL::AtlComPtrAssign(this + 5, 0LL);
    if ( this[6] )
      ATL::AtlComPtrAssign(this + 6, 0LL);
    return (unsigned int)SpatialAudioConfigureDevice;
  }
  v8 = this + 5;
  if ( this[5] || (v9 = this + 6, this[6]) )
  {
    SpatialAudioConfigureDevice = -2147418113;
    goto LABEL_16;
  }
  if ( !(unsigned __int8)DoesPlatformSupportSpatialAudio()
    && (unsigned int)dword_18019D478 > 4
    && (unsigned __int8)tlgKeywordOn(&dword_18019D478, 16LL) )
  {
    v15 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      v12,
      (unsigned int)&unk_18016D259,
      v13,
      v14,
      (__int64)&v15);
  }
  MigrateSpatialProperties(a4, a2);
  SpatialAudioConfigureDevice = Create_SpatialAudioConfigureDevice(a2, a4, v8);
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_16;
  SpatialAudioConfigureDevice = Create_SpatialAudioDevicePropertyReader(a2, a4, v9);
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_16;
  SpatialAudioConfigureDevice = Create_SpatialAudioDeviceStateReader(a2, a4, this + 7);
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_16;
  SpatialAudioConfigureDevice = Create_SpatialAudioDeviceStateWriter(a2, a4, this + 8);
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_16;
  *((_BYTE *)this + 73) = a3;
  if ( !*v8 || !*v9 )
    SpatialAudioConfigureDevice = -2147418113;
  if ( SpatialAudioConfigureDevice < 0 )
    goto LABEL_16;
  return (unsigned int)SpatialAudioConfigureDevice;
}
