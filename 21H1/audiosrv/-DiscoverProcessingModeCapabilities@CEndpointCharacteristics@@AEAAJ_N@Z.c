/*
 * XREFs of ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x180054F30
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x180058E30 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180023530 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x180023970 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023A00 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023AF0 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x180027A48 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x180054C60 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_J@Z @ 0x1800557E0 (--A-$span@H$0-0@gsl@@QEBAAEAH_J@Z.c)
 *     ?GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z @ 0x180059344 (-GetHostConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@PEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x1800593D8 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     ?AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ @ 0x180059994 (-AddOsProcessingModeSupport@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x18005A25C (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@@Z @ 0x18005A9F0 (-GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagproper.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18005AC28 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x18005BF64 (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CEndpointCharacteristics::DiscoverProcessingModeCapabilities(
        CEndpointCharacteristics *this,
        char a2)
{
  char *v3; // r12
  int HostConnectorSignalProcessingModes; // ebx
  void *v5; // rcx
  const struct _GUID *v6; // rbx
  unsigned __int64 *v7; // r13
  CAudioSignalProcessingModeArray *v8; // rax
  int v9; // eax
  int ConnectorSignalProcessingModes; // ebx
  void *v11; // rcx
  void *v12; // rcx
  void *v13; // rcx
  _DWORD *v14; // rbx
  void *v15; // rcx
  unsigned int v16; // eax
  CAudioSignalProcessingModeArray *v17; // rax
  int v18; // eax
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  int v24; // r14d
  int v25; // r15d
  void *v26; // rcx
  void *v27; // rcx
  BOOL v28; // ebx
  int v29; // ebx
  __int64 v30; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 i; // edi
  int v32; // eax
  struct IPropertyStore *v33; // rbx
  struct CAudioSignalProcessingModeArray *v34; // rax
  CEndpointCharacteristics *v35; // rcx
  int APOModesSupportedForStreaming; // eax
  __int64 *v37; // rax
  GUID *v38; // rdx
  SystemEffectDescriptor *v39; // rax
  void *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  void *v46; // rcx
  void *v47; // rcx
  unsigned __int64 v49; // r9
  __int64 v50; // rdx
  CAudioSignalProcessingModeArray *v51; // rax
  int v52; // eax
  const struct _GUID *v53; // rbx
  CAudioSignalProcessingModeArray *v54; // rax
  int v55; // eax
  const struct _GUID *v56; // rbx
  CAudioSignalProcessingModeArray *v57; // rax
  int v58; // eax
  __int64 v59; // rdx
  __int64 *v60; // rax
  __int64 v61; // rax
  __int64 v62; // r9
  unsigned int v63[2]; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID *v64; // [rsp+40h] [rbp-C8h]
  struct _GUID *v65; // [rsp+48h] [rbp-C0h] BYREF
  char v66; // [rsp+50h] [rbp-B8h]
  char v67; // [rsp+58h] [rbp-B0h]
  struct _tagpropertykey v68; // [rsp+68h] [rbp-A0h] BYREF
  LPVOID pv[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _tagpropertykey v70; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v71; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v72; // [rsp+BCh] [rbp-4Ch] BYREF
  unsigned int v73; // [rsp+C0h] [rbp-48h] BYREF
  unsigned int v74; // [rsp+C4h] [rbp-44h] BYREF
  unsigned int v75; // [rsp+C8h] [rbp-40h] BYREF
  unsigned int v76; // [rsp+CCh] [rbp-3Ch] BYREF
  unsigned int v77; // [rsp+D0h] [rbp-38h] BYREF
  LPVOID v78; // [rsp+D8h] [rbp-30h] BYREF
  LPVOID v79; // [rsp+E0h] [rbp-28h] BYREF
  LPVOID v80; // [rsp+E8h] [rbp-20h] BYREF
  LPVOID v81; // [rsp+F0h] [rbp-18h] BYREF
  LPVOID v82; // [rsp+F8h] [rbp-10h] BYREF
  LPVOID v83; // [rsp+100h] [rbp-8h] BYREF
  LPVOID v84; // [rsp+108h] [rbp+0h] BYREF
  struct _tagpropertykey v85; // [rsp+110h] [rbp+8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  v67 = a2;
  v3 = (char *)this + 64;
  *(_DWORD *)gsl::span<int,-1>::operator[]((char *)this + 64, 2LL) = 0;
  pv[0] = 0LL;
  *(_QWORD *)&v68.fmtid.Data1 = pv;
  *(_QWORD *)v68.fmtid.Data4 = 0LL;
  LOBYTE(v68.pid) = 1;
  HostConnectorSignalProcessingModes = GetHostConnectorSignalProcessingModes(
                                         *((struct IPropertyStore **)this + 5),
                                         v63,
                                         (struct _GUID **)v68.fmtid.Data4);
  if ( LOBYTE(v68.pid) )
  {
    v5 = **(void ***)&v68.fmtid.Data1;
    **(_QWORD **)&v68.fmtid.Data1 = *(_QWORD *)v68.fmtid.Data4;
    if ( v5 )
      CoTaskMemFree(v5);
  }
  if ( HostConnectorSignalProcessingModes >= 0 && v63[0] )
  {
    *(_DWORD *)gsl::span<int,-1>::operator[](v3, 0LL) = 1;
    v6 = (const struct _GUID *)pv[0];
    v7 = (unsigned __int64 *)((char *)this + 152);
    v8 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                              (unsigned __int64 *)this + 19,
                                              0LL);
    v9 = CAudioSignalProcessingModeArray::AddMultiple(v8, v63[0], v6);
    ConnectorSignalProcessingModes = v9;
    if ( v9 >= 0 )
      goto LABEL_7;
    v49 = (unsigned int)v9;
    v50 = 1236LL;
LABEL_119:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v50,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v49);
    goto LABEL_85;
  }
  *(_DWORD *)gsl::span<int,-1>::operator[](v3, 0LL) = 0;
  v7 = (unsigned __int64 *)((char *)this + 152);
  v51 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                             (unsigned __int64 *)this + 19,
                                             0LL);
  v52 = CAudioSignalProcessingModeArray::AddMultiple(v51, 1u, &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
  ConnectorSignalProcessingModes = v52;
  if ( v52 < 0 )
  {
    v49 = (unsigned int)v52;
    v50 = 1241LL;
    goto LABEL_119;
  }
LABEL_7:
  v11 = pv[0];
  pv[0] = 0LL;
  if ( v11 )
    CoTaskMemFree(v11);
  v63[0] = 0;
  v85.fmtid.Data1 = 590439624;
  *(_DWORD *)&v85.fmtid.Data2 = 1283267372;
  *(_DWORD *)v85.fmtid.Data4 = 1907779772;
  *(_DWORD *)&v85.fmtid.Data4[4] = 1730509416;
  v85.pid = 1;
  *(_QWORD *)&v68.fmtid.Data1 = pv;
  *(_QWORD *)v68.fmtid.Data4 = 0LL;
  LOBYTE(v68.pid) = 1;
  ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                     *((struct IPropertyStore **)this + 5),
                                     &v85,
                                     &PKEY_Endpoint_KeywordDetector_ConnectorId,
                                     v63,
                                     (struct _GUID **)v68.fmtid.Data4);
  if ( LOBYTE(v68.pid) )
  {
    v12 = **(void ***)&v68.fmtid.Data1;
    **(_QWORD **)&v68.fmtid.Data1 = *(_QWORD *)v68.fmtid.Data4;
    if ( v12 )
      CoTaskMemFree(v12);
  }
  if ( ConnectorSignalProcessingModes >= 0 && v63[0] )
  {
    v53 = (const struct _GUID *)pv[0];
    v54 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v7, 3uLL);
    v55 = CAudioSignalProcessingModeArray::AddMultiple(v54, v63[0], v53);
    ConnectorSignalProcessingModes = v55;
    if ( v55 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E6,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v55);
      goto LABEL_85;
    }
    *(_DWORD *)gsl::span<int,-1>::operator[](v3, 3LL) = 1;
  }
  else
  {
    if ( ConnectorSignalProcessingModes != -2147023728 )
    {
      if ( ConnectorSignalProcessingModes >= 0 )
        goto LABEL_85;
      v50 = 1263LL;
      goto LABEL_118;
    }
    *(_DWORD *)gsl::span<int,-1>::operator[](v3, 3LL) = 0;
  }
  v13 = pv[0];
  pv[0] = 0LL;
  if ( v13 )
    CoTaskMemFree(v13);
  v63[0] = 0;
  v14 = (_DWORD *)gsl::span<int,-1>::operator[](v3, 0LL);
  *(_DWORD *)gsl::span<int,-1>::operator[](v3, 1LL) = *v14;
  if ( !*(_DWORD *)gsl::span<int,-1>::operator[](v3, 1LL) )
  {
LABEL_103:
    v16 = v63[0];
    goto LABEL_23;
  }
  *(_QWORD *)&v68.fmtid.Data1 = pv;
  *(_QWORD *)v68.fmtid.Data4 = 0LL;
  LOBYTE(v68.pid) = 1;
  ConnectorSignalProcessingModes = GetConnectorSignalProcessingModes(
                                     *((struct IPropertyStore **)this + 5),
                                     &v85,
                                     &PKEY_Endpoint_HWAudioEngine_Offload_ConnectorId,
                                     v63,
                                     (struct _GUID **)v68.fmtid.Data4);
  if ( LOBYTE(v68.pid) )
  {
    v15 = **(void ***)&v68.fmtid.Data1;
    **(_QWORD **)&v68.fmtid.Data1 = *(_QWORD *)v68.fmtid.Data4;
    if ( v15 )
      CoTaskMemFree(v15);
  }
  v16 = v63[0];
  if ( ConnectorSignalProcessingModes >= 0 && v63[0] )
  {
    v56 = (const struct _GUID *)pv[0];
    v57 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v7, 1uLL);
    v58 = CAudioSignalProcessingModeArray::AddMultiple(v57, v63[0], v56);
    ConnectorSignalProcessingModes = v58;
    if ( v58 < 0 )
    {
      v49 = (unsigned int)v58;
      v50 = 1277LL;
      goto LABEL_119;
    }
    goto LABEL_103;
  }
  if ( ConnectorSignalProcessingModes != -2147023728 )
  {
    if ( ConnectorSignalProcessingModes >= 0 )
      goto LABEL_85;
    v50 = 1281LL;
LABEL_118:
    v49 = (unsigned int)ConnectorSignalProcessingModes;
    goto LABEL_119;
  }
LABEL_23:
  if ( !v16 )
  {
    v17 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v7, 1uLL);
    v18 = CAudioSignalProcessingModeArray::AddMultiple(v17, 1u, &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    ConnectorSignalProcessingModes = v18;
    if ( v18 < 0 )
    {
      v49 = (unsigned int)v18;
      v50 = 1288LL;
      goto LABEL_119;
    }
  }
  v84 = 0LL;
  v71 = 0;
  v83 = 0LL;
  v72 = 0;
  v82 = 0LL;
  v73 = 0;
  v64 = &v84;
  v65 = 0LL;
  v66 = 1;
  v70 = PKEY_CompositeFX_StreamEffectClsid;
  v68 = PKEY_FX_StreamEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v68, &v70, &v71, &v65);
  if ( v66 )
  {
    v19 = *v64;
    *v64 = v65;
    if ( v19 )
      CoTaskMemFree(v19);
  }
  v64 = &v83;
  v65 = 0LL;
  v66 = 1;
  v68 = PKEY_CompositeFX_ModeEffectClsid;
  v70 = PKEY_FX_ModeEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v70, &v68, &v72, &v65);
  if ( v66 )
  {
    v20 = *v64;
    *v64 = v65;
    if ( v20 )
      CoTaskMemFree(v20);
  }
  v64 = &v82;
  v65 = 0LL;
  v66 = 1;
  v68 = PKEY_CompositeFX_EndpointEffectClsid;
  v70 = PKEY_FX_EndpointEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v70, &v68, &v73, &v65);
  if ( v66 )
  {
    v21 = *v64;
    *v64 = v65;
    if ( v21 )
      CoTaskMemFree(v21);
  }
  v81 = 0LL;
  v74 = 0;
  v80 = 0LL;
  v75 = 0;
  v64 = &v81;
  v65 = 0LL;
  v66 = 1;
  v68 = PKEY_CompositeFX_Offload_StreamEffectClsid;
  v70 = PKEY_FX_Offload_StreamEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v70, &v68, &v74, &v65);
  if ( v66 )
  {
    v22 = *v64;
    *v64 = v65;
    if ( v22 )
      CoTaskMemFree(v22);
  }
  v64 = &v80;
  v65 = 0LL;
  v66 = 1;
  v68 = PKEY_CompositeFX_Offload_ModeEffectClsid;
  v70 = PKEY_FX_Offload_ModeEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v70, &v68, &v75, &v65);
  if ( v66 )
  {
    v23 = *v64;
    *v64 = v65;
    if ( v23 )
      CoTaskMemFree(v23);
  }
  v24 = 0;
  if ( v71 || v72 || v73 || v74 || v75 )
    v24 = 1;
  v25 = 0;
  v79 = 0LL;
  v76 = 0;
  v78 = 0LL;
  v77 = 0;
  v64 = &v79;
  v65 = 0LL;
  v66 = 1;
  memset(&v68, 0, sizeof(v68));
  v70 = PKEY_FX_PreMixEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v70, &v68, &v76, &v65);
  if ( v66 )
  {
    v26 = *v64;
    *v64 = v65;
    if ( v26 )
      CoTaskMemFree(v26);
  }
  v64 = &v78;
  v65 = 0LL;
  v66 = 1;
  memset(&v68, 0, sizeof(v68));
  v70 = PKEY_FX_PostMixEffectClsid;
  GetFxClsids(*((struct IMMDevice **)this + 2), &v70, &v68, &v77, &v65);
  if ( v66 )
  {
    v27 = *v64;
    *v64 = v65;
    if ( v27 )
      CoTaskMemFree(v27);
  }
  if ( v76 == 1 || v77 == 1 )
    v25 = 1;
  v28 = *(_DWORD *)gsl::span<int,-1>::operator[](v3, 0LL) && (v24 || !v25);
  *(_DWORD *)gsl::span<int,-1>::operator[](v3, 0LL) = v28;
  v29 = 0;
  if ( *((__int64 *)this + 213) > 0 )
  {
    v30 = 0LL;
    do
    {
      *(_DWORD *)gsl::span<int,-1>::operator[]((char *)this + 1704, v30) = 0;
      v30 = ++v29;
    }
    while ( v29 < *((_QWORD *)this + 213) );
  }
  for ( i = eHostProcessConnector; (unsigned int)i < eConnectorCount; ++i )
  {
    if ( i != eLoopbackConnector )
    {
      v32 = CEndpointCharacteristics::FixupProcessingModeSupport(this, i, v24, v25);
      ConnectorSignalProcessingModes = v32;
      if ( v32 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x541,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v32);
        goto LABEL_71;
      }
    }
  }
  v33 = (struct IPropertyStore *)*((_QWORD *)this + 10);
  if ( v33
    && (v68 = PKEY_APO_SWFallback_ProcessingModes,
        v34 = (struct CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                                          (unsigned __int64 *)this + 219,
                                                          0LL),
        APOModesSupportedForStreaming = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                                          v35,
                                          v33,
                                          &v68,
                                          0,
                                          v34),
        ConnectorSignalProcessingModes = APOModesSupportedForStreaming,
        APOModesSupportedForStreaming < 0) )
  {
    v59 = 1351LL;
  }
  else if ( v67
         && (APOModesSupportedForStreaming = CEndpointCharacteristics::AddOsProcessingModeSupport(this),
             ConnectorSignalProcessingModes = APOModesSupportedForStreaming,
             APOModesSupportedForStreaming < 0) )
  {
    v59 = 1357LL;
  }
  else
  {
    v37 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v7, 0LL);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v37,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      v60 = (__int64 *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v7, 0LL);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v60,
                           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
      {
        v61 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](v7, 0LL);
        v38 = (GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v61, 0);
      }
      else
      {
        v38 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      }
    }
    v70.fmtid = *v38;
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)this + 168, &v70) )
    {
      ConnectorSignalProcessingModes = -2147024882;
      v62 = 2147942414LL;
      v59 = 1369LL;
      goto LABEL_115;
    }
    v70.fmtid = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v39 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                      (unsigned __int64 *)this + 209,
                                      0LL);
    APOModesSupportedForStreaming = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(v39, &v70.fmtid);
    ConnectorSignalProcessingModes = APOModesSupportedForStreaming;
    if ( APOModesSupportedForStreaming >= 0 )
    {
      ConnectorSignalProcessingModes = 0;
      goto LABEL_71;
    }
    v59 = 1372LL;
  }
  v62 = (unsigned int)APOModesSupportedForStreaming;
LABEL_115:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v59,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v62);
LABEL_71:
  v40 = v78;
  v78 = 0LL;
  if ( v40 )
    CoTaskMemFree(v40);
  v41 = v79;
  v79 = 0LL;
  if ( v41 )
    CoTaskMemFree(v41);
  v42 = v80;
  v80 = 0LL;
  if ( v42 )
    CoTaskMemFree(v42);
  v43 = v81;
  v81 = 0LL;
  if ( v43 )
    CoTaskMemFree(v43);
  v44 = v82;
  v82 = 0LL;
  if ( v44 )
    CoTaskMemFree(v44);
  v45 = v83;
  v83 = 0LL;
  if ( v45 )
    CoTaskMemFree(v45);
  v46 = v84;
  v84 = 0LL;
  if ( v46 )
    CoTaskMemFree(v46);
LABEL_85:
  v47 = pv[0];
  pv[0] = 0LL;
  if ( v47 )
    CoTaskMemFree(v47);
  return (unsigned int)ConnectorSignalProcessingModes;
}
