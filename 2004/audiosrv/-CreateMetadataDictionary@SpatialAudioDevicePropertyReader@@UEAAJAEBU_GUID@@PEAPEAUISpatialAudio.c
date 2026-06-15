/*
 * XREFs of ?CreateMetadataDictionary@SpatialAudioDevicePropertyReader@@UEAAJAEBU_GUID@@PEAPEAUISpatialAudioMetadataDictionaryData@@@Z @ 0x180128110
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AC8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 *     ?GetPropertyIndexForMetadataFormatID@SpatialAudioDevicePropertyReader@@AEAAJAEBU_GUID@@PEAGPEAI@Z @ 0x180128B78 (-GetPropertyIndexForMetadataFormatID@SpatialAudioDevicePropertyReader@@AEAAJAEBU_GUID@@PEAGPEAI@.c)
 *     Create_SpatialAudioMetadataDictionaryFromData @ 0x18012E024 (Create_SpatialAudioMetadataDictionaryFromData.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioDevicePropertyReader::CreateMetadataDictionary(
        SpatialAudioDevicePropertyReader *this,
        const struct _GUID *a2,
        struct ISpatialAudioMetadataDictionaryData **a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  int PropertyIndexForMetadataFormatID; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned int v14; // ebx
  unsigned __int16 v16[4]; // [rsp+48h] [rbp-29h] BYREF
  __int64 v17; // [rsp+50h] [rbp-21h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, struct ISpatialAudioMetadataDictionaryData **); // [rsp+58h] [rbp-19h] BYREF
  PROPVARIANT pvar[2]; // [rsp+60h] [rbp-11h] BYREF
  __int64 v20; // [rsp+70h] [rbp-1h]
  __int64 v21; // [rsp+78h] [rbp+7h]
  __int128 v22; // [rsp+80h] [rbp+Fh] BYREF
  int v23; // [rsp+90h] [rbp+1Fh]

  v21 = -2LL;
  *(_DWORD *)&v16[2] = 0;
  v16[0] = 0;
  v18 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v20 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  if ( v6 )
    LeaveCriticalSection(v6);
  if ( !a3 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      *(_DWORD *)&v16[2] = -2147024809;
      *(_DWORD *)v16 = 545;
      v17 = (__int64)"SpatialAudioDevicePropertyReader::CreateMetadataDictionary";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)&dword_18019D4B0,
        byte_18016D2CB,
        v7,
        v8,
        (const CHAR **)&v17,
        (__int64)v16,
        (__int64)&v16[2]);
    }
    v9 = -2147024809;
    goto LABEL_24;
  }
  PropertyIndexForMetadataFormatID = SpatialAudioDevicePropertyReader::GetPropertyIndexForMetadataFormatID(
                                       this,
                                       a2,
                                       v16,
                                       (unsigned int *)&v16[2]);
  v9 = PropertyIndexForMetadataFormatID;
  if ( PropertyIndexForMetadataFormatID < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_24;
    *(_DWORD *)v16 = 548;
    goto LABEL_23;
  }
  v22 = PKEY_SpatialAudio_Metadata_Dictionary_Array;
  v23 = *(_DWORD *)&v16[2] + 2;
  PropertyIndexForMetadataFormatID = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**((_QWORD **)this + 51)
                                                                                                  + 40LL))(
                                       *((_QWORD *)this + 51),
                                       &v22,
                                       pvar);
  v9 = PropertyIndexForMetadataFormatID;
  if ( PropertyIndexForMetadataFormatID < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 <= 2 )
      goto LABEL_24;
    *(_DWORD *)v16 = 554;
    goto LABEL_23;
  }
  if ( LOWORD(pvar[0]) == 65 )
  {
    v13 = v20;
    v14 = (unsigned int)pvar[1];
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v18);
    PropertyIndexForMetadataFormatID = Create_SpatialAudioMetadataDictionaryFromData(v16[0], v13, v14, &v18);
    v9 = PropertyIndexForMetadataFormatID;
    if ( PropertyIndexForMetadataFormatID >= 0 )
    {
      PropertyIndexForMetadataFormatID = (**v18)(v18, &GUID_af467d4d_6b91_4cca_a7ab_7470879192bf, a3);
      v9 = PropertyIndexForMetadataFormatID;
      if ( PropertyIndexForMetadataFormatID >= 0 || (unsigned int)dword_18019D4B0 <= 2 )
        goto LABEL_24;
      *(_DWORD *)v16 = 565;
    }
    else
    {
      if ( (unsigned int)dword_18019D4B0 <= 2 )
        goto LABEL_24;
      *(_DWORD *)v16 = 562;
    }
LABEL_23:
    *(_DWORD *)&v16[2] = PropertyIndexForMetadataFormatID;
    v17 = (__int64)"SpatialAudioDevicePropertyReader::CreateMetadataDictionary";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18019D4B0,
      byte_18016D305,
      v11,
      v12,
      (const CHAR **)&v17,
      (__int64)v16,
      (__int64)&v16[2]);
    goto LABEL_24;
  }
  if ( (unsigned int)dword_18019D4B0 > 2 )
  {
    *(_DWORD *)&v16[2] = -2147418113;
    *(_DWORD *)v16 = 556;
    v17 = (__int64)"SpatialAudioDevicePropertyReader::CreateMetadataDictionary";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_18019D4B0,
      byte_18016D2CB,
      v11,
      v12,
      (const CHAR **)&v17,
      (__int64)v16,
      (__int64)&v16[2]);
  }
  v9 = -2147418113;
LABEL_24:
  PropVariantClear(pvar);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v18);
  return v9;
}
