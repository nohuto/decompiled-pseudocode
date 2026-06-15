/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180029ED0
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180029D24 (--$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 * Callees:
 *     Create_SpatialAudioPositionCalc @ 0x18002A1D0 (Create_SpatialAudioPositionCalc.c)
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18002A374 (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046AD8 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x180068CF0 (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioDevicePropertyReader::RuntimeClassInitialize(
        SpatialAudioDevicePropertyReader *this,
        const unsigned __int16 *a2,
        struct IPropertyStore *a3)
{
  __int64 v6; // rcx
  char *v7; // rax
  char *v8; // rbx
  char *v9; // r15
  __int64 v10; // rcx
  LPUNKNOWN v11; // rcx
  int v12; // r14d
  unsigned int v13; // ebx
  char *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int SpatialAudioPositionCalc; // eax
  int v18; // eax
  HRESULT v20; // eax
  int v21; // eax
  LPVOID v22; // rbx
  int v23; // eax
  LPVOID v24; // rbx
  int v25; // eax
  __int64 v26; // rsi
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-B8h] BYREF
  LPUNKNOWN ppunkMarshal; // [rsp+50h] [rbp-B0h] BYREF
  char *v32; // [rsp+58h] [rbp-A8h]
  HRESULT v33; // [rsp+60h] [rbp-A0h] BYREF
  int v34; // [rsp+64h] [rbp-9Ch] BYREF
  int v35; // [rsp+68h] [rbp-98h] BYREF
  int v36; // [rsp+6Ch] [rbp-94h] BYREF
  int v37; // [rsp+70h] [rbp-90h] BYREF
  int v38; // [rsp+74h] [rbp-8Ch] BYREF
  int v39; // [rsp+78h] [rbp-88h] BYREF
  int v40; // [rsp+7Ch] [rbp-84h] BYREF
  int v41; // [rsp+80h] [rbp-80h] BYREF
  int v42; // [rsp+84h] [rbp-7Ch] BYREF
  int v43; // [rsp+88h] [rbp-78h] BYREF
  int v44; // [rsp+8Ch] [rbp-74h] BYREF
  int v45; // [rsp+90h] [rbp-70h] BYREF
  int v46; // [rsp+94h] [rbp-6Ch] BYREF
  int v47; // [rsp+98h] [rbp-68h] BYREF
  int v48; // [rsp+9Ch] [rbp-64h] BYREF
  unsigned int v49; // [rsp+A0h] [rbp-60h] BYREF
  int v50; // [rsp+A4h] [rbp-5Ch] BYREF
  char *v51; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v52; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v53; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v54; // [rsp+C0h] [rbp-40h] BYREF
  const char *v55; // [rsp+C8h] [rbp-38h] BYREF
  const char *v56; // [rsp+D0h] [rbp-30h] BYREF
  const char *v57; // [rsp+D8h] [rbp-28h] BYREF
  const char *v58; // [rsp+E0h] [rbp-20h] BYREF
  const char *v59; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v60[2]; // [rsp+F0h] [rbp-10h] BYREF
  OLECHAR sz[40]; // [rsp+100h] [rbp+0h] BYREF

  v60[1] = -2LL;
  v6 = *((_QWORD *)this + 52);
  if ( v6 )
  {
    *((_QWORD *)this + 52) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_QWORD *)this + 52) = 0LL;
  v32 = 0LL;
  v7 = (char *)operator new(0x268uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    memset_0(v7 + 8, 0, 0x208uLL);
    *((_QWORD *)v8 + 66) = 0LL;
    *((_QWORD *)v8 + 67) = 0LL;
    *(_QWORD *)v8 = &SpatialAudioStateIO::`vftable';
    *((_OWORD *)v8 + 34) = 0LL;
    *((_QWORD *)v8 + 70) = 0LL;
    v9 = v8 + 568;
    *((_QWORD *)v8 + 72) = &Microsoft::WRL::FtmBase::`vftable';
    *((_QWORD *)v8 + 75) = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v10 = *((_QWORD *)v8 + 75);
      if ( v10 )
      {
        *((_QWORD *)v8 + 75) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, char *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        v8 + 600);
    }
    v11 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v11->lpVtbl->Release)(v11);
    }
    *((_DWORD *)v8 + 153) = 1;
    *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioDeviceStateReader'};
    *((_QWORD *)v8 + 72) = &SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v8 = &SpatialAudioDeviceStateReader::`vftable';
    *(_QWORD *)v9 = &SpatialAudioDeviceStateReader::`vftable'{for `ISpatialAudioDeviceStateReader'};
    *((_QWORD *)v8 + 72) = &SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v51 = v8;
    v12 = SpatialAudioIO::Initialize((SpatialAudioIO *)v8, a2, a3);
    if ( v12 < 0 || (v12 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v8), v12 < 0) )
    {
      Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(&v51);
    }
    else
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 8LL))(v8 + 568);
      v32 = v8;
      (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v8 + 568);
      v12 = 0;
    }
    v13 = v12;
    if ( v12 >= 0 )
    {
      v13 = (**((__int64 (__fastcall ***)(__int64, GUID *, char *))v32 + 71))(
              (__int64)(v32 + 568),
              &GUID_10002311_cdcb_40d4_9791_eb7aa089009e,
              (char *)this + 416);
      goto LABEL_17;
    }
  }
  else
  {
    v12 = -2147024882;
    v13 = -2147024882;
  }
  if ( (unsigned int)dword_18019D4B0 > 2 )
  {
    v47 = v12;
    v48 = 53;
    v52 = (__int64)"Create_SpatialAudioDeviceStateReader";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_18019D4B0,
      (__int64)&v52,
      (__int64)&v48,
      (__int64)&v47);
  }
LABEL_17:
  v14 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v14 + 71) + 16LL))(v14 + 568);
  }
  if ( (v13 & 0x80000000) == 0 )
  {
    if ( a3 )
    {
      if ( *((struct IPropertyStore **)this + 51) != a3 )
      {
        ((void (__fastcall *)(struct IPropertyStore *))a3->lpVtbl->AddRef)(a3);
        v15 = *((_QWORD *)this + 51);
        *((_QWORD *)this + 51) = a3;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      goto LABEL_24;
    }
    ppv = 0LL;
    v29 = 0LL;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
    v20 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
    v13 = v20;
    if ( v20 >= 0 )
    {
      memset_0(sz, 0, 0x4EuLL);
      v21 = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
      v13 = v21;
      if ( v21 >= 0 )
      {
        if ( a2 && (unsigned int)_o__wcsicmp(a2, sz) )
        {
          v22 = ppv;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
          v23 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, __int64 *))(*(_QWORD *)v22 + 40LL))(
                  v22,
                  a2,
                  &v29);
          v13 = v23;
          if ( v23 < 0 )
          {
            if ( (unsigned int)dword_18019D4B0 > 2 )
            {
              v37 = v23;
              v38 = 227;
              v56 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (int)&dword_18019D4B0,
                (__int64)&v56,
                (__int64)&v38,
                (__int64)&v37);
            }
            goto LABEL_38;
          }
        }
        else
        {
          v24 = ppv;
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
          v25 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v24 + 32LL))(
                  v24,
                  0LL,
                  1LL,
                  &v29);
          v13 = v25;
          if ( v25 < 0 )
          {
            if ( (unsigned int)dword_18019D4B0 > 2 )
            {
              v39 = v25;
              v40 = 222;
              v57 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (int)&dword_18019D4B0,
                (__int64)&v57,
                (__int64)&v40,
                (__int64)&v39);
            }
            goto LABEL_38;
          }
        }
        v26 = v29;
        v27 = *((_QWORD *)this + 51);
        if ( v27 )
        {
          *((_QWORD *)this + 51) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v26 + 32LL))(v26, 0LL, (char *)this + 408);
        v13 = v28;
        if ( v28 >= 0 )
        {
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
          Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
LABEL_24:
          v16 = *((_QWORD *)this + 50);
          if ( v16 )
          {
            *((_QWORD *)this + 50) = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
          }
          SpatialAudioPositionCalc = Create_SpatialAudioPositionCalc((char *)this + 400);
          v13 = SpatialAudioPositionCalc;
          if ( SpatialAudioPositionCalc < 0 )
          {
            if ( (unsigned int)dword_18019D4B0 > 2 )
            {
              v43 = SpatialAudioPositionCalc;
              v44 = 236;
              v59 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (int)&dword_18019D4B0,
                (__int64)&v59,
                (__int64)&v44,
                (__int64)&v43);
            }
          }
          else
          {
            v18 = (*(__int64 (__fastcall **)(SpatialAudioDevicePropertyReader *))(*(_QWORD *)this + 24LL))(this);
            v13 = v18;
            if ( v18 < 0 && (unsigned int)dword_18019D4B0 > 2 )
            {
              v45 = v18;
              v46 = 240;
              v60[0] = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                (int)&dword_18019D4B0,
                (__int64)v60,
                (__int64)&v46,
                (__int64)&v45);
            }
          }
          return v13;
        }
        if ( (unsigned int)dword_18019D4B0 > 2 )
        {
          v41 = v28;
          v42 = 231;
          v58 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_18019D4B0,
            (__int64)&v58,
            (__int64)&v42,
            (__int64)&v41);
        }
      }
      else if ( (unsigned int)dword_18019D4B0 > 2 )
      {
        v35 = v21;
        v36 = 217;
        v55 = "SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_18019D4B0,
          (__int64)&v55,
          (__int64)&v36,
          (__int64)&v35);
      }
    }
    else if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      v33 = v20;
      v34 = 213;
      v54 = (__int64)"SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v54,
        (__int64)&v34,
        (__int64)&v33);
    }
LABEL_38:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v29);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&ppv);
    return v13;
  }
  if ( (unsigned int)dword_18019D4B0 > 2 )
  {
    v49 = v13;
    v50 = 201;
    v53 = (__int64)"SpatialAudioDevicePropertyReader::RuntimeClassInitialize";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)&dword_18019D4B0,
      (__int64)&v53,
      (__int64)&v50,
      (__int64)&v49);
  }
  return v13;
}
