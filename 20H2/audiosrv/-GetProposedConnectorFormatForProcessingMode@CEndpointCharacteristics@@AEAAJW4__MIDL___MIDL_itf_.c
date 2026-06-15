/*
 * XREFs of ?GetProposedConnectorFormatForProcessingMode@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000E6B0
 * Callers:
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x180021630 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180021F80 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180048438 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_f36e01949351335f5e9acafaa1161a48___ @ 0x180116668 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_f36e01949351335f5e9acafaa1161a48.c)
 *     ?IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1801235E8 (-IsValidMicArrayForAEC@EffectPolicy@@CA_NPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1800BB754 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::GetProposedConnectorFormatForProcessingMode(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        struct tWAVEFORMATEX **a4)
{
  void *v7; // rsi
  HRESULT v8; // ebx
  void *v9; // rcx
  char *v11; // rdi
  struct tWAVEFORMATEX *v12; // rbx
  void *v13; // [rsp+30h] [rbp-99h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-91h] BYREF
  __int64 v15; // [rsp+40h] [rbp-89h] BYREF
  __int64 v16; // [rsp+48h] [rbp-81h] BYREF
  __int64 v17; // [rsp+50h] [rbp-79h]
  __int64 v18; // [rsp+58h] [rbp-71h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-69h] BYREF
  PROPVARIANT pvar[2]; // [rsp+68h] [rbp-61h] BYREF
  __int64 v21; // [rsp+78h] [rbp-51h]
  PROPVARIANT v22[2]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v23; // [rsp+90h] [rbp-39h]
  __int128 v24; // [rsp+A0h] [rbp-29h] BYREF
  _DWORD v25[6]; // [rsp+B0h] [rbp-19h] BYREF
  struct _tagpropertykey v26; // [rsp+C8h] [rbp-1h] BYREF

  v7 = 0LL;
  v13 = 0LL;
  ppv = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  pv = 0LL;
  *(_OWORD *)pvar = 0LL;
  v21 = 0LL;
  *(_OWORD *)v22 = 0LL;
  v23 = 0LL;
  if ( (a2 & 0xFFFFFFFD) != 0 )
  {
    if ( a2 == eOffloadConnector )
    {
      v26 = PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId;
    }
    else
    {
      if ( a2 != eKeywordDetectorConnector )
      {
        v8 = -2147024809;
        goto LABEL_11;
      }
      v26 = PKEY_Endpoint_KeywordDetector_ConnectorId;
    }
  }
  else
  {
    *(_QWORD *)&v26.fmtid.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v26.fmtid.Data4 = 0xFC181731B718BA83uLL;
    v26.pid = 1;
  }
  v25[0] = 590439624;
  v25[1] = 1283267372;
  v25[2] = 1907779772;
  v25[3] = 1730509416;
  v25[4] = 1;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
         *((_QWORD *)this + 5),
         v25,
         pvar);
  if ( v8 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           &v26,
           v22);
    if ( v8 >= 0 )
    {
      v8 = CoCreateInstance(&CLSID_MMDeviceEnumerator, 0LL, 0x17u, &GUID_a95664d2_9614_4f35_a746_de8db63617e6, &ppv);
      if ( v8 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(LPVOID, PROPVARIANT, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, pvar[1], &v18);
        if ( v8 >= 0 )
        {
          v8 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v18 + 24LL))(
                 v18,
                 &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                 23LL);
          if ( v8 >= 0 )
          {
            v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v17 + 56LL))(
                   v17,
                   LODWORD(v22[1]),
                   &v16);
            if ( v8 >= 0 )
            {
              v8 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v16 + 104LL))(
                     v16,
                     23LL,
                     &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                     &v15);
              if ( v8 >= 0 )
              {
                v24 = (__int128)*a3;
                v8 = (*(__int64 (__fastcall **)(__int64, __int128 *, LPVOID *))(*(_QWORD *)v15 + 24LL))(v15, &v24, &pv);
                if ( v8 >= 0 )
                {
                  v11 = (char *)pv;
                  v8 = CTCoAllocPolicy::Alloc(v9, 1u, *((unsigned __int16 *)pv + 40) + 18LL, &v13);
                  if ( v8 < 0 )
                  {
                    v7 = v13;
                  }
                  else
                  {
                    v12 = (struct tWAVEFORMATEX *)v13;
                    memcpy_0(v13, v11 + 64, *((unsigned __int16 *)v11 + 40) + 18LL);
                    *a4 = v12;
                    v7 = 0LL;
                    v8 = 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_11:
  PropVariantClear(pvar);
  PropVariantClear(v22);
  CoTaskMemFree(v7);
  CoTaskMemFree(pv);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v8;
}
