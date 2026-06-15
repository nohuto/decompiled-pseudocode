/*
 * XREFs of ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000E150
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140004C60 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ?CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140001EEC (-CreateDeviceProcessNode@CDeviceProcessNode@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140004160 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x14000538C (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400072E0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z @ 0x140009CD0 (--0CPipeInstance@@AEAA@W4PIPE_TYPE@@@Z.c)
 *     ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x14000A940 (-TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x14000BA40 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000D5F0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?GetFreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXXZ @ 0x14000F400 (-GetFreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXX.c)
 *     ?RemoveAll@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ @ 0x14000F4B0 (-RemoveAll@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140016500 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?AddTail@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCProcessNode@@@Z @ 0x14001BC94 (-AddTail@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAU__.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D34C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x14001F427 (_CxxThrowException_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14003359C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1400336CC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_ @ 0x140034220 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14003424C (WPP_SF_D.c)
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14003BF94 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400432DC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CPipeInstance::CreateDevicePipeInstance(
        struct IUnknown *a1,
        struct IUnknown *a2,
        __int64 a3,
        CPipeInstance **a4)
{
  int v5; // esi
  int v6; // r13d
  int FxPropertyStore; // eax
  __int64 v8; // rcx
  const struct tWAVEFORMATEX *v9; // rdx
  int v10; // eax
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // r12d
  struct IPropertyStore *v15; // rbx
  unsigned __int64 v16; // rdi
  int v17; // ecx
  _BOOL8 v18; // rdx
  int v19; // r13d
  GUID *v20; // rax
  int v21; // r13d
  __int64 v22; // rdx
  int v23; // r13d
  __int64 v24; // r13
  _QWORD *v25; // rdx
  __int64 v26; // rcx
  int APOProcessNode; // eax
  __int64 v28; // rbx
  _QWORD *v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rbx
  _QWORD *v33; // rdx
  __int64 v34; // rcx
  CPipeInstance *v35; // rax
  CPipeInstance *v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // r12
  __int64 *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  struct ATL::CAtlPlex *v43; // r8
  int v44; // edx
  _QWORD *v45; // rcx
  int i; // edx
  int EndpointGuidFromEndpointId; // eax
  const unsigned __int16 *v48; // rsi
  unsigned __int64 v49; // rdi
  unsigned __int64 v50; // r13
  unsigned __int128 v51; // rax
  unsigned __int16 *v52; // rax
  int v53; // r12d
  unsigned int v54; // eax
  CPipeInstance *v55; // rcx
  int v57; // eax
  int v58; // eax
  int v59; // eax
  unsigned __int16 **v60; // [rsp+20h] [rbp-138h]
  unsigned __int64 *v61; // [rsp+28h] [rbp-130h]
  unsigned int v62; // [rsp+30h] [rbp-128h]
  unsigned int v63[2]; // [rsp+40h] [rbp-118h] BYREF
  int v64; // [rsp+48h] [rbp-110h]
  int v65; // [rsp+4Ch] [rbp-10Ch]
  __int128 v66; // [rsp+50h] [rbp-108h] BYREF
  __int64 v67; // [rsp+60h] [rbp-F8h]
  __int128 v68; // [rsp+68h] [rbp-F0h]
  int v69; // [rsp+78h] [rbp-E0h]
  struct CDeviceProcessNode *v70; // [rsp+80h] [rbp-D8h] BYREF
  GUID v71; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v72; // [rsp+A0h] [rbp-B8h] BYREF
  int pExceptionObject; // [rsp+A8h] [rbp-B0h] BYREF
  int v74; // [rsp+ACh] [rbp-ACh] BYREF
  int v75; // [rsp+B0h] [rbp-A8h] BYREF
  int v76; // [rsp+B4h] [rbp-A4h] BYREF
  int v77; // [rsp+B8h] [rbp-A0h] BYREF
  int v78; // [rsp+BCh] [rbp-9Ch] BYREF
  int v79; // [rsp+C0h] [rbp-98h] BYREF
  int v80; // [rsp+C4h] [rbp-94h] BYREF
  int v81; // [rsp+C8h] [rbp-90h] BYREF
  int v82; // [rsp+CCh] [rbp-8Ch] BYREF
  int v83; // [rsp+D0h] [rbp-88h] BYREF
  CPipeInstance *v84; // [rsp+D8h] [rbp-80h]
  struct IPropertyStore *v85; // [rsp+E0h] [rbp-78h] BYREF
  unsigned __int64 v86[2]; // [rsp+F0h] [rbp-68h] BYREF
  struct IPropertyStore *v87; // [rsp+100h] [rbp-58h]
  CPipeInstance *v90; // [rsp+170h] [rbp+18h] BYREF
  CPipeInstance **v91; // [rsp+178h] [rbp+20h]

  v91 = a4;
  v5 = 0;
  v64 = 0;
  v70 = 0LL;
  v84 = 0LL;
  *(_QWORD *)v63 = 0LL;
  v72 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 10;
  LODWORD(v90) = 0;
  v6 = 0;
  v65 = 0;
  v85 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids);
  }
  FxPropertyStore = TryGetFxPropertyStore(*(const unsigned __int16 **)(a3 + 56), &v85);
  if ( FxPropertyStore < 0 )
  {
    pExceptionObject = FxPropertyStore;
    throw (long *)&pExceptionObject;
  }
  v9 = *(const struct tWAVEFORMATEX **)(a3 + 24);
  if ( v9 )
  {
    v10 = CProcessNode::CreateDummyProcessNode(*(_DWORD *)(a3 + 72), v9, &v72);
    if ( v10 < 0 )
    {
      v74 = v10;
      throw (long *)&v74;
    }
    v11 = *((_QWORD *)&v66 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v66);
    v12 = (_QWORD *)*((_QWORD *)&v68 + 1);
    v8 = **((_QWORD **)&v68 + 1);
    *(_QWORD *)(*((_QWORD *)&v68 + 1) + 16LL) = v72;
    *((_QWORD *)&v68 + 1) = v8;
    v12[1] = v11;
    *v12 = 0LL;
    ++v67;
    if ( *((_QWORD *)&v66 + 1) )
      **((_QWORD **)&v66 + 1) = v12;
    else
      *(_QWORD *)&v66 = v12;
    *((_QWORD *)&v66 + 1) = v12;
    v72 = 0LL;
  }
  if ( !*(_DWORD *)(a3 + 72) )
  {
    LODWORD(v90) = 1;
    v13 = wil::details::static_lazy<AudioDgTelemetryProvider>::get(
            v8,
            _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)[1];
    if ( v13 )
    {
      if ( *(_DWORD *)v13 > 4u && (*(_QWORD *)(v13 + 16) & 0x400000000000LL) != 0 )
      {
        if ( (*(_QWORD *)(v13 + 24) & 0x400000000000LL) == *(_QWORD *)(v13 + 24) )
          v6 = 1;
        v65 = v6;
      }
    }
  }
  v14 = 0;
  v15 = v87;
  v16 = v86[0];
  while ( v14 < *(_DWORD *)(a3 + 96) )
  {
    v64 = (1 << v14) & *(_DWORD *)(a3 + 80);
    v17 = v64;
    v18 = *(_DWORD *)(a3 + 88) == v14;
    v19 = (1 << v14) & *(_DWORD *)(a3 + 92);
    if ( !v64 )
      goto LABEL_18;
    if ( *(_DWORD *)(a3 + 88) == v14 )
    {
      if ( (_DWORD)v90 )
      {
        v71 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v57 = CAPOProcessNode::CreateAPOProcessNode(
                &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                0LL,
                *(_DWORD *)(a3 + 72),
                1,
                0,
                &v71,
                (HKEY *)v63);
        if ( v57 < 0 )
        {
          v75 = v57;
          throw (long *)&v75;
        }
        v90 = *(CPipeInstance **)v63;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v66, &v90);
        *(_QWORD *)v63 = 0LL;
        LODWORD(v90) = 0;
        v17 = v64;
      }
      if ( v65 )
      {
        v71 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
        v58 = CAPOProcessNode::CreateAPOProcessNode(
                &GUID_693badea_1eb1_4013_b799_285f624a55bd,
                0LL,
                *(_DWORD *)(a3 + 72),
                1,
                0,
                &v71,
                (HKEY *)v63);
        if ( v58 < 0 )
        {
          v76 = v58;
          throw (long *)&v76;
        }
        *(_QWORD *)&v71.Data1 = *(_QWORD *)v63;
        ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v66, &v71);
        *(_QWORD *)v63 = 0LL;
        v65 = 0;
        v17 = v64;
      }
    }
    if ( !v19 )
      v20 = (GUID *)(a3 + 120);
    else
LABEL_18:
      v20 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    *(_QWORD *)&v71.Data1 = v20;
    if ( v17 )
    {
      if ( v19 )
        v21 = 3;
      else
        v21 = 2;
      v15 = v85;
      v87 = v85;
      if ( v85 )
        ((void (__fastcall *)(struct IPropertyStore *, _BOOL8))v85->lpVtbl->AddRef)(v85, v18);
      v5 |= 1u;
      v22 = (__int64)v15;
      v20 = *(GUID **)&v71.Data1;
    }
    else
    {
      v21 = 0;
      v16 = 0LL;
      v86[0] = 0LL;
      v5 |= 2u;
      v22 = 0LL;
    }
    v64 = v5;
    v71 = *v20;
    v23 = CAPOProcessNode::CreateAPOProcessNode(
            (const struct _GUID *)(16LL * v14 + a3 + 200),
            v22,
            *(_DWORD *)(a3 + 72),
            0,
            v21,
            &v71,
            (HKEY *)v63);
    if ( (v5 & 2) != 0 )
    {
      v5 &= ~2u;
      v64 = v5;
      if ( v16 )
        (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    if ( (v5 & 1) != 0 )
    {
      v5 &= ~1u;
      if ( v15 )
        ((void (__fastcall *)(struct IPropertyStore *))v15->lpVtbl->Release)(v15);
    }
    if ( v23 < 0 )
    {
      v77 = v23;
      throw (long *)&v77;
    }
    v24 = *((_QWORD *)&v66 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v66);
    v25 = (_QWORD *)*((_QWORD *)&v68 + 1);
    v26 = **((_QWORD **)&v68 + 1);
    *(_QWORD *)(*((_QWORD *)&v68 + 1) + 16LL) = *(_QWORD *)v63;
    *((_QWORD *)&v68 + 1) = v26;
    v25[1] = v24;
    *v25 = 0LL;
    ++v67;
    if ( *((_QWORD *)&v66 + 1) )
      **((_QWORD **)&v66 + 1) = v25;
    else
      *(_QWORD *)&v66 = v25;
    *((_QWORD *)&v66 + 1) = v25;
    *(_QWORD *)v63 = 0LL;
    ++v14;
  }
  if ( (_DWORD)v90 )
  {
    *(GUID *)v86 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    APOProcessNode = CAPOProcessNode::CreateAPOProcessNode(
                       &GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
                       0LL,
                       *(_DWORD *)(a3 + 72),
                       1,
                       0,
                       v86,
                       (HKEY *)v63);
    if ( APOProcessNode < 0 )
    {
      v78 = APOProcessNode;
      throw (long *)&v78;
    }
    v28 = *((_QWORD *)&v66 + 1);
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v66);
    v29 = (_QWORD *)*((_QWORD *)&v68 + 1);
    v30 = **((_QWORD **)&v68 + 1);
    *(_QWORD *)(*((_QWORD *)&v68 + 1) + 16LL) = *(_QWORD *)v63;
    *((_QWORD *)&v68 + 1) = v30;
    v29[1] = v28;
    *v29 = 0LL;
    ++v67;
    if ( *((_QWORD *)&v66 + 1) )
      **((_QWORD **)&v66 + 1) = v29;
    else
      *(_QWORD *)&v66 = v29;
    *((_QWORD *)&v66 + 1) = v29;
    *(_QWORD *)v63 = 0LL;
  }
  if ( v65 )
  {
    *(GUID *)v86 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    v59 = CAPOProcessNode::CreateAPOProcessNode(
            &GUID_693badea_1eb1_4013_b799_285f624a55bd,
            0LL,
            *(_DWORD *)(a3 + 72),
            1,
            0,
            v86,
            (HKEY *)v63);
    if ( v59 < 0 )
    {
      v79 = v59;
      throw (long *)&v79;
    }
    v90 = *(CPipeInstance **)v63;
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::AddTail(&v66, &v90);
    *(_QWORD *)v63 = 0LL;
  }
  v31 = CDeviceProcessNode::CreateDeviceProcessNode((struct AUDIO_DEVICE_PIPE_DESCRIPTOR *)a3, &v70);
  if ( v31 < 0 )
  {
    v80 = v31;
    throw (long *)&v80;
  }
  v32 = *((_QWORD *)&v66 + 1);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetFreeNode(&v66);
  v33 = (_QWORD *)*((_QWORD *)&v68 + 1);
  v34 = **((_QWORD **)&v68 + 1);
  *(_QWORD *)(*((_QWORD *)&v68 + 1) + 16LL) = v70;
  *((_QWORD *)&v68 + 1) = v34;
  v33[1] = v32;
  *v33 = 0LL;
  ++v67;
  if ( *((_QWORD *)&v66 + 1) )
    **((_QWORD **)&v66 + 1) = v33;
  else
    *(_QWORD *)&v66 = v33;
  *((_QWORD *)&v66 + 1) = v33;
  v70 = 0LL;
  v35 = (CPipeInstance *)operator new(0x140uLL, (const struct std::nothrow_t *)&std::nothrow);
  v90 = v35;
  if ( v35 )
    v36 = CPipeInstance::CPipeInstance(v35, READ_DATA_PIPE);
  else
    v36 = 0LL;
  v84 = v36;
  if ( !v36 )
  {
    v81 = -2147024882;
    throw (long *)&v81;
  }
  *(_OWORD *)((char *)v36 + 296) = *(_OWORD *)(a3 + 152);
  *((_DWORD *)v36 + 3) = *(_DWORD *)(a3 + 72);
  *((_DWORD *)v36 + 33) = *(_DWORD *)(a3 + 80) != 0;
  *((_DWORD *)v36 + 31) = *(_DWORD *)(a3 + 100) == 1;
  *((_DWORD *)v36 + 32) = *(_DWORD *)(a3 + 100);
  if ( *((struct IUnknown **)v36 + 19) != a1 )
    ATL::AtlComPtrAssign((struct IUnknown **)v36 + 19, a1);
  if ( *((struct IUnknown **)v36 + 30) != a2 )
    ATL::AtlComPtrAssign((struct IUnknown **)v36 + 30, a2);
  v37 = *((_QWORD *)&v66 + 1);
  while ( v37 )
  {
    v38 = v37;
    v37 = *(_QWORD *)(v37 + 8);
    v39 = *((_QWORD *)v36 + 2);
    if ( !*((_QWORD *)v36 + 6) )
    {
      v43 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)v36 + 5, *((unsigned int *)v36 + 14), 0x18uLL);
      if ( !v43 )
        ATL::AtlThrowImpl(-2147024882);
      v44 = *((_DWORD *)v36 + 14);
      v45 = (_QWORD *)((char *)v43 + 16 * (v44 - 1) + 8 * (unsigned int)(v44 - 1) + 8);
      for ( i = v44 - 1; i >= 0; --i )
      {
        *v45 = *((_QWORD *)v36 + 6);
        *((_QWORD *)v36 + 6) = v45;
        v45 -= 3;
      }
    }
    v40 = (__int64 *)*((_QWORD *)v36 + 6);
    v41 = *v40;
    v40[2] = *(_QWORD *)(v38 + 16);
    *((_QWORD *)v36 + 6) = v41;
    v40[1] = 0LL;
    *v40 = v39;
    ++*((_QWORD *)v36 + 4);
    v42 = *((_QWORD *)v36 + 2);
    if ( v42 )
      *(_QWORD *)(v42 + 8) = v40;
    else
      *((_QWORD *)v36 + 3) = v40;
    *((_QWORD *)v36 + 2) = v40;
  }
  *((_DWORD *)v36 + 53) = *(_DWORD *)(a3 + 88) != -1;
  *((_DWORD *)v36 + 78) = *(_DWORD *)(a3 + 148);
  EndpointGuidFromEndpointId = GetEndpointGuidFromEndpointId(*(_QWORD *)(a3 + 56), (char *)v36 + 160);
  if ( EndpointGuidFromEndpointId < 0 )
  {
    v82 = EndpointGuidFromEndpointId;
    throw (long *)&v82;
  }
  v48 = *(const unsigned __int16 **)(a3 + 56);
  v49 = -1LL;
  do
    ++v49;
  while ( v48[v49] );
  *((_QWORD *)v36 + 24) = 0LL;
  v50 = v49 + 1;
  if ( v49 + 1 < v49 )
  {
    v53 = -2147024362;
    goto LABEL_116;
  }
  v51 = v50 * (unsigned __int128)2uLL;
  if ( is_mul_ok(v50, 2uLL) )
  {
    v52 = (unsigned __int16 *)CoTaskMemAlloc(2 * v50);
    *((_QWORD *)v36 + 24) = v52;
    if ( v52 )
    {
      v53 = 0;
      StringCchCopyNExW(v52, v49 + 1, v48, v49, v60, v61, v62);
      goto LABEL_68;
    }
    v53 = -2147024882;
LABEL_116:
    v83 = v53;
    throw (long *)&v83;
  }
  v53 = -2147024362;
LABEL_68:
  if ( v53 < 0 )
    goto LABEL_116;
  v54 = (int)((float)((float)*(int *)(*(_QWORD *)(a3 + 8) + 8LL)
                    / (float)*(unsigned __int16 *)(*(_QWORD *)(a3 + 8) + 12LL))
            * (double)(int)*(_QWORD *)(a3 + 32)
            / 10000000.0
            + 0.5);
  *((_DWORD *)v36 + 36) = v54;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids, v54);
  }
  v55 = *v91;
  *v91 = v36;
  if ( v55 )
    CPipeInstance::`scalar deleting destructor'(v55, DWORD2(v51));
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12LL,
      &WPP_0fecdcbf10bb38a7bbad2ceb2ecd9592_Traceguids,
      (unsigned int)v53);
  }
  if ( v85 )
    ((void (__fastcall *)(struct IPropertyStore *))v85->lpVtbl->Release)(v85);
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll(&v66);
  return (unsigned int)v53;
}
