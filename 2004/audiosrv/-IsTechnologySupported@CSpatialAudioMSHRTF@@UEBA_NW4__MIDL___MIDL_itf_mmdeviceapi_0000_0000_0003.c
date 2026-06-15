/*
 * XREFs of ?IsTechnologySupported@CSpatialAudioMSHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18004B980
 * Callers:
 *     <none>
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180052AB8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x18006CFBC (IsGetDefaultSpatialRenderingModePresent.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@PEBUtWAVEFORMATEX@@1V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180072C30 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     _tlgKeywordOn @ 0x1800B7ADC (_tlgKeywordOn.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CSpatialAudioMSHRTF::IsTechnologySupported(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int16 a6,
        int *a7,
        _BYTE *a8,
        __int64 a9)
{
  char v13; // bl
  int v14; // eax
  int v15; // ecx
  __int64 (__fastcall ***v16)(_QWORD, _BYTE *); // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int DefaultSpatialRenderingMode; // esi
  int v20; // eax
  int v21; // esi
  __int64 v22; // rcx
  _BYTE v24[56]; // [rsp+68h] [rbp-90h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-58h]

  v13 = 1;
  if ( !byte_18019F4B5 )
  {
    v14 = IsHrtfApoAvailable();
    byte_18019F4B4 = v14 != 0;
    byte_18019F4B5 = 1;
    if ( !v14 && (unsigned int)dword_18019D478 > 4 && (unsigned __int8)tlgKeywordOn(&dword_18019D478, 16LL) )
      tlgWriteTransfer_EtwEventWriteTransfer(v15, (unsigned int)&unk_18016D292, 0, 0, 2, (__int64)v24);
  }
  v25 = 0LL;
  v16 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a5 + 56);
  if ( v16 )
    v25 = (**v16)(v16, v24);
  if ( (unsigned __int8)CSpatialAudioTechHRTF::IsTechnologySupported(
                          a1,
                          a2,
                          a3,
                          a4,
                          (__int64)v24,
                          a6,
                          (__int64)a7,
                          (__int64)a8,
                          a9) )
  {
    DefaultSpatialRenderingMode = 0;
    *a7 = 0;
    if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(v18) )
      DefaultSpatialRenderingMode = GetDefaultSpatialRenderingMode(a2);
    if ( DefaultSpatialRenderingMode == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1) )
    {
      *a7 = 1;
LABEL_18:
      *a8 = 1;
      goto LABEL_26;
    }
    if ( !DefaultSpatialRenderingMode )
    {
      if ( ((a2 - 3) & 0xFFFFFFFD) != 0 )
      {
        v20 = *a7;
      }
      else
      {
        *a7 = 10;
        v20 = 10;
      }
      if ( v20 )
        goto LABEL_18;
      v21 = 0;
      *a7 = 0;
      if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(10LL) )
        v21 = GetDefaultSpatialRenderingMode(a2);
      if ( v21 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL))(a1) )
      {
        *a7 = 1;
        goto LABEL_26;
      }
      if ( !v21 )
      {
        if ( a2 == 1 )
          *a7 = 10;
LABEL_26:
        if ( byte_18019F4B4 )
          goto LABEL_28;
      }
    }
  }
  v13 = 0;
LABEL_28:
  v22 = *(_QWORD *)(a5 + 56);
  if ( v22 )
  {
    LOBYTE(v17) = v22 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL))(v22, v17);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return v13;
}
