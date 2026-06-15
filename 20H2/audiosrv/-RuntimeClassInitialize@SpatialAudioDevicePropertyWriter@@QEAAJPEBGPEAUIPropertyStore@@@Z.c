/*
 * XREFs of ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180057D08
 * Callers:
 *     ??$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyWriter@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x18005C5C0 (--$MakeAndInitialize@VSpatialAudioDevicePropertyWriter@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Detail.c)
 * Callees:
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800042A4 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180046308 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180057430 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??4?$ComPtr@UIPropertyStore@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertyStore@@@Z @ 0x180057DB0 (--4-$ComPtr@UIPropertyStore@@@WRL@Microsoft@@QEAAAEAV012@PEAUIPropertyStore@@@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x180109668 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_180109668.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialAudioDevicePropertyWriter::RuntimeClassInitialize(
        SpatialAudioDevicePropertyWriter *this,
        char *a2,
        struct IPropertyStore *a3)
{
  unsigned int v6; // ebx
  wchar_t *v7; // r15
  char *v8; // rcx
  __int64 v9; // rcx
  int v11; // eax
  HRESULT v12; // eax
  LPVOID v13; // rbx
  HRESULT Instance; // eax
  LPVOID v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rcx
  LPVOID *v18; // rdi
  LPVOID v19; // rcx
  int v20; // [rsp+48h] [rbp-59h] BYREF
  int v21; // [rsp+4Ch] [rbp-55h] BYREF
  __int64 v22; // [rsp+50h] [rbp-51h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-41h] BYREF
  _QWORD v25[2]; // [rsp+68h] [rbp-39h] BYREF
  OLECHAR sz[40]; // [rsp+78h] [rbp-29h] BYREF

  v25[1] = -2LL;
  v6 = 0;
  *((_DWORD *)this + 24) = 0;
  v7 = (wchar_t *)((char *)this + 112);
  v8 = (char *)this + 112;
  if ( a2 )
    StringCchCopyW(v8, 260LL, a2);
  else
    memset_0(v8, 0, 0x208uLL);
  if ( !a3 )
  {
    ppv = 0LL;
    v22 = 0LL;
    memset_0(sz, 0, 0x4EuLL);
    v11 = StringFromGUID2(&DEVINTERFACE_AUDIO_RENDER, sz, 39);
    v6 = v11;
    if ( v11 < 0 )
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        v20 = v11;
        v21 = 123;
        pv = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_18019C480,
          (__int64)&pv,
          (__int64)&v21,
          (__int64)&v20);
      }
      goto LABEL_34;
    }
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
    v12 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
    v6 = v12;
    if ( v12 < 0 )
    {
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        v21 = v12;
        v20 = 126;
        pv = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (int)&dword_18019C480,
          (__int64)&pv,
          (__int64)&v20,
          (__int64)&v21);
      }
      goto LABEL_34;
    }
    if ( !a2 || !(unsigned int)_o__wcsicmp(a2, sz) )
    {
      v13 = ppv;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
      Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)v13 + 32LL))(
                   v13,
                   0LL,
                   1LL,
                   &v22);
      v6 = Instance;
      if ( Instance < 0 )
      {
        if ( (unsigned int)dword_18019C480 > 2 )
        {
          v20 = 131;
LABEL_33:
          v21 = Instance;
          v25[0] = "SpatialAudioDevicePropertyWriter::RuntimeClassInitialize";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (int)&dword_18019C480,
            (__int64)v25,
            (__int64)&v20,
            (__int64)&v21);
          goto LABEL_34;
        }
        goto LABEL_34;
      }
      pv = 0LL;
      (*(void (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v22 + 40LL))(v22, &pv);
      StringCbPrintfW(v7, 0x104uLL, L"%s", pv);
      CoTaskMemFree(pv);
    }
    v15 = ppv;
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
    Instance = (*(__int64 (__fastcall **)(LPVOID, wchar_t *, __int64 *))(*(_QWORD *)v15 + 40LL))(v15, v7, &v22);
    v6 = Instance;
    if ( Instance >= 0 )
    {
      v16 = v22;
      v17 = *((_QWORD *)this + 11);
      if ( v17 )
      {
        *((_QWORD *)this + 11) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      Instance = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v16 + 32LL))(
                   v16,
                   0LL,
                   (char *)this + 88);
      v6 = Instance;
      if ( Instance >= 0 )
      {
        v18 = (LPVOID *)((char *)this + 104);
        v19 = *v18;
        if ( *v18 )
        {
          *v18 = 0LL;
          (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v19 + 16LL))(v19);
        }
        Instance = CoCreateInstance(
                     &GUID_870af99c_171d_4f9e_af0d_e63df40c2bc9,
                     0LL,
                     1u,
                     &GUID_0f0058a4_87be_41e6_bcd3_26b19f7e9177,
                     v18);
        v6 = Instance;
        if ( Instance >= 0 || (unsigned int)dword_18019C480 <= 2 )
          goto LABEL_34;
        v20 = 147;
        goto LABEL_33;
      }
      if ( (unsigned int)dword_18019C480 > 2 )
      {
        v20 = 144;
        goto LABEL_33;
      }
    }
    else if ( (unsigned int)dword_18019C480 > 2 )
    {
      v20 = 141;
      goto LABEL_33;
    }
LABEL_34:
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&ppv);
    return v6;
  }
  Microsoft::WRL::ComPtr<IPropertyStore>::operator=((char *)this + 88, a3);
  v9 = *((_QWORD *)this + 13);
  if ( v9 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return v6;
}
