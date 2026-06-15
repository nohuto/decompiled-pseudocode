/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x1801188C8
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x180020010 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180020540 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180047D10 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180049004 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x180118054 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     _lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator() @ 0x18011A6A0 (_lambda_cc1fbeea7d61a5d688c074f297f6e07b_--operator().c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x18011D468 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
        CEndpointCharacteristics *this,
        int a2,
        int a3,
        _OWORD *a4,
        struct tWAVEFORMATEX **a5)
{
  int v9; // eax
  int OffloadDeviceFormat; // ebx
  __int64 v12; // rdx
  int v13; // eax
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-20h] BYREF
  struct tWAVEFORMATEX *Src[2]; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  *(_QWORD *)&v14 = this;
  BYTE8(v14) = 1;
  *(_OWORD *)pvar = 0LL;
  Src[0] = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, void *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
         pvar) >= 0
    && LOWORD(pvar[0]) == 65
    && IsValidWfxBlob((struct tagPROPVARIANT *)pvar)
    && (int)ValidateWaveFormatEx(Src[0]) >= 0
    && (unsigned __int8)lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator()(a4, Src[0]) )
  {
    v9 = CloneWaveFormat(Src[0], a5);
    OffloadDeviceFormat = v9;
    if ( v9 >= 0 )
      OffloadDeviceFormat = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1951,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v9);
    PropVariantClear(pvar);
    v14 = 0LL;
    v15 = 0LL;
    (*(void (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 5) + 48LL))(
      *((_QWORD *)this + 5),
      &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
      &v14);
    return (unsigned int)OffloadDeviceFormat;
  }
  PropVariantClear(pvar);
  v14 = 0LL;
  v15 = 0LL;
  (*(void (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 5) + 48LL))(
    *((_QWORD *)this + 5),
    &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
    &v14);
  if ( a2 )
  {
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(this, a5);
    if ( OffloadDeviceFormat < 0 )
    {
      v12 = 6492LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)OffloadDeviceFormat);
      return (unsigned int)OffloadDeviceFormat;
    }
    lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator()(a4, *a5);
  }
  else
  {
    *(_OWORD *)pvar = 0LL;
    Src[0] = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           &PKEY_AudioEngine_OEMFormat,
           pvar) >= 0
      && LOWORD(pvar[0]) == 65
      && IsValidWfxBlob((struct tagPROPVARIANT *)pvar)
      && (int)ValidateWaveFormatEx(Src[0]) >= 0
      && (unsigned __int8)lambda_cc1fbeea7d61a5d688c074f297f6e07b_::operator()(a4, Src[0]) )
    {
      v13 = CloneWaveFormat(Src[0], a5);
      OffloadDeviceFormat = v13;
      if ( v13 >= 0 )
        OffloadDeviceFormat = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x196D,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v13);
      PropVariantClear(pvar);
      return (unsigned int)OffloadDeviceFormat;
    }
    PropVariantClear(pvar);
    *(_OWORD *)pvar = *a4;
    *(_OWORD *)Src = a4[1];
    OffloadDeviceFormat = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___(
                            (__int64)this,
                            a3,
                            (__int128 *)pvar,
                            a5);
    if ( OffloadDeviceFormat < 0 )
    {
      v12 = 6516LL;
      goto LABEL_14;
    }
  }
  return 0LL;
}
