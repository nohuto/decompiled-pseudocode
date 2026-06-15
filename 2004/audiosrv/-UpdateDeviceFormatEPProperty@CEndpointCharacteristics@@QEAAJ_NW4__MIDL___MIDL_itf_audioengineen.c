/*
 * XREFs of ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004CB34
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x180020010 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180049200 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     wil::details::lambda_call__lambda_00b803850aab493b48638f22b09b2a64___::_lambda_call__lambda_00b803850aab493b48638f22b09b2a64___ @ 0x180072844 (wil--details--lambda_call__lambda_00b803850aab493b48638f22b09b2a64___--_lambda_call__lambda_00b8.c)
 *     _lambda_7a4aa03cdf3c75c0f652933ca8714d6d_::operator() @ 0x1800728B4 (_lambda_7a4aa03cdf3c75c0f652933ca8714d6d_--operator().c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x180118B74 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_c3615feb6884e65459670eec2aeca07c___.c)
 *     ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18011FCDC (-SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180020540 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x18004CE10 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18004CE34 (-SetSpatialAudioSettings@CEndpointCharacteristics@@AEAAX_NW4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z @ 0x1801263B8 (-ClearSpatialAudioSettings@CSpatialProperties@@QEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
        const unsigned __int16 **this,
        char a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4)
{
  int v8; // edi
  const PROPERTYKEY *v9; // rax
  __int64 v10; // rdx
  __int64 v12; // [rsp+38h] [rbp-71h] BYREF
  __int64 v13; // [rsp+40h] [rbp-69h] BYREF
  __int64 v14; // [rsp+48h] [rbp-61h] BYREF
  PROPVARIANT propvar1[2]; // [rsp+50h] [rbp-59h] BYREF
  const struct tWAVEFORMATEX *v16; // [rsp+60h] [rbp-49h]
  PROPVARIANT propvar2[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v18; // [rsp+78h] [rbp-31h]
  int v19[4]; // [rsp+80h] [rbp-29h] BYREF
  GUID v20; // [rsp+90h] [rbp-19h]
  GUID v21; // [rsp+A0h] [rbp-9h]
  GUID v22; // [rsp+B0h] [rbp+7h]
  GUID fmtid; // [rsp+C0h] [rbp+17h] BYREF
  DWORD pid; // [rsp+D0h] [rbp+27h]

  v8 = 0;
  v14 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  *(_OWORD *)propvar1 = 0LL;
  v16 = 0LL;
  *(_OWORD *)propvar2 = 0LL;
  v18 = 0LL;
  if ( a4 )
  {
    v8 = ValidateWaveFormatEx(a4);
    if ( v8 < 0 )
      goto LABEL_20;
    LOWORD(propvar1[0]) = 65;
    LODWORD(propvar1[1]) = a4->cbSize + 18;
    v16 = a4;
  }
  else
  {
    CSpatialProperties::ClearSpatialAudioSettings((CSpatialProperties *)(this + 221), this[3]);
  }
  v9 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  if ( a3 != eKeywordDetectorConnector )
    v9 = &PKEY_AudioEngine_DeviceFormat;
  fmtid = v9->fmtid;
  pid = v9->pid;
  if ( (*(int (__fastcall **)(const unsigned __int16 *, GUID *, PROPVARIANT *))(*(_QWORD *)this[5] + 40LL))(
         this[5],
         &fmtid,
         propvar2) >= 0
    && !PropVariantCompareEx(propvar1, propvar2, PVCU_DEFAULT, 0)
    || (v8 = (*(__int64 (__fastcall **)(const unsigned __int16 *, GUID *, PROPVARIANT *))(*(_QWORD *)this[5] + 48LL))(
               this[5],
               &fmtid,
               propvar1),
        v8 >= 0) )
  {
    if ( a4 )
    {
      if ( !a2 && a3 != eKeywordDetectorConnector && !*((_DWORD *)this + 8) )
      {
        CEndpointCharacteristics::SetSpatialAudioSettings((CEndpointCharacteristics *)this, 0, a3, a4);
        if ( !*((_BYTE *)this + 8734) )
        {
          v8 = (*(__int64 (__fastcall **)(const unsigned __int16 *, GUID *, __int64))(*(_QWORD *)this[2] + 24LL))(
                 this[2],
                 &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
                 1LL);
          if ( v8 >= 0 )
          {
            v19[0] = 64;
            v20 = GUID_73647561_0000_0010_8000_00aa00389b71;
            v21 = GUID_00000001_0000_0010_8000_00aa00389b71;
            v22 = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
            v8 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64, _QWORD, __int64 *))(MEMORY[0] + 24LL))(
                   0LL,
                   v19,
                   64LL,
                   0LL,
                   &v14);
            if ( v8 >= 0
              && (*(int (__fastcall **)(_QWORD, __int64, GUID *, __int64 *))(MEMORY[0] + 32LL))(
                   0LL,
                   v14,
                   &GUID_bb11c46f_ec28_493c_b88a_5db88062ce98,
                   &v13) >= 0
              && (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v13 + 104LL))(
                   v13,
                   1LL,
                   &GUID_bb11c46f_ec28_493c_b88a_5db88062ce98,
                   &v12) >= 0 )
            {
              if ( a4->wFormatTag == 0xFFFE )
                v10 = *(unsigned int *)&a4[1].nChannels;
              else
                v10 = (unsigned int)(a4->nChannels != 2) + 3;
              (*(void (__fastcall **)(__int64, __int64, void *))(*(_QWORD *)v12 + 24LL))(
                v12,
                v10,
                &EVENTCONTEXT_POLICYCONFIG);
            }
          }
        }
      }
    }
  }
LABEL_20:
  PropVariantClear(propvar2);
  LogEPCError("CEndpointCharacteristics::UpdateDeviceFormatEPProperty", 6774, v8);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v8;
}
