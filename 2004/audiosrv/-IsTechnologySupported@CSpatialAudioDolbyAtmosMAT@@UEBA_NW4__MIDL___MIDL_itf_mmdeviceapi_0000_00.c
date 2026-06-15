/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDolbyAtmosMAT@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004BEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x1800127C0 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     ??0?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AEBV01@@Z @ 0x18005C024 (--0-$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@QEAA@AE.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006CFBC (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEBU_GUID@@IPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800729DC (-IsTechnologySupported@CSpatialAudioTechCompressed@@IEBA_NPEBUtWAVEFORMATEX@@V-$function@$$A6A_N.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CSpatialAudioDolbyAtmosMAT::IsTechnologySupported(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        _BYTE *a8,
        __int64 a9)
{
  char IsTechnologySupported; // si
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // ebx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rcx
  _BYTE v19[64]; // [rsp+50h] [rbp-69h] BYREF
  _DWORD v20[8]; // [rsp+90h] [rbp-29h] BYREF

  IsTechnologySupported = 0;
  *a7 = 0;
  *a8 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  v13 = 0LL;
  if ( *(_QWORD *)(a1 + 8) || !byte_18019EA20 )
  {
    v20[0] = 268;
    v20[1] = 1051882;
    v20[2] = -1442840448;
    v20[3] = 1905997824;
    v20[4] = 12;
    v20[5] = 1051882;
    v20[6] = -1442840448;
    v20[7] = 1905997824;
    v14 = 2;
    if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v12)
      && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
    {
      v14 = 1;
    }
    v15 = std::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>::function<long (SystemEffectDescriptor *,SystemEffectChainDescriptor *)>(
            v19,
            a5);
    IsTechnologySupported = CSpatialAudioTechCompressed::IsTechnologySupported(
                              v16,
                              a4,
                              v15,
                              (unsigned int)v20,
                              v14,
                              (__int64)a7,
                              (__int64)a8,
                              a9);
  }
  v17 = *(_QWORD *)(a5 + 56);
  if ( v17 )
  {
    LOBYTE(v13) = v17 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 32LL))(v17, v13);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return IsTechnologySupported;
}
