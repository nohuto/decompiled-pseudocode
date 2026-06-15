/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioDevicePropertyReader@@V1@AEAPEBGAEAPEAUIPropertyStore@@@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioDevicePropertyReader@@AEAPEBGAEAPEAUIPropertyStore@@@Z @ 0x180029D24
 * Callers:
 *     ?DecideVssEffectUsage@CEndpointCharacteristics@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180029998 (-DecideVssEffectUsage@CEndpointCharacteristics@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffec.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18002A42C (Create_SpatialAudioDevicePropertyReader.c)
 * Callees:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180029ED0 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AB9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioDevicePropertyReader,SpatialAudioDevicePropertyReader,unsigned short const * &,IPropertyStore * &>(
        char **a1,
        const unsigned __int16 **a2,
        struct IPropertyStore **a3)
{
  char *v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // rcx
  LPUNKNOWN v9; // rcx
  int v10; // edi
  LPUNKNOWN ppunkMarshal; // [rsp+60h] [rbp+8h] BYREF
  char *v13; // [rsp+78h] [rbp+20h]

  *a1 = 0LL;
  v6 = (char *)operator new(0x208uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 1) = &Microsoft::WRL::FtmBase::`vftable';
    v7 = (__int64 *)(v6 + 32);
    *((_QWORD *)v6 + 4) = 0LL;
    ppunkMarshal = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v8 = *v7;
      if ( *v7 )
      {
        *v7 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, char *))ppunkMarshal->lpVtbl->QueryInterface)(
        ppunkMarshal,
        &GUID_00000003_0000_0000_c000_000000000046,
        v6 + 32);
    }
    v9 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v9->lpVtbl->Release)(v9);
    }
    *((_DWORD *)v6 + 11) = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioDevicePropertyReader'};
    *((_QWORD *)v6 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &SpatialAudioDevicePropertyReader::`vftable'{for `ISpatialAudioDevicePropertyReader'};
    *((_QWORD *)v6 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDevicePropertyReader,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v6 + 64), 0, 0);
    *((_QWORD *)v6 + 50) = 0LL;
    *((_QWORD *)v6 + 51) = 0LL;
    *((_QWORD *)v6 + 52) = 0LL;
    *((_DWORD *)v6 + 106) = 0;
    *((_QWORD *)v6 + 63) = 0LL;
    *((_DWORD *)v6 + 128) = 0;
    v13 = 0LL;
    v10 = SpatialAudioDevicePropertyReader::RuntimeClassInitialize((SpatialAudioDevicePropertyReader *)v6, *a2, *a3);
    if ( v10 >= 0 )
    {
      (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v10 = 0;
    }
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
