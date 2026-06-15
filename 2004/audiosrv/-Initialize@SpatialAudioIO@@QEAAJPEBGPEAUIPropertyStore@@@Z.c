/*
 * XREFs of ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18002A374
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180029ED0 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180055C2C (--$MakeAndInitialize@VSpatialAudioDeviceStateReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 *     ??$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDeviceStateWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18005CB50 (--$MakeAndInitialize@VSpatialAudioDeviceStateWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AC8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A2F8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A2F8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioIO::Initialize(
        SpatialAudioIO *this,
        const unsigned __int16 *a2,
        struct IPropertyStore *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  HRESULT v10; // eax
  int v11; // eax
  LPVOID v12; // rbx
  int v13; // eax
  LPVOID v14; // rbx
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  HRESULT Instance; // eax
  int v21; // [rsp+48h] [rbp-49h] BYREF
  _DWORD v22[3]; // [rsp+4Ch] [rbp-45h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp-39h] BYREF
  __int64 v24[3]; // [rsp+60h] [rbp-31h] BYREF
  OLECHAR sz[40]; // [rsp+78h] [rbp-19h] BYREF

  v24[1] = -2LL;
  if ( a3 )
  {
    if ( *((struct IPropertyStore **)this + 66) != a3 )
    {
      ((void (__fastcall *)(struct IPropertyStore *))a3->lpVtbl->AddRef)(a3);
      v6 = *((_QWORD *)this + 66);
      *((_QWORD *)this + 66) = a3;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v7 = *((_QWORD *)this + 67);
    if ( v7 )
    {
      *((_QWORD *)this + 67) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return (*(unsigned int (__fastcall **)(SpatialAudioIO *))(*(_QWORD *)this + 8LL))(this);
  }
  ppv = 0LL;
  *(_QWORD *)&v22[1] = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
  v10 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
  v8 = v10;
  if ( v10 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      v21 = v10;
      v22[0] = 37;
      v24[0] = (__int64)"SpatialAudioIO::Initialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)v24,
        (__int64)v22,
        (__int64)&v21);
    }
LABEL_12:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22[1]);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
    return v8;
  }
  memset_0(sz, 0, 0x4EuLL);
  v11 = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
  v8 = v11;
  if ( v11 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      v22[0] = v11;
      v21 = 41;
      v24[0] = (__int64)"SpatialAudioIO::Initialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)v24,
        (__int64)&v21,
        (__int64)v22);
    }
    goto LABEL_12;
  }
  if ( a2 && (unsigned int)_o__wcsicmp(a2, sz) )
  {
    v12 = ppv;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22[1]);
    v13 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, _DWORD *))(*(_QWORD *)v12 + 40LL))(
            v12,
            a2,
            &v22[1]);
    v8 = v13;
    if ( v13 < 0 )
    {
      if ( (unsigned int)dword_18019D4B0 > 2 )
      {
        v22[0] = v13;
        v21 = 51;
        v24[0] = (__int64)"SpatialAudioIO::Initialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_18019D4B0,
          (__int64)v24,
          (__int64)&v21,
          (__int64)v22);
      }
      goto LABEL_12;
    }
  }
  else
  {
    v14 = ppv;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22[1]);
    v15 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, _DWORD *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, 1LL, &v22[1]);
    v8 = v15;
    if ( v15 < 0 )
    {
      if ( (unsigned int)dword_18019D4B0 > 2 )
      {
        v22[0] = v15;
        v21 = 46;
        v24[0] = (__int64)"SpatialAudioIO::Initialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_18019D4B0,
          (__int64)v24,
          (__int64)&v21,
          (__int64)v22);
      }
      goto LABEL_12;
    }
  }
  v16 = *(_QWORD *)&v22[1];
  v17 = *((_QWORD *)this + 66);
  if ( v17 )
  {
    *((_QWORD *)this + 66) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v16 + 32LL))(v16, 0LL, (char *)this + 528);
  v8 = v18;
  if ( v18 < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      v22[0] = v18;
      v21 = 55;
      v24[0] = (__int64)"SpatialAudioIO::Initialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)v24,
        (__int64)&v21,
        (__int64)v22);
    }
    goto LABEL_12;
  }
  v19 = *((_QWORD *)this + 67);
  if ( v19 )
  {
    *((_QWORD *)this + 67) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  Instance = CoCreateInstance(
               &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
               0LL,
               1u,
               &GUID_0f0058a4_87be_41e6_bcd3_26b19f7e9177,
               (LPVOID *)this + 67);
  v8 = Instance;
  if ( Instance < 0 )
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      v22[0] = Instance;
      v21 = 58;
      v24[0] = (__int64)"SpatialAudioIO::Initialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)v24,
        (__int64)&v21,
        (__int64)v22);
    }
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22[1]);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
  return (*(unsigned int (__fastcall **)(SpatialAudioIO *))(*(_QWORD *)this + 8LL))(this);
}
