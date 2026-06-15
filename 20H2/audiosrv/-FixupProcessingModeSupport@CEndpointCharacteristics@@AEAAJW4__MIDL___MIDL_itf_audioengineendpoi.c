/*
 * XREFs of ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x180059BBC
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x180054890 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180022EB0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800232F0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z @ 0x180023380 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_J@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_J@Z @ 0x180023470 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800273C8 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800385D4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x1800545C0 (-GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z.c)
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_J@Z @ 0x180055140 (--A-$span@H$0-0@gsl@@QEBAAEAH_J@Z.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x1800599B8 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x18005A028 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagpropertykey@@_NPEAVCAudioSignalProcessingModeArray@@@Z @ 0x18005A350 (-GetAPOModesSupportedForStreaming@CEndpointCharacteristics@@AEAAJPEAUIPropertyStore@@U_tagproper.c)
 *     ?GetConnectorFXModeEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_tagpropertykey@@1@Z @ 0x18005A514 (-GetConnectorFXModeEffectPKEY@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18005A588 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z @ 0x180122F98 (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CEndpointCharacteristics::FixupProcessingModeSupport(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        unsigned int a3,
        int a4)
{
  unsigned __int64 v5; // rdi
  int v7; // r14d
  struct IPropertyStore *v8; // rdx
  unsigned __int64 v9; // rcx
  GUID v10; // xmm0
  DWORD v11; // eax
  int APOModesSupportedForStreaming; // eax
  unsigned int v13; // ebx
  unsigned __int64 v14; // rcx
  GUID v15; // xmm0
  DWORD v16; // eax
  int v17; // eax
  CEndpointCharacteristics *v18; // rcx
  GUID v19; // xmm0
  DWORD v20; // eax
  int v21; // eax
  GUID fmtid; // xmm0
  DWORD pid; // eax
  GUID v24; // xmm1
  DWORD v25; // ecx
  const struct _GUID *v26; // rbx
  SystemEffectDescriptor *v27; // rax
  int ConnectorFXModeEffectPKEY; // eax
  CEndpointCharacteristics *v29; // rcx
  struct _GUID *v30; // rbx
  SystemEffectDescriptor *v31; // rax
  signed int v32; // ebx
  GUID v34; // xmm0
  DWORD v35; // eax
  GUID v36; // xmm1
  DWORD v37; // ecx
  const struct _GUID *v38; // rbx
  SystemEffectDescriptor *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rax
  CAudioSignalProcessingModeArray *v42; // rax
  int v43; // eax
  __int64 v44; // r9
  const struct _GUID *v45; // rbx
  SystemEffectDescriptor *v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  struct _GUID *v49; // rbx
  SystemEffectDescriptor *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r9
  __int64 v53; // rdx
  _OWORD *v54; // rax
  SystemEffectDescriptor *v55; // rax
  struct _GUID *v56[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _tagpropertykey v57; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID pv; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID *v59; // [rsp+78h] [rbp-88h] BYREF
  struct _tagpropertykey v60; // [rsp+80h] [rbp-80h] BYREF
  struct _GUID v61; // [rsp+A0h] [rbp-60h] BYREF
  int v62[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v63; // [rsp+B8h] [rbp-48h]
  __int64 v64; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v65; // [rsp+C8h] [rbp-38h]
  __int64 v66[2]; // [rsp+D0h] [rbp-30h] BYREF
  struct _tagpropertykey v67; // [rsp+E0h] [rbp-20h] BYREF
  struct _tagpropertykey v68; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v69; // [rsp+120h] [rbp+20h]
  __int64 v70[15]; // [rsp+128h] [rbp+28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]
  struct _GUID *v72; // [rsp+1B0h] [rbp+B0h] BYREF
  unsigned int v73; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v74; // [rsp+1C0h] [rbp+C0h] BYREF

  v74 = a3;
  v5 = a2;
  if ( *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)this + 8, a2) )
  {
    if ( (v5 & 0xFFFFFFFC) != 0 || (_DWORD)v5 == 2 )
      return 0LL;
    *(_QWORD *)v62 = 0LL;
    v7 = 0;
    v63 = 0LL;
    v66[0] = 0LL;
    v66[1] = 0LL;
    *(_QWORD *)&v61.Data1 = 0LL;
    *(_QWORD *)v61.Data4 = 0LL;
    v64 = 0LL;
    v65 = 0LL;
    v8 = (struct IPropertyStore *)*((_QWORD *)this + 10);
    if ( !v8 )
    {
LABEL_18:
      v56[0] = 0LL;
      v74 = 0;
      v59 = 0LL;
      v73 = 0;
      pv = 0LL;
      LODWORD(v72) = 0;
      if ( (_DWORD)v5 )
      {
        if ( (_DWORD)v5 == 1 )
        {
          fmtid = PKEY_FX_Offload_StreamEffectClsid.fmtid;
          pid = PKEY_FX_Offload_StreamEffectClsid.pid;
          v24 = PKEY_CompositeFX_Offload_StreamEffectClsid.fmtid;
          v25 = PKEY_CompositeFX_Offload_StreamEffectClsid.pid;
        }
        else
        {
          if ( (_DWORD)v5 != 3 )
          {
            v13 = -2147023728;
            v44 = 2147943568LL;
            v53 = 2325LL;
            goto LABEL_43;
          }
          fmtid = PKEY_FX_KeywordDetector_StreamEffectClsid.fmtid;
          pid = PKEY_FX_KeywordDetector_StreamEffectClsid.pid;
          v24 = PKEY_CompositeFX_KeywordDetector_StreamEffectClsid.fmtid;
          v25 = PKEY_CompositeFX_KeywordDetector_StreamEffectClsid.pid;
        }
      }
      else
      {
        fmtid = PKEY_FX_StreamEffectClsid.fmtid;
        pid = PKEY_FX_StreamEffectClsid.pid;
        v24 = PKEY_CompositeFX_StreamEffectClsid.fmtid;
        v25 = PKEY_CompositeFX_StreamEffectClsid.pid;
      }
      v57.fmtid = fmtid;
      v57.pid = pid;
      v60.fmtid = v24;
      v60.pid = v25;
      v67.fmtid = v24;
      v67.pid = v25;
      v68.fmtid = fmtid;
      v68.pid = pid;
      GetFxClsids(*((struct IMMDevice **)this + 2), &v68, &v67, &v74, v56);
      v26 = v56[0];
      v27 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                        (unsigned __int64 *)this + 207,
                                        v5);
      ConnectorFXModeEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                    v27,
                                    (struct CAudioSignalProcessingModeArray *)v62,
                                    v74,
                                    v26);
      v13 = ConnectorFXModeEffectPKEY;
      if ( ConnectorFXModeEffectPKEY < 0 )
      {
        v53 = 2327LL;
      }
      else
      {
        ConnectorFXModeEffectPKEY = CEndpointCharacteristics::GetConnectorFXModeEffectPKEY(
                                      v29,
                                      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v5,
                                      &v57,
                                      &v60);
        v13 = ConnectorFXModeEffectPKEY;
        if ( ConnectorFXModeEffectPKEY < 0 )
        {
          v53 = 2329LL;
        }
        else
        {
          v68 = v60;
          v67 = v57;
          GetFxClsids(*((struct IMMDevice **)this + 2), &v67, &v68, &v73, &v59);
          v30 = v59;
          v31 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                            (unsigned __int64 *)this + 209,
                                            v5);
          ConnectorFXModeEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                        v31,
                                        (struct CAudioSignalProcessingModeArray *)v66,
                                        v73,
                                        v30);
          v13 = ConnectorFXModeEffectPKEY;
          if ( ConnectorFXModeEffectPKEY < 0 )
          {
            v53 = 2331LL;
          }
          else
          {
            if ( (_DWORD)v5 )
            {
              if ( (_DWORD)v5 != 3 )
                goto LABEL_26;
              v34 = PKEY_FX_KeywordDetector_EndpointEffectClsid.fmtid;
              v35 = PKEY_FX_KeywordDetector_EndpointEffectClsid.pid;
              v36 = PKEY_CompositeFX_KeywordDetector_EndpointEffectClsid.fmtid;
              v37 = PKEY_CompositeFX_KeywordDetector_EndpointEffectClsid.pid;
            }
            else
            {
              v34 = PKEY_FX_EndpointEffectClsid.fmtid;
              v35 = PKEY_FX_EndpointEffectClsid.pid;
              v36 = PKEY_CompositeFX_EndpointEffectClsid.fmtid;
              v37 = PKEY_CompositeFX_EndpointEffectClsid.pid;
            }
            v68.fmtid = v36;
            v68.pid = v37;
            v67.fmtid = v34;
            v67.pid = v35;
            GetFxClsids(*((struct IMMDevice **)this + 2), &v67, &v68, (unsigned int *)&v72, (struct _GUID **)&pv);
            v38 = (const struct _GUID *)pv;
            v39 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                              (unsigned __int64 *)this + 211,
                                              v5);
            ConnectorFXModeEffectPKEY = SystemEffectDescriptor::SetDefaultEffectChain(
                                          v39,
                                          (struct CAudioSignalProcessingModeArray *)&v61,
                                          (unsigned int)v72,
                                          v38);
            v13 = ConnectorFXModeEffectPKEY;
            if ( ConnectorFXModeEffectPKEY >= 0 )
            {
LABEL_26:
              v32 = 0;
              if ( v7 > 0 )
              {
                do
                {
                  v40 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                    (__int64)v62,
                                    v32);
                  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v66, v40) == -1 )
                  {
                    v54 = (_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                      (__int64)v62,
                                      v32);
                    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                                          (__int64)&v64,
                                          v54) )
                    {
                      v13 = -2147024882;
                      v44 = 2147942414LL;
                      v53 = 2354LL;
                      goto LABEL_43;
                    }
                  }
                  ++v32;
                }
                while ( v32 < v7 );
                if ( (int)v65 > 0 )
                {
                  v69 = v70;
                  v70[7] = 0LL;
                  v55 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                                    (unsigned __int64 *)this + 209,
                                                    v5);
                  ConnectorFXModeEffectPKEY = SystemEffectDescriptor::CreateOverridingChain(
                                                v55,
                                                (struct CAudioSignalProcessingModeArray *)&v64,
                                                0,
                                                0LL,
                                                2,
                                                1,
                                                (__int64)v70);
                  v13 = ConnectorFXModeEffectPKEY;
                  if ( ConnectorFXModeEffectPKEY < 0 )
                  {
                    v53 = 2361LL;
                    goto LABEL_42;
                  }
                }
              }
              CoTaskMemFree(pv);
              pv = 0LL;
              CoTaskMemFree(v59);
              v59 = 0LL;
              CoTaskMemFree(v56[0]);
              v56[0] = 0LL;
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v64);
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v61);
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v66);
              ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v62);
              return 0LL;
            }
            v53 = 2337LL;
          }
        }
      }
LABEL_42:
      v44 = (unsigned int)ConnectorFXModeEffectPKEY;
LABEL_43:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v53,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v44);
      CoTaskMemFree(pv);
      pv = 0LL;
      CoTaskMemFree(v59);
      v59 = 0LL;
      CoTaskMemFree(v56[0]);
      v56[0] = 0LL;
LABEL_44:
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v64);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v61);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v66);
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)v62);
      return v13;
    }
    v9 = (unsigned int)v5;
    if ( (_DWORD)v5 )
    {
      v9 = (unsigned int)(v5 - 1);
      if ( (_DWORD)v5 == 1 )
      {
        v10 = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.fmtid;
        v11 = PKEY_MFX_Offload_ProcessingModes_Supported_For_Streaming.pid;
      }
      else
      {
        if ( (_DWORD)v5 != 3 )
        {
          v51 = 2300LL;
          v13 = -2147023728;
          v52 = 2147943568LL;
          goto LABEL_62;
        }
        v10 = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
        v11 = PKEY_MFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
      }
    }
    else
    {
      v10 = PKEY_MFX_ProcessingModes_Supported_For_Streaming.fmtid;
      v11 = PKEY_MFX_ProcessingModes_Supported_For_Streaming.pid;
    }
    v57.fmtid = v10;
    v57.pid = v11;
    APOModesSupportedForStreaming = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                                      (CEndpointCharacteristics *)v9,
                                      v8,
                                      &v57,
                                      1,
                                      (struct CAudioSignalProcessingModeArray *)v66);
    v13 = APOModesSupportedForStreaming;
    if ( APOModesSupportedForStreaming < 0 )
    {
      v52 = (unsigned int)APOModesSupportedForStreaming;
      v51 = 2301LL;
    }
    else
    {
      v14 = (unsigned int)v5;
      if ( (_DWORD)v5 )
      {
        v14 = (unsigned int)(v5 - 1);
        if ( (_DWORD)v5 == 1 )
        {
          v15 = PKEY_SFX_Offload_ProcessingModes_Supported_For_Streaming.fmtid;
          v16 = PKEY_SFX_Offload_ProcessingModes_Supported_For_Streaming.pid;
        }
        else
        {
          v15 = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
          v16 = PKEY_SFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
        }
      }
      else
      {
        v15 = PKEY_SFX_ProcessingModes_Supported_For_Streaming.fmtid;
        v16 = PKEY_SFX_ProcessingModes_Supported_For_Streaming.pid;
      }
      v57.fmtid = v15;
      v57.pid = v16;
      v17 = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
              (CEndpointCharacteristics *)v14,
              *((struct IPropertyStore **)this + 10),
              &v57,
              0,
              (struct CAudioSignalProcessingModeArray *)v62);
      v13 = v17;
      if ( v17 < 0 )
      {
        v52 = (unsigned int)v17;
        v51 = 2305LL;
      }
      else
      {
        if ( (int)v5 > 1 )
        {
          v19 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.fmtid;
          v20 = PKEY_EFX_KeywordDetector_ProcessingModes_Supported_For_Streaming.pid;
        }
        else
        {
          v19 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.fmtid;
          v20 = PKEY_EFX_ProcessingModes_Supported_For_Streaming.pid;
        }
        v57.fmtid = v19;
        v57.pid = v20;
        v21 = CEndpointCharacteristics::GetAPOModesSupportedForStreaming(
                v18,
                *((struct IPropertyStore **)this + 10),
                &v57,
                0,
                (struct CAudioSignalProcessingModeArray *)&v61);
        v13 = v21;
        if ( v21 >= 0 )
        {
          v7 = v63;
          goto LABEL_18;
        }
        v52 = (unsigned int)v21;
        v51 = 2309LL;
      }
    }
LABEL_62:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v51,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v52);
    goto LABEL_44;
  }
  if ( (_DWORD)v5 == 3 )
    return 0LL;
  v41 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 19, v5);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(v41);
  v42 = (CAudioSignalProcessingModeArray *)gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                                             (unsigned __int64 *)this + 19,
                                             v5);
  v43 = CAudioSignalProcessingModeArray::AddMultiple(v42, 1u, &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
  v13 = v43;
  if ( v43 >= 0 )
  {
    if ( !a4 || (_DWORD)v5 )
      return 0LL;
    v56[0] = 0LL;
    v74 = 0;
    v72 = 0LL;
    v73 = 0;
    memset(&v57, 0, sizeof(v57));
    v60 = PKEY_FX_PreMixEffectClsid;
    GetFxClsids(*((struct IMMDevice **)this + 2), &v60, &v57, &v74, v56);
    memset(&v57, 0, sizeof(v57));
    v60 = PKEY_FX_PostMixEffectClsid;
    GetFxClsids(*((struct IMMDevice **)this + 2), &v60, &v57, &v73, &v72);
    v61 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v45 = v56[0];
    v46 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 207, v5);
    v47 = SystemEffectDescriptor::SetDefaultEffectChain(v46, &v61, v74, v45);
    v13 = v47;
    if ( v47 >= 0 )
    {
      v61 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
      v49 = v72;
      v50 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                        (unsigned __int64 *)this + 209,
                                        v5);
      v47 = SystemEffectDescriptor::SetDefaultEffectChain(v50, &v61, v73, v49);
      v13 = v47;
      if ( v47 >= 0 )
      {
        CoTaskMemFree(v72);
        v72 = 0LL;
        CoTaskMemFree(v56[0]);
        return 0LL;
      }
      v48 = 2282LL;
    }
    else
    {
      v48 = 2281LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v48,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v47);
    CoTaskMemFree(v72);
    v72 = 0LL;
    CoTaskMemFree(v56[0]);
    return v13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8D8,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v43);
  return v13;
}
