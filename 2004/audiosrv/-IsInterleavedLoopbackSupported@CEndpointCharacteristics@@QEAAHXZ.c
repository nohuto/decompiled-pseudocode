/*
 * XREFs of ?IsInterleavedLoopbackSupported@CEndpointCharacteristics@@QEAAHXZ @ 0x18011EA84
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180059D28 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_1ddcc36e30584de0b30e6aa0e02df019_::operator() @ 0x180119D24 (_lambda_1ddcc36e30584de0b30e6aa0e02df019_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CEndpointCharacteristics::IsInterleavedLoopbackSupported(CEndpointCharacteristics *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v5; // [rsp+48h] [rbp-59h] BYREF
  __int64 v6; // [rsp+50h] [rbp-51h] BYREF
  __int64 v7; // [rsp+58h] [rbp-49h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-41h] BYREF
  PROPVARIANT pvar[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v10; // [rsp+78h] [rbp-29h]
  PROPVARIANT v11[2]; // [rsp+80h] [rbp-21h] BYREF
  __int64 v12; // [rsp+90h] [rbp-11h]
  GUID v13; // [rsp+98h] [rbp-9h] BYREF
  __int128 v14; // [rsp+A8h] [rbp+7h]
  _DWORD v15[6]; // [rsp+B8h] [rbp+17h] BYREF
  __int128 v16; // [rsp+D0h] [rbp+2Fh] BYREF
  __int64 v17; // [rsp+E0h] [rbp+3Fh]
  int v18; // [rsp+E8h] [rbp+47h]

  v2 = 0;
  ppv = 0LL;
  v7 = 0LL;
  v6 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v5 = 0;
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v10 = 0LL;
  if ( CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &ppv) >= 0 )
  {
    HIDWORD(v14) = 0;
    v13 = GUID_e9ebe550_d619_4c0a_976b_7062322b3006;
    LODWORD(v14) = 1;
    *(_QWORD *)((char *)&v14 + 4) = 1LL;
    v3 = *((_QWORD *)this + 5);
    if ( v3 )
    {
      v15[0] = 590439624;
      v15[1] = 1283267372;
      v15[2] = 1907779772;
      v15[3] = 1730509416;
      v15[4] = 1;
      (*(void (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v3 + 40LL))(v3, v15, pvar);
      if ( LOWORD(pvar[0]) != 31
        || (*(int (__fastcall **)(LPVOID, PROPVARIANT, __int64 *))(*(_QWORD *)ppv + 40LL))(ppv, pvar[1], &v7) < 0
        || (*(int (__fastcall **)(_QWORD, const struct _tagpropertykey *, PROPVARIANT *))(**((_QWORD **)this + 5) + 40LL))(
             *((_QWORD *)this + 5),
             &PKEY_Endpoint_KeywordDetector_ConnectorId,
             v11) < 0
        || LOWORD(v11[0]) != 19 )
      {
        goto LABEL_11;
      }
      DWORD2(v14) = LOWORD(v11[1]);
    }
    if ( (*(int (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 24LL))(
           v7,
           &GUID_28f54685_06fd_11d2_b27a_00a0c9223196,
           1LL,
           0LL,
           &v6) >= 0 )
    {
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0;
      if ( (*(int (__fastcall **)(__int64, GUID *, __int64, __int128 *, int, int *))(*(_QWORD *)v6 + 24LL))(
             v6,
             &v13,
             32LL,
             &v16,
             28,
             &v5) >= 0 )
        v2 = 1;
    }
  }
LABEL_11:
  PropVariantClear(pvar);
  PropVariantClear(v11);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return v2;
}
