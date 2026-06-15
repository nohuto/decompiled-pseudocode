/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x180118510
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x180118AB4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_c3615feb6884e65459670eec2aeca07c___.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180020540 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180047D20 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180048FB8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x1801179A8 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___.c)
 *     _lambda_f36e01949351335f5e9acafaa1161a48_::operator() @ 0x18011A62C (_lambda_f36e01949351335f5e9acafaa1161a48_--operator().c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x18011D3A8 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___(
        CEndpointCharacteristics *this,
        int a2,
        int a3,
        __int64 a4,
        struct tWAVEFORMATEX **a5)
{
  int v9; // eax
  unsigned int v10; // ebx
  struct tWAVEFORMATEX **v12; // rsi
  int OffloadDeviceFormat; // eax
  unsigned int v14; // edi
  int v15; // eax
  int ComputedDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c; // eax
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-41h] BYREF
  __int128 v18; // [rsp+38h] [rbp-29h] BYREF
  __int64 v19; // [rsp+48h] [rbp-19h]
  __int128 v20[4]; // [rsp+50h] [rbp-11h] BYREF
  __int64 v21; // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+57h]
  char v23; // [rsp+C0h] [rbp+5Fh] BYREF

  *(_QWORD *)&v18 = this;
  BYTE8(v18) = 1;
  memset(&pvar, 0, sizeof(pvar));
  if ( (*(int (__fastcall **)(_QWORD, void *, struct tagPROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
         &pvar) >= 0
    && pvar.vt == 65
    && IsValidWfxBlob(&pvar)
    && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
  {
    v23 = 0;
    lambda_f36e01949351335f5e9acafaa1161a48_::operator()(a4, pvar.bstrblobVal.pData, &v23);
    if ( v23 )
    {
      v9 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
      v10 = v9;
      if ( v9 >= 0 )
        v10 = 0;
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1951,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v9);
      PropVariantClear((PROPVARIANT *)&pvar);
      v18 = 0LL;
      v19 = 0LL;
      (*(void (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 5) + 48LL))(
        *((_QWORD *)this + 5),
        &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
        &v18);
      return v10;
    }
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  v18 = 0LL;
  v19 = 0LL;
  (*(void (__fastcall **)(_QWORD, void *, __int128 *))(**((_QWORD **)this + 5) + 48LL))(
    *((_QWORD *)this + 5),
    &PKEY_AudioEngine_PreUpgrade_DeviceFormat,
    &v18);
  if ( a2 )
  {
    v12 = a5;
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(this, a5);
    v14 = OffloadDeviceFormat;
    if ( OffloadDeviceFormat < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x195C,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)OffloadDeviceFormat);
      return v14;
    }
    lambda_f36e01949351335f5e9acafaa1161a48_::operator()(a4, *v12, &v23);
  }
  else
  {
    memset(&pvar, 0, sizeof(pvar));
    if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, struct tagPROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           &PKEY_AudioEngine_OEMFormat,
           &pvar) >= 0
      && pvar.vt == 65
      && IsValidWfxBlob(&pvar)
      && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0 )
    {
      v23 = 0;
      lambda_f36e01949351335f5e9acafaa1161a48_::operator()(a4, pvar.bstrblobVal.pData, &v23);
      if ( v23 )
      {
        v15 = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, a5);
        v10 = v15;
        if ( v15 >= 0 )
          v10 = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x196D,
            (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v15);
        PropVariantClear((PROPVARIANT *)&pvar);
        return v10;
      }
    }
    PropVariantClear((PROPVARIANT *)&pvar);
    v20[0] = *(_OWORD *)a4;
    v20[1] = *(_OWORD *)(a4 + 16);
    v20[2] = *(_OWORD *)(a4 + 32);
    v20[3] = *(_OWORD *)(a4 + 48);
    v21 = *(_QWORD *)(a4 + 64);
    ComputedDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___(
                                                                       (__int64)this,
                                                                       a3,
                                                                       v20,
                                                                       a5);
    v10 = ComputedDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c;
    if ( ComputedDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1974,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)ComputedDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c);
      return v10;
    }
  }
  return 0LL;
}
