/*
 * XREFs of ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180012800
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180014880 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J9@Z @ 0x18001DA40 (-DerivePeriodicityForStream@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@PEAUIAudioStrea.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800EB74C (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBGPEAUIStreamGroupProxy@@PEAUSYSTEM_.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ED40C (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x18001FAE0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800206E0 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x180022600 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ?IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x180044E38 (-IsSPDIFFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180047D10 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180049004 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x18004940C (-DeriveMixFormatFromDevicePipeFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180049750 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18004C418 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18004C4A0 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x1800D6998 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_aud.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x1800D72AC (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x1800DC33C (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x1800DD078 (-IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z.c)
 *     wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___ @ 0x1800E2044 (wil--details--lambda_call__lambda_bb75d7955c525a160db854778f06b41a___--_lambda_call__lambda_bb75.c)
 */

// Hidden C++ exception states: #wind=24
__int64 __fastcall DeriveDeviceGraphFormatsForStream(
        struct CEndpointCharacteristics *a1,
        char a2,
        struct _GUID *a3,
        enum _AUDCLNT_SHAREMODE a4,
        unsigned int a5,
        struct _GUID *a6,
        struct _GUID *a7,
        struct _GUID *a8,
        struct tWAVEFORMATEX *a9,
        struct tWAVEFORMATEX **a10,
        struct tWAVEFORMATEX **a11,
        struct tWAVEFORMATEX **a12,
        struct tWAVEFORMATEX **a13)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v13; // r12d
  struct tWAVEFORMATEX *v15; // rbx
  signed int DeviceDefaults; // r15d
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned int i; // r8d
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  int v23; // esi
  void *v24; // rdi
  __int64 v25; // rsi
  struct tWAVEFORMATEX *v26; // rax
  struct tWAVEFORMATEX *v27; // rax
  struct tWAVEFORMATEX *v28; // rax
  struct tWAVEFORMATEX *v29; // rax
  struct tWAVEFORMATEX *v30; // rax
  struct IMMDevice *v32; // rbx
  bool v33; // sf
  const struct tWAVEFORMATEX *v34; // r9
  BYTE *pData; // rbx
  int v36; // eax
  struct IAudioMediaType *v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // r14
  const struct tWAVEFORMATEX *v40; // rax
  const struct tWAVEFORMATEX *v41; // rax
  const struct tWAVEFORMATEX *v42; // rax
  struct tWAVEFORMATEX **v43; // [rsp+20h] [rbp-E0h]
  int v44; // [rsp+20h] [rbp-E0h]
  struct tWAVEFORMATEX *v45; // [rsp+40h] [rbp-C0h] BYREF
  struct tWAVEFORMATEX *v46; // [rsp+48h] [rbp-B8h] BYREF
  void *Src; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID v49; // [rsp+60h] [rbp-A0h] BYREF
  struct IAudioMediaType *v50; // [rsp+70h] [rbp-90h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v52; // [rsp+A0h] [rbp-60h] BYREF
  struct _GUID v53; // [rsp+B0h] [rbp-50h] BYREF
  struct tWAVEFORMATEX **v54; // [rsp+C0h] [rbp-40h]
  struct tWAVEFORMATEX **v55; // [rsp+C8h] [rbp-38h]
  struct tWAVEFORMATEX **v56; // [rsp+D0h] [rbp-30h]
  struct tWAVEFORMATEX **v57; // [rsp+D8h] [rbp-28h]
  struct _GUID v58; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v59; // [rsp+F0h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v13 = (int)a3;
  *(_QWORD *)&v52.Data1 = a7;
  v56 = a10;
  v55 = a11;
  v57 = a12;
  v54 = a13;
  v46 = 0LL;
  v15 = 0LL;
  v45 = 0LL;
  pv = 0LL;
  Src = 0LL;
  if ( a4 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    DeviceDefaults = CloneWaveFormat(a9, &v45);
    if ( DeviceDefaults < 0 )
    {
LABEL_44:
      v15 = v45;
      goto LABEL_26;
    }
    *(_QWORD *)&v52.Data1 = 0LL;
    v32 = (struct IMMDevice *)*((_QWORD *)a1 + 2);
    *(_QWORD *)&v52.Data1 = v32;
    ((void (__fastcall *)(struct IMMDevice *))v32->lpVtbl->AddRef)(v32);
    if ( (unsigned int)IsSPDIFFormat(a9) && (unsigned int)IsSPDIFEndpoint(v32) )
      DeviceDefaults = GetAcceptableSPDIFTypeForDevice(v32, a9, &v46, 0) != 0 ? 0x88890008 : 0;
    else
      DeviceDefaults = CloneWaveFormat(a9, &v46);
    if ( v32 )
      ((void (__fastcall *)(struct IMMDevice *))v32->lpVtbl->Release)(v32);
    v33 = DeviceDefaults < 0;
LABEL_39:
    if ( !v33 )
    {
      v15 = v45;
      DeviceDefaults = CloneWaveFormat(v45, (struct tWAVEFORMATEX **)&Src);
      goto LABEL_24;
    }
    goto LABEL_44;
  }
  if ( (_DWORD)a3 == 1 )
  {
    v52 = *a7;
    DeviceDefaults = DeriveOffloadConnectorFormatFromStreamFormat(a1, a9, a3, &v52, (struct _GUID *)v43, a5, &v46);
    if ( DeviceDefaults < 0 )
      goto LABEL_26;
    DeviceDefaults = CloneWaveFormat(v46, (struct tWAVEFORMATEX **)&pv);
    ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
    if ( DeviceDefaults < 0 )
      goto LABEL_26;
    DeviceDefaults = CloneWaveFormat(v34, &v45);
    v33 = DeviceDefaults < 0;
    goto LABEL_39;
  }
  if ( a2 )
  {
    v49 = *a8;
    *(struct _GUID *)&pvar.vt = *a7;
    v53 = *a6;
    DeviceDefaults = DeriveConnectorFormatFromStreamFormat(
                       a1,
                       (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                       a9,
                       &v53,
                       (struct _GUID *)&pvar,
                       &v49,
                       1,
                       &v46);
    if ( DeviceDefaults < 0 )
      goto LABEL_26;
    *(_QWORD *)&v49.Data1 = 0LL;
    *(_QWORD *)&pvar.vt = 0LL;
    v37 = 0LL;
    v50 = 0LL;
    v38 = 0LL;
    *(_QWORD *)&v53.Data1 = 0LL;
    DeviceDefaults = CAudioMediaType::Create(
                       v46,
                       (unsigned int)v46->cbSize + 18,
                       (struct IAudioMediaType **)&v49,
                       0.0,
                       0);
    v39 = *(_QWORD *)&v49.Data1;
    if ( DeviceDefaults >= 0 )
    {
      v58 = *(struct _GUID *)*(_QWORD *)&v52.Data1;
      DeviceDefaults = CEndpointCharacteristics::DeriveDevicePipeFormatFromConnectorFormat(
                         a1,
                         &v58,
                         v13,
                         *(struct IAudioMediaType **)&v49.Data1,
                         (struct IAudioMediaType **)&pvar);
      if ( DeviceDefaults >= 0 )
      {
        v58 = *(struct _GUID *)*(_QWORD *)&v52.Data1;
        DeviceDefaults = CEndpointCharacteristics::DeriveMixFormatFromDevicePipeFormat(
                           a1,
                           &v58,
                           v13,
                           *(struct IAudioMediaType **)&pvar.vt,
                           (struct IAudioMediaType **)&v53,
                           &v50);
        if ( DeviceDefaults < 0 )
        {
          v38 = *(_QWORD *)&v53.Data1;
        }
        else
        {
          v40 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&pvar.vt + 40LL))(*(_QWORD *)&pvar.vt);
          DeviceDefaults = CloneWaveFormat(v40, (struct tWAVEFORMATEX **)&Src);
          v38 = *(_QWORD *)&v53.Data1;
          if ( DeviceDefaults >= 0 )
          {
            v41 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v53.Data1 + 40LL))(*(_QWORD *)&v53.Data1);
            DeviceDefaults = CloneWaveFormat(v41, (struct tWAVEFORMATEX **)&pv);
            v37 = v50;
            if ( DeviceDefaults >= 0 )
            {
              if ( v50 )
                v42 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v50->lpVtbl->GetAudioFormat)(v50);
              else
                v42 = (const struct tWAVEFORMATEX *)Src;
              DeviceDefaults = CloneWaveFormat(v42, &v45);
              v15 = v45;
            }
            goto LABEL_76;
          }
        }
        v37 = v50;
      }
    }
LABEL_76:
    if ( v38 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    if ( v37 )
      ((void (__fastcall *)(struct IAudioMediaType *))v37->lpVtbl->Release)(v37);
    if ( *(_QWORD *)&pvar.vt )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&pvar.vt + 16LL))(*(_QWORD *)&pvar.vt);
    if ( v39 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    goto LABEL_24;
  }
  v52 = *a8;
  DeviceDefaults = GetDeviceDefaults(
                     a1,
                     (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a3,
                     &v52,
                     &v46,
                     (struct tWAVEFORMATEX **)&Src,
                     0LL,
                     0LL);
  if ( DeviceDefaults < 0 )
    goto LABEL_26;
  v17 = *(_QWORD *)&a8->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  if ( *(_QWORD *)&a8->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
    v17 = *(_QWORD *)a8->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  if ( !v17 )
  {
    *(_QWORD *)&pvar.vt = 0LL;
    v18 = *((_QWORD *)a1 + 2);
    *(_QWORD *)&pvar.vt = v18;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    v52 = *a6;
    DeviceDefaults = CEndpointCharacteristics::GetMixFormat(a1, v13, &v52, (struct tWAVEFORMATEX **)&pv);
    if ( v18 )
    {
      *(_QWORD *)&pvar.vt = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
  }
  if ( DeviceDefaults < 0 )
    goto LABEL_26;
  v15 = 0LL;
  v45 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 8688));
  *(_QWORD *)&v52.Data1 = (char *)a1 + 8688;
  v49 = *a6;
  for ( i = 0; i < 9; ++i )
  {
    v20 = qword_18019E7E0[2 * i] - *(_QWORD *)&v49.Data1;
    if ( !v20 )
      v20 = qword_18019E7E0[2 * i + 1] - *(_QWORD *)v49.Data4;
    if ( !v20 )
    {
      v58 = (struct _GUID)PKEY_AudioEngine_SignalProcessingMode_Specific_StreamGroupFormat;
      v21 = 2;
      if ( v13 == eKeywordDetectorConnector )
        v21 = 602;
      v59 = i + v21;
      memset(&pvar, 0, sizeof(pvar));
      *(_QWORD *)&v49.Data1 = &pvar;
      v49.Data4[0] = 1;
      v22 = (*(__int64 (__fastcall **)(_QWORD, struct _GUID *, struct tagPROPVARIANT *, _QWORD *))(**((_QWORD **)a1 + 5)
                                                                                                 + 40LL))(
              *((_QWORD *)a1 + 5),
              &v58,
              &pvar,
              qword_18019E7E0);
      v23 = v22;
      if ( v22 >= 0 )
      {
        if ( pvar.vt == 65 && (unsigned int)IsValidWfxBlob(&pvar) )
        {
          pData = pvar.bstrblobVal.pData;
          if ( (unsigned int)ValidateUncompressedWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1B7C,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)0x88890008LL,
              v44);
            wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___(&v49);
            if ( a1 != (struct CEndpointCharacteristics *)-8688LL )
              goto LABEL_20;
            goto LABEL_21;
          }
          v36 = CloneWaveFormat((const struct tWAVEFORMATEX *)pData, &v45);
          v23 = v36;
          if ( v36 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x1B7E,
              (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
              (const char *)(unsigned int)v36,
              v44);
            wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___(&v49);
            if ( a1 != (struct CEndpointCharacteristics *)-8688LL )
              LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 8688));
            v15 = v45;
            goto LABEL_59;
          }
          v15 = v45;
          if ( v45 )
          {
            v49.Data4[0] = 0;
            PropVariantClear((PROPVARIANT *)&pvar);
            if ( a1 != (struct CEndpointCharacteristics *)-8688LL )
              LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 8688));
LABEL_60:
            if ( v15 )
              goto LABEL_24;
            goto LABEL_21;
          }
        }
        wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___(&v49);
        if ( a1 == (struct CEndpointCharacteristics *)-8688LL )
          goto LABEL_21;
        goto LABEL_20;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B78,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v22,
        v44);
      wil::details::lambda_call__lambda_bb75d7955c525a160db854778f06b41a___::_lambda_call__lambda_bb75d7955c525a160db854778f06b41a___(&v49);
      if ( a1 != (struct CEndpointCharacteristics *)-8688LL )
        LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 8688));
LABEL_59:
      if ( v23 < 0 )
        goto LABEL_21;
      goto LABEL_60;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B71,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)0x80070490LL,
    v44);
  if ( a1 != (struct CEndpointCharacteristics *)-8688LL )
LABEL_20:
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 8688));
LABEL_21:
  v24 = Src;
  v25 = *((unsigned __int16 *)Src + 8);
  v26 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v25 + 18);
  v15 = v26;
  if ( v26 )
  {
    memcpy_0(v26, v24, v25 + 18);
    DeviceDefaults = 0;
  }
  else
  {
    DeviceDefaults = -2147024882;
  }
  v45 = v15;
LABEL_24:
  if ( DeviceDefaults >= 0 )
  {
    v27 = v46;
    v46 = 0LL;
    *v54 = v27;
    v28 = v15;
    v15 = 0LL;
    v45 = 0LL;
    *v55 = v28;
    v29 = (struct tWAVEFORMATEX *)pv;
    pv = 0LL;
    *v56 = v29;
    v30 = (struct tWAVEFORMATEX *)Src;
    Src = 0LL;
    *v57 = v30;
  }
LABEL_26:
  CoTaskMemFree(Src);
  Src = 0LL;
  CoTaskMemFree(pv);
  pv = 0LL;
  CoTaskMemFree(v15);
  v45 = 0LL;
  CoTaskMemFree(v46);
  v46 = 0LL;
  return (unsigned int)DeviceDefaults;
}
