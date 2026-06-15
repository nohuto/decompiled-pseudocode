/*
 * XREFs of ?LoadDeviceProperties@SpatialAudioDevicePropertyReader@@AEAAJPEAH@Z @ 0x18001C160
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x18001D640 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 *     Create_SpatialAudioEncoderProperties @ 0x18012C920 (Create_SpatialAudioEncoderProperties.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioDevicePropertyReader::LoadDeviceProperties(
        SpatialAudioDevicePropertyReader *this,
        int *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  _OWORD *v7; // rax
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10[2]; // [rsp+40h] [rbp-30h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-20h] BYREF
  _OWORD *v12; // [rsp+60h] [rbp-10h]
  __int64 v13; // [rsp+90h] [rbp+20h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+38h] BYREF

  v10[1] = -2LL;
  *(_OWORD *)pvar = 0LL;
  v12 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51) + 40LL))(
         *((_QWORD *)this + 51),
         &PKEY_SpatialAudio_Metadata_DeviceProperties,
         pvar);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( LODWORD(pvar[1]) == 146 && LOWORD(pvar[0]) == 65 )
    {
      v7 = v12;
      *(_OWORD *)((char *)this + 104) = *v12;
      *(_OWORD *)((char *)this + 120) = v7[1];
      *(_OWORD *)((char *)this + 136) = v7[2];
      *(_OWORD *)((char *)this + 152) = v7[3];
      *(_OWORD *)((char *)this + 168) = v7[4];
      *(_OWORD *)((char *)this + 184) = v7[5];
      *(_OWORD *)((char *)this + 200) = v7[6];
      *(_OWORD *)((char *)this + 216) = v7[7];
      *(_OWORD *)((char *)this + 232) = v7[8];
      *((_WORD *)this + 124) = *((_WORD *)v7 + 72);
      if ( *((_DWORD *)this + 26) == 1509949441 )
      {
        *a2 = 0;
        v5 = 0;
      }
    }
    if ( *a2 )
      goto LABEL_4;
    v15 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v15);
    v9 = Create_SpatialAudioEncoderProperties((char *)this + 108, v8, &v15);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v15 + 32LL))(v15, (char *)this + 250);
      v5 = v9;
      if ( v9 >= 0 || (unsigned int)dword_18019D4B0 <= 2 )
        goto LABEL_17;
      LODWORD(v14) = 339;
    }
    else
    {
      if ( (unsigned int)dword_18019D4B0 <= 2 )
      {
LABEL_17:
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v15);
        goto LABEL_4;
      }
      LODWORD(v14) = 336;
    }
    LODWORD(v13) = v9;
    v10[0] = (__int64)"SpatialAudioDevicePropertyReader::LoadDeviceProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_18019D4B0,
      (__int64)v10,
      (__int64)&v14,
      (__int64)&v13);
    goto LABEL_17;
  }
  if ( (unsigned int)dword_18019D4B0 > 2 )
  {
    LODWORD(v13) = v4;
    LODWORD(v14) = 317;
    v15 = (__int64)"SpatialAudioDevicePropertyReader::LoadDeviceProperties";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_18019D4B0,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13);
  }
LABEL_4:
  PropVariantClear(pvar);
  return v5;
}
