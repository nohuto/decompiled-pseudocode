/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioConfigureDevice@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18005C758
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioConfigureDevice@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18005C5CC (--$MakeAndInitialize@VSpatialAudioConfigureDevice@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL.c)
 * Callees:
 *     Create_SpatialAudioDeviceStateReader @ 0x180055BF4 (Create_SpatialAudioDeviceStateReader.c)
 *     Create_SpatialAudioDevicePropertyWriter @ 0x18005C7E4 (Create_SpatialAudioDevicePropertyWriter.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 */

__int64 __fastcall SpatialAudioConfigureDevice::RuntimeClassInitialize(
        SpatialAudioConfigureDevice *this,
        const unsigned __int16 *a2,
        struct IPropertyStore *a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // rcx
  int SpatialAudioDevicePropertyWriter; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  v3 = (_QWORD *)((char *)this + 88);
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    *v3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  SpatialAudioDevicePropertyWriter = Create_SpatialAudioDevicePropertyWriter(a2, a3, v3);
  v9 = SpatialAudioDevicePropertyWriter;
  if ( SpatialAudioDevicePropertyWriter < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v14) = 96;
LABEL_12:
      LODWORD(v13) = SpatialAudioDevicePropertyWriter;
      v12 = (__int64)"SpatialAudioConfigureDevice::RuntimeClassInitialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v12,
        (__int64)&v14,
        (__int64)&v13);
    }
  }
  else
  {
    v10 = *((_QWORD *)this + 12);
    if ( v10 )
    {
      *((_QWORD *)this + 12) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    SpatialAudioDevicePropertyWriter = Create_SpatialAudioDeviceStateReader(a2, a3, (_QWORD *)this + 12);
    v9 = SpatialAudioDevicePropertyWriter;
    if ( SpatialAudioDevicePropertyWriter < 0 && (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v14) = 99;
      goto LABEL_12;
    }
  }
  return v9;
}
