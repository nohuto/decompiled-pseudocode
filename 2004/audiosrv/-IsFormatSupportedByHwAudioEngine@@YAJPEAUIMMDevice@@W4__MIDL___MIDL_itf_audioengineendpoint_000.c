/*
 * XREFs of ?IsFormatSupportedByHwAudioEngine@@YAJPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEAPEAU3@@Z @ 0x1800DCC24
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014880 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180019920 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x1800D72AC (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x18004B3F0 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F1C8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall IsFormatSupportedByHwAudioEngine(
        struct IMMDevice *a1,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        const struct tWAVEFORMATEX *a3,
        struct tWAVEFORMATEX **a4)
{
  void *v7; // rdi
  unsigned int v8; // r14d
  int KSFormatFromWFXFormat; // ebx
  unsigned int v10; // esi
  _BYTE *v11; // rdx
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  void *Src; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-90h] BYREF
  PROPVARIANT pvar[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 v24; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v25[6]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v26[112]; // [rsp+B0h] [rbp-50h] BYREF

  v24 = 0LL;
  v15 = 0LL;
  v13 = 0;
  v7 = 0LL;
  Src = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v14 = 0LL;
  v18 = 0LL;
  v25[0] = 590439624;
  v25[1] = 1283267372;
  v25[2] = 1907779772;
  v8 = 104;
  v25[3] = 1730509416;
  v25[4] = 1;
  memset_0(v26, 0, 0x68uLL);
  *(_OWORD *)pvar = 0LL;
  v23 = 0LL;
  if ( a3 && a1 )
  {
    KSFormatFromWFXFormat = ((__int64 (__fastcall *)(struct IMMDevice *, GUID *, __int64, _QWORD, __int64 *))a1->lpVtbl->Activate)(
                              a1,
                              &GUID_e749ccff_bf18_4e45_9c2b_fbf8ee730029,
                              23LL,
                              0LL,
                              &v24);
    if ( KSFormatFromWFXFormat >= 0 )
    {
      KSFormatFromWFXFormat = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(
                                a1,
                                0LL,
                                &v15);
      if ( KSFormatFromWFXFormat >= 0 )
      {
        KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, const struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
                                  v15,
                                  &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
                                  pvar);
        if ( KSFormatFromWFXFormat >= 0 )
        {
          if ( LOWORD(pvar[0]) != 19 )
          {
LABEL_7:
            KSFormatFromWFXFormat = -2147418113;
            goto LABEL_26;
          }
          v10 = (unsigned int)pvar[1];
          *(_OWORD *)pvar = 0LL;
          v23 = 0LL;
          KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v15 + 40LL))(
                                    v15,
                                    v25,
                                    pvar);
          if ( KSFormatFromWFXFormat >= 0 )
          {
            if ( LOWORD(pvar[0]) != 31 )
              goto LABEL_10;
            KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(_QWORD, PROPVARIANT, __int64 *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                              + 40LL))(
                                      *(_QWORD *)&g_DeviceEnumerator,
                                      pvar[1],
                                      &v21);
            if ( KSFormatFromWFXFormat >= 0 )
            {
              KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v21 + 24LL))(
                                        v21,
                                        &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                                        1LL);
              if ( KSFormatFromWFXFormat >= 0 )
              {
                KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v20 + 56LL))(
                                          v20,
                                          v10,
                                          &v14);
                if ( KSFormatFromWFXFormat >= 0 )
                {
                  KSFormatFromWFXFormat = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v14)(
                                            v14,
                                            &GUID_9c2c4058_23f5_41de_877a_df3af236a09e,
                                            &v19);
                  if ( KSFormatFromWFXFormat >= 0 )
                  {
                    KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 24LL))(
                                              v19,
                                              &v16);
                    if ( KSFormatFromWFXFormat >= 0 )
                    {
                      if ( v16 != 3 )
                        goto LABEL_7;
                      KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v14 + 104LL))(
                                                v14,
                                                1LL,
                                                &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                                                &v18);
                      if ( KSFormatFromWFXFormat >= 0 )
                      {
                        KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(
                                                  a3,
                                                  (struct KSDATAFORMAT_WAVEFORMATEX **)&Src);
                        v7 = Src;
                        if ( KSFormatFromWFXFormat >= 0 )
                        {
                          v11 = Src;
                          if ( *(_DWORD *)Src >= 0x68u )
                          {
                            v8 = *(_DWORD *)Src;
                          }
                          else
                          {
                            memcpy_0(v26, Src, *(unsigned int *)Src);
                            v11 = v26;
                          }
                          KSFormatFromWFXFormat = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, int *))(*(_QWORD *)v18 + 24LL))(
                                                    v18,
                                                    v11,
                                                    v8,
                                                    &v13);
                          if ( KSFormatFromWFXFormat >= 0 && !v13 )
LABEL_10:
                            KSFormatFromWFXFormat = -2004287480;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else
  {
    KSFormatFromWFXFormat = -2147024809;
  }
LABEL_26:
  if ( a4 )
    *a4 = 0LL;
  PropVariantClear(pvar);
  if ( v7 )
    CoTaskMemFree(v7);
  if ( KSFormatFromWFXFormat < 0 )
    AudSrvTraceLoggingErrorHelper("IsFormatSupportedByHwAudioEngine", 418, KSFormatFromWFXFormat);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  return (unsigned int)KSFormatFromWFXFormat;
}
