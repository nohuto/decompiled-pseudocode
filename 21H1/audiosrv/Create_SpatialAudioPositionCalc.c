/*
 * XREFs of Create_SpatialAudioPositionCalc @ 0x18002A1D0
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180029ED0 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18012C610 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18010A238 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPE_ea_18010A238.c)
 */

__int64 __fastcall Create_SpatialAudioPositionCalc(_QWORD *a1)
{
  char *v2; // rbx
  __int64 v3; // rcx
  LPUNKNOWN v4; // rcx
  Microsoft::WRL::Details *v5; // rcx
  int v6; // esi
  LPUNKNOWN ppunkMarshal; // [rsp+40h] [rbp-48h] BYREF
  __int64 v9; // [rsp+48h] [rbp-40h] BYREF
  __int64 v10; // [rsp+50h] [rbp-38h] BYREF
  __int64 v11; // [rsp+58h] [rbp-30h] BYREF
  __int64 v12; // [rsp+90h] [rbp+8h] BYREF
  __int64 v13; // [rsp+98h] [rbp+10h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+20h] BYREF

  v9 = 0LL;
  if ( a1 )
  {
    *a1 = 0LL;
    v2 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v2 )
    {
      ppunkMarshal = 0LL;
      *((_QWORD *)v2 + 1) = &Microsoft::WRL::FtmBase::`vftable';
      *((_QWORD *)v2 + 4) = 0LL;
      if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
      {
        v3 = *((_QWORD *)v2 + 4);
        if ( v3 )
        {
          *((_QWORD *)v2 + 4) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
        }
        ((void (__fastcall *)(LPUNKNOWN, GUID *, char *))ppunkMarshal->lpVtbl->QueryInterface)(
          ppunkMarshal,
          &GUID_00000003_0000_0000_c000_000000000046,
          v2 + 32);
      }
      v4 = ppunkMarshal;
      if ( ppunkMarshal )
      {
        ppunkMarshal = 0LL;
        ((void (__fastcall *)(LPUNKNOWN))v4->lpVtbl->Release)(v4);
      }
      v5 = Microsoft::WRL::Details::ModuleBase::module_;
      *(_QWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioPositionCalc'};
      *((_QWORD *)v2 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      *((_DWORD *)v2 + 11) = 1;
      if ( v5 )
        (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)v5 + 8LL))(v5);
      *(_QWORD *)v2 = &SpatialAudioPositionCalc::`vftable'{for `ISpatialAudioPositionCalc'};
      *((_QWORD *)v2 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
      InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v2 + 48), 0, 0);
      v6 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v2)(
             v2,
             &GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545,
             &v9);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v2 + 16LL))(v2);
      if ( v6 >= 0 )
      {
        v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v9)(
               v9,
               &GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545,
               a1);
        goto LABEL_13;
      }
    }
    else
    {
      v6 = -2147024882;
    }
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v14) = v6;
      v11 = (__int64)"Create_SpatialAudioPositionCalc";
      LODWORD(v15) = 156;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v11,
        (__int64)&v15,
        (__int64)&v14);
    }
  }
  else
  {
    if ( (unsigned int)dword_18019D4B0 > 2 )
    {
      LODWORD(v12) = -2147024809;
      v10 = (__int64)"Create_SpatialAudioPositionCalc";
      LODWORD(v13) = 151;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (int)&dword_18019D4B0,
        (__int64)&v10,
        (__int64)&v13,
        (__int64)&v12);
    }
    v6 = -2147024809;
  }
LABEL_13:
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v6;
}
