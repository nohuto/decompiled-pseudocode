/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioDtsxStereo@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004B180
 * Callers:
 *     <none>
 * Callees:
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x1800127C0 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006CEBC (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180072B30 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPEA_N@Z @ 0x1801277CC (-AssignPriority@CSpatialAudioTech@@IEBAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@0IPEAIPE.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CSpatialAudioDtsxStereo::IsTechnologySupported(
        CSpatialAudioTech *this,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 a2,
        int a3,
        int a4,
        __int64 a5,
        __int16 a6,
        unsigned int *a7,
        _BYTE *a8,
        __int64 a9)
{
  char IsTechnologySupported; // bl
  unsigned int *v14; // rdi
  _BYTE *v15; // r12
  __int64 v16; // rdx
  __int64 (__fastcall ***v17)(_QWORD, _BYTE *); // rcx
  __int64 v18; // rcx
  int DefaultSpatialRenderingMode; // esi
  __int64 v20; // rcx
  _BYTE v22[56]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v23; // [rsp+88h] [rbp-30h]

  IsTechnologySupported = 0;
  v14 = a7;
  *a7 = 0;
  v15 = a8;
  *a8 = 0;
  CSpatialAudioTechnologies::RegistryGates();
  v16 = 0LL;
  if ( *((_QWORD *)this + 1) || !byte_18019EA30 )
  {
    a7 = (unsigned int *)v22;
    v23 = 0LL;
    v17 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a5 + 56);
    if ( v17 )
      v23 = (**v17)(v17, v22);
    IsTechnologySupported = CSpatialAudioTechHRTF::IsTechnologySupported(
                              (_DWORD)this,
                              a2,
                              a3,
                              a4,
                              (__int64)v22,
                              a6,
                              (__int64)v14,
                              (__int64)v15,
                              a9);
    if ( IsTechnologySupported )
    {
      DefaultSpatialRenderingMode = 0;
      *v14 = 0;
      IsTechnologySupported = 1;
      LOBYTE(a7) = 1;
      if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v18) )
        DefaultSpatialRenderingMode = GetDefaultSpatialRenderingMode((unsigned int)a2);
      if ( DefaultSpatialRenderingMode == (*(unsigned int (__fastcall **)(CSpatialAudioTech *))(*(_QWORD *)this + 64LL))(this) )
      {
        *v14 = 1;
LABEL_15:
        *v15 = 1;
        goto LABEL_17;
      }
      if ( DefaultSpatialRenderingMode )
      {
        IsTechnologySupported = 0;
        goto LABEL_17;
      }
      if ( a2 == Speakers )
        *v14 = 2;
      if ( *v14 )
        goto LABEL_15;
      CSpatialAudioTech::AssignPriority(this, a2, Headphones, 2u, v14, (bool *)&a7);
      IsTechnologySupported = (char)a7;
    }
  }
LABEL_17:
  v20 = *(_QWORD *)(a5 + 56);
  if ( v20 )
  {
    LOBYTE(v16) = v20 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 32LL))(v20, v16);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return IsTechnologySupported;
}
