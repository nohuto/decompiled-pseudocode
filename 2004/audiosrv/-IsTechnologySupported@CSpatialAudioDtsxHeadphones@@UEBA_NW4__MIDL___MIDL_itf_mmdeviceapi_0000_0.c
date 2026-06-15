/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDtsxHeadphones@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004AFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x1800127C0 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006CFBC (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180072C30 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CSpatialAudioDtsxHeadphones::IsTechnologySupported(
        _QWORD *a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int16 a6,
        int *a7,
        _BYTE *a8,
        __int64 a9)
{
  char IsTechnologySupported; // di
  __int64 v14; // rdx
  __int64 (__fastcall ***v15)(_QWORD, _BYTE *); // rcx
  __int64 v16; // rcx
  int DefaultSpatialRenderingMode; // esi
  int v18; // eax
  int v19; // esi
  __int64 v20; // rcx
  _BYTE v22[56]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v23; // [rsp+88h] [rbp-30h]

  IsTechnologySupported = 0;
  *a7 = 0;
  *a8 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  v14 = 0LL;
  if ( a1[1] || !byte_18019EA20 )
  {
    v23 = 0LL;
    v15 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a5 + 56);
    if ( v15 )
      v23 = (**v15)(v15, v22);
    IsTechnologySupported = CSpatialAudioTechHRTF::IsTechnologySupported(
                              (_DWORD)a1,
                              a2,
                              a3,
                              a4,
                              (__int64)v22,
                              a6,
                              (__int64)a7,
                              (__int64)a8,
                              a9);
    if ( IsTechnologySupported )
    {
      DefaultSpatialRenderingMode = 0;
      *a7 = 0;
      IsTechnologySupported = 1;
      if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v16) )
        DefaultSpatialRenderingMode = GetDefaultSpatialRenderingMode(a2);
      if ( DefaultSpatialRenderingMode == (*(unsigned int (__fastcall **)(_QWORD *))(*a1 + 64LL))(a1) )
      {
        *a7 = 1;
LABEL_15:
        *a8 = 1;
        goto LABEL_24;
      }
      if ( DefaultSpatialRenderingMode )
        goto LABEL_21;
      if ( ((a2 - 3) & 0xFFFFFFFD) != 0 )
      {
        v18 = *a7;
      }
      else
      {
        *a7 = 2;
        v18 = 2;
      }
      if ( v18 )
        goto LABEL_15;
      v19 = 0;
      *a7 = 0;
      if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(2LL) )
        v19 = GetDefaultSpatialRenderingMode(a2);
      if ( v19 == (*(unsigned int (__fastcall **)(_QWORD *))(*a1 + 64LL))(a1) )
      {
        *a7 = 1;
        goto LABEL_24;
      }
      if ( v19 )
      {
LABEL_21:
        IsTechnologySupported = 0;
      }
      else if ( a2 == 1 )
      {
        *a7 = 2;
      }
    }
  }
LABEL_24:
  v20 = *(_QWORD *)(a5 + 56);
  if ( v20 )
  {
    LOBYTE(v14) = v20 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 32LL))(v20, v14);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return IsTechnologySupported;
}
