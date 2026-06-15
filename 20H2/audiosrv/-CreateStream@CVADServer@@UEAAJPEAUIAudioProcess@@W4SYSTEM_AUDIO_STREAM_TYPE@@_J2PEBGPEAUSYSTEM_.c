/*
 * XREFs of ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180031320
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0zqttq_EtwEventWriteTransfer @ 0x1800028E0 (McTemplateU0zqttq_EtwEventWriteTransfer.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18000F700 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ?GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180020060 (-GetMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ??0CAudioStream@@QEAA@PEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x180031C60 (--0CAudioStream@@QEAA@PEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x180051C3C (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180052730 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEAU_GUID@@5555@Z @ 0x18006E330 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAVCEndpointCharacteristics@@W4SYSTEM_AUDIO_STRE.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800B4C4C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     WPP_SF_ @ 0x1800BB3A0 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800BD6CC (WPP_SF_q.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x1800D1AC0 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x1800D661C (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DC554 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVADServer::CreateStream(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _OWORD *a7)
{
  __int64 v8; // r15
  __int64 v10; // rbx
  unsigned __int64 CurrentThreadId; // rsi
  __int64 v12; // rcx
  signed __int64 *v13; // rbx
  __int64 *v14; // rcx
  unsigned int v15; // ecx
  std::_Ref_count_base **v16; // rbx
  __int64 v17; // r8
  std::_Ref_count_base *v18; // rcx
  std::_Ref_count_base *v19; // rax
  CEndpointCharacteristics *v20; // rcx
  int v21; // eax
  int MixFormat; // esi
  __int64 v23; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v24; // edx
  void *v25; // rdx
  int v26; // eax
  void *v27; // rcx
  int v28; // eax
  __int64 v29; // r13
  int v30; // edx
  int v31; // ecx
  int v32; // eax
  char *v33; // r15
  int v34; // eax
  CAudioStream *v35; // rsi
  wil::details *v36; // rcx
  HANDLE Event; // r14
  wil::details *v38; // r15
  _OWORD *v39; // rsi
  __int128 *v40; // rcx
  _OWORD *v41; // rax
  __int64 v42; // rdx
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  CAudioStream *v58; // rcx
  char *v59; // rbx
  __int64 v60; // rsi
  unsigned int v61; // eax
  __int64 v62; // rbx
  int v63; // eax
  unsigned __int8 v64; // bl
  CAudioStream *v65; // rcx
  __int64 v66; // r8
  _QWORD *v67; // rcx
  _QWORD *v68; // rax
  CEndpointCharacteristics *v69; // rcx
  HANDLE ProcessHeap; // rax
  _QWORD *v72; // r15
  signed __int64 v73; // rax
  HANDLE v74; // rax
  __int64 v75; // rdx
  int v76; // eax
  __int64 v77; // rdx
  unsigned __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // rdx
  __int64 v82; // rcx
  int v83; // eax
  struct _GUID *v84; // r8
  __int64 v85; // rdx
  struct tWAVEFORMATEX *v86; // rdx
  void *v87; // rdx
  unsigned __int64 v88; // r9
  void *v89; // rcx
  void *v90; // rcx
  void *v91; // rcx
  DWORD LastError; // ebx
  void *v93; // rdx
  int LastErrorFailHr; // eax
  __int64 v95; // r8
  int v96; // eax
  int v97; // [rsp+20h] [rbp-140h]
  struct _GUID *v98; // [rsp+20h] [rbp-140h]
  int v99; // [rsp+20h] [rbp-140h]
  int v100; // [rsp+20h] [rbp-140h]
  unsigned int v101; // [rsp+28h] [rbp-138h]
  char v102; // [rsp+E0h] [rbp-80h] BYREF
  CAudioStream *v103; // [rsp+E8h] [rbp-78h]
  CEndpointCharacteristics *v104; // [rsp+F0h] [rbp-70h] BYREF
  LPVOID v105; // [rsp+F8h] [rbp-68h] BYREF
  LPVOID pv; // [rsp+100h] [rbp-60h] BYREF
  _OWORD *v107; // [rsp+108h] [rbp-58h]
  __int64 v108; // [rsp+110h] [rbp-50h]
  __int64 v109; // [rsp+118h] [rbp-48h] BYREF
  __int64 v110; // [rsp+120h] [rbp-40h]
  _QWORD v111[3]; // [rsp+130h] [rbp-30h] BYREF
  _QWORD v112[2]; // [rsp+148h] [rbp-18h] BYREF
  __int64 v113; // [rsp+158h] [rbp-8h]
  DWORD v114; // [rsp+160h] [rbp+0h]
  __int64 v115; // [rsp+168h] [rbp+8h]
  LPVOID *p_pv; // [rsp+170h] [rbp+10h]
  struct tWAVEFORMATEX *v117; // [rsp+178h] [rbp+18h] BYREF
  char v118; // [rsp+180h] [rbp+20h]
  LPVOID *v119; // [rsp+188h] [rbp+28h]
  struct tWAVEFORMATEX *v120; // [rsp+190h] [rbp+30h] BYREF
  char v121; // [rsp+198h] [rbp+38h]
  __int64 v122[2]; // [rsp+1A0h] [rbp+40h] BYREF
  GUID v123; // [rsp+1B0h] [rbp+50h]
  struct _GUID v124; // [rsp+1C0h] [rbp+60h] BYREF
  GUID v125; // [rsp+1D0h] [rbp+70h]
  GUID v126; // [rsp+1E0h] [rbp+80h]
  struct _GUID v127; // [rsp+1F0h] [rbp+90h] BYREF
  _BYTE v128[32]; // [rsp+200h] [rbp+A0h] BYREF
  __int64 v129; // [rsp+220h] [rbp+C0h]
  char v130[16]; // [rsp+6F0h] [rbp+590h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+748h] [rbp+5E8h]

  v8 = a2;
  v122[1] = a6;
  v107 = a7;
  v110 = a4;
  v108 = a2;
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McTemplateU0zqttq_EtwEventWriteTransfer(
      a1,
      (int)&VadServer_CreateStream_Task_Start,
      *(const wchar_t **)(a1 + 208),
      *(_DWORD *)(a1 + 328),
      *(_DWORD *)(a1 + 336),
      *(_DWORD *)(a1 + 348),
      *(_DWORD *)(a1 + 332));
  v10 = wil::details::g_pThreadFailureCallbacks;
  v111[0] = off_180147F68;
  v104 = 0LL;
  v111[1] = &v102;
  v111[2] = &v104;
  v112[1] = v111;
  v102 = 0;
  v112[0] = 0LL;
  v113 = 0LL;
  v114 = 0;
  v115 = 0LL;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_86;
  CurrentThreadId = GetCurrentThreadId();
  v12 = *(_QWORD *)(v10 + 8 * (CurrentThreadId % 0xA));
  v13 = (signed __int64 *)(v10 + 8 * (CurrentThreadId % 0xA));
  if ( !v12 )
  {
LABEL_75:
    ProcessHeap = GetProcessHeap();
    v72 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    if ( wil::details::g_pfnRtlDisownModuleHeapAllocation )
    {
      v74 = GetProcessHeap();
      ((void (__fastcall *)(HANDLE, _QWORD *))wil::details::g_pfnRtlDisownModuleHeapAllocation)(v74, v72);
    }
    if ( v72 )
    {
      *(_DWORD *)v72 = CurrentThreadId;
      v14 = v72 + 2;
      v72[1] = 0LL;
      v72[2] = 0LL;
      _m_prefetchw(v13);
      do
      {
        v73 = *v13;
        v72[1] = *v13;
      }
      while ( v73 != _InterlockedCompareExchange64(v13, (signed __int64)v72, v73) );
      v8 = v108;
      goto LABEL_7;
    }
    v8 = v108;
LABEL_86:
    v14 = 0LL;
    goto LABEL_7;
  }
  while ( *(_DWORD *)v12 != (_DWORD)CurrentThreadId )
  {
    v12 = *(_QWORD *)(v12 + 8);
    if ( !v12 )
      goto LABEL_75;
  }
  v14 = (__int64 *)(v12 + 16);
LABEL_7:
  v112[0] = v14;
  if ( v14 )
  {
    v113 = *v14;
    *v14 = (__int64)v112;
    v114 = GetCurrentThreadId();
  }
  memset_0(a7, 0, 0x4F0uLL);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  if ( !*(_DWORD *)(a1 + 184) )
  {
    MixFormat = -2004287487;
    v75 = 1727LL;
    goto LABEL_98;
  }
  if ( *(_QWORD *)(a1 + 192) )
  {
    MixFormat = -2004287486;
    v75 = 1728LL;
    goto LABEL_98;
  }
  v15 = *(_DWORD *)(a1 + 328);
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      if ( v15 <= 0x12 )
      {
        v76 = 264969;
        if ( _bittest(&v76, v15) )
          goto LABEL_12;
      }
    }
    else if ( a3 == 2 && !v15 )
    {
      goto LABEL_12;
    }
    MixFormat = -2147024809;
    v75 = 1731LL;
    goto LABEL_98;
  }
LABEL_12:
  v16 = (std::_Ref_count_base **)operator new(0x1E0uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v16 )
  {
    v97 = a1 + 280;
    LOBYTE(v17) = *(_DWORD *)(a1 + 264) == 1;
    CAudioStream::CAudioStream(v16, v8, v17, *(unsigned int *)(a1 + 268));
    v16[56] = 0LL;
    *v16 = (std::_Ref_count_base *)&CPerStreamVolumeAudioStream::`vftable'{for `IAudioGraphCallback'};
    v16[1] = (std::_Ref_count_base *)&CAudioStream::`vftable'{for `IAudioStreamInfo'};
    v16[2] = (std::_Ref_count_base *)&CPerStreamVolumeAudioStream::`vftable'{for `IAudioStreamPolicyVolumeClient'};
    v16[3] = (std::_Ref_count_base *)&CPerStreamVolumeAudioStream::`vftable'{for `IDuckingController'};
    v16[4] = (std::_Ref_count_base *)&CPerStreamVolumeAudioStream::`vftable'{for `CUnknown'};
    v16[55] = 0LL;
    *((_BYTE *)v16 + 456) = 0;
    v16[58] = 0LL;
    v16[59] = 0LL;
    if ( !a3 )
    {
      v18 = qword_18019EAB0;
      if ( qword_18019EAB0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)qword_18019EAB0 + 2);
        v18 = qword_18019EAB0;
      }
      v16[58] = (std::_Ref_count_base *)g_RenderStreamTaperTranslator;
      v19 = v16[59];
      v16[59] = v18;
      if ( v19 )
        std::_Ref_count_base::_Decref(v19);
    }
  }
  else
  {
    v16 = 0LL;
  }
  v103 = (CAudioStream *)v16;
  if ( v16 )
  {
    v20 = v104;
    v104 = 0LL;
    if ( v20 )
      (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v20 + 16LL))(v20);
    v98 = (struct _GUID *)&v104;
    v21 = (*(__int64 (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
            g_pEndpointCharacteristicsCache,
            *(_QWORD *)(a1 + 216),
            0LL,
            0LL);
    MixFormat = v21;
    if ( v21 < 0 )
    {
      v77 = 1746LL;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 264) != 1 )
      {
        v122[0] = *((_QWORD *)v104 + 2);
        v23 = v122[0];
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        v24 = *(_DWORD *)(a1 + 552);
        v124 = *(struct _GUID *)(a1 + 440);
        pv = 0LL;
        p_pv = &pv;
        v117 = 0LL;
        v118 = 1;
        MixFormat = CEndpointCharacteristics::GetMixFormat(v104, v24, &v124, &v117);
        if ( v118 )
        {
          v25 = *p_pv;
          *p_pv = v117;
          if ( v25 )
            CoTaskMemFree(v25);
        }
        if ( MixFormat < 0 )
        {
          v78 = (unsigned int)MixFormat;
          v79 = 1761LL;
LABEL_123:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v79,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)v78,
            (int)&v104);
LABEL_124:
          v91 = pv;
          pv = 0LL;
          if ( v91 )
            CoTaskMemFree(v91);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v122);
          goto LABEL_60;
        }
        if ( *(_DWORD *)(a1 + 348) )
        {
          v26 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)v103 + 136LL))(
                  v103,
                  *(_QWORD *)(a1 + 176));
          MixFormat = v26;
          if ( v26 >= 0 )
            goto LABEL_30;
          v79 = 1768LL;
LABEL_122:
          v78 = (unsigned int)v26;
          goto LABEL_123;
        }
        if ( (*(_BYTE *)(a1 + 268) & 1) == 0 )
        {
          v26 = (*(__int64 (__fastcall **)(CAudioStream *, LPVOID))(*(_QWORD *)v103 + 136LL))(v103, pv);
          MixFormat = v26;
          if ( v26 >= 0 )
          {
LABEL_30:
            v27 = pv;
            pv = 0LL;
            if ( v27 )
              CoTaskMemFree(v27);
            if ( v23 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
LABEL_34:
            v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8);
            v29 = *(unsigned int *)(a1 + 328);
            v30 = v28;
            if ( (unsigned int)(a3 - 1) <= 1 )
              v31 = dword_180160540[v29];
            else
              v31 = dword_1801604E0[v29];
            v32 = 0;
            if ( v30 )
              v32 = 16;
            LODWORD(v105) = 2 * (v31 + v32) + 1;
            memset_0(v128, 0, 0x4F0uLL);
            if ( v103 )
              v33 = (char *)v103 + 8;
            else
              v33 = 0LL;
            v99 = *(_DWORD *)(a1 + 336);
            MixFormat = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, __int64, char *, _QWORD))(*(_QWORD *)g_AudioResourceManager + 24LL))(
                          g_AudioResourceManager,
                          v108,
                          v33,
                          (unsigned int)v29);
            if ( MixFormat >= 0 )
            {
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_q(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  33LL,
                  &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids,
                  v129);
              }
              v34 = (*(__int64 (__fastcall **)(_QWORD, CAudioStream *))(**(_QWORD **)(a1 + 168) + 288LL))(
                      *(_QWORD *)(a1 + 168),
                      v103);
              MixFormat = v34;
              if ( v34 >= 0 )
              {
                v35 = v103;
                Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
                if ( Event )
                {
                  GetLastError();
                  v38 = (wil::details *)*((_QWORD *)v35 + 39);
                  if ( v38 )
                  {
                    LastError = GetLastError();
                    wil::details::CloseHandle(v38, v93);
                    SetLastError(LastError);
                  }
                  *((_QWORD *)v35 + 39) = Event;
LABEL_48:
                  v39 = v107;
                  v40 = (__int128 *)v128;
                  v41 = v107;
                  v42 = 9LL;
                  do
                  {
                    v41 += 8;
                    v43 = *v40;
                    v44 = v40[1];
                    v40 += 8;
                    *(v41 - 8) = v43;
                    v45 = *(v40 - 6);
                    *(v41 - 7) = v44;
                    v46 = *(v40 - 5);
                    *(v41 - 6) = v45;
                    v47 = *(v40 - 4);
                    *(v41 - 5) = v46;
                    v48 = *(v40 - 3);
                    *(v41 - 4) = v47;
                    v49 = *(v40 - 2);
                    *(v41 - 3) = v48;
                    v50 = *(v40 - 1);
                    *(v41 - 2) = v49;
                    *(v41 - 1) = v50;
                    --v42;
                  }
                  while ( v42 );
                  v51 = *v40;
                  v52 = v40[1];
                  v109 = 0LL;
                  *v41 = v51;
                  v53 = v40[2];
                  v41[1] = v52;
                  v54 = v40[3];
                  v41[2] = v53;
                  v55 = v40[4];
                  v41[3] = v54;
                  v56 = v40[5];
                  v41[4] = v55;
                  v57 = v40[6];
                  v58 = v103;
                  v41[5] = v56;
                  v59 = (char *)v58 + 8;
                  v41[6] = v57;
                  *((_QWORD *)v39 + 5) = *((_QWORD *)v58 + 41);
                  *(_QWORD *)(a1 + 544) = *((_QWORD *)v58 + 41);
                  if ( (*(int (__fastcall **)(char *, __int64 *))(*(_QWORD *)v59 + 24LL))(v59, &v109) >= 0 )
                  {
                    v60 = v109;
                    v61 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v59 + 48LL))(v59);
                    v62 = v61;
                    if ( v61 >= 0x15 )
                    {
                      v39 = v107;
                    }
                    else
                    {
                      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v60 + 96LL))(v60) )
                      {
                        if ( dword_1801712D0[v62] )
                        {
                          v96 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 136LL))(v60);
                          if ( !v96 && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v60 + 376LL))(v60) )
                            LODWORD(v62) = 0;
                        }
                      }
                      v63 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD))(*(_QWORD *)g_PolicyManager
                                                                                            + 80LL))(
                              g_PolicyManager,
                              (unsigned int)v62);
                      v39 = v107;
                      if ( v63 )
                      {
                        v64 = 1;
                        goto LABEL_55;
                      }
                    }
                  }
                  v64 = 0;
LABEL_55:
                  if ( v109 )
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v109 + 16LL))(v109);
                  v65 = v103;
                  *(_BYTE *)(a1 + 488) = v64;
                  *((_DWORD *)v39 + 237) = v64;
                  *(_QWORD *)(a1 + 528) = v110;
                  *(_QWORD *)(a1 + 536) = a5;
                  *(_QWORD *)(a1 + 192) = v65;
                  (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v65 + 56LL))(v65);
                  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                  {
                    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids);
                  }
                  MixFormat = 0;
                  goto LABEL_60;
                }
                LastErrorFailHr = wil::details::GetLastErrorFailHr(v36);
                MixFormat = LastErrorFailHr;
                if ( LastErrorFailHr >= 0 )
                  goto LABEL_48;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x53D,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
                  (const char *)(unsigned int)LastErrorFailHr,
                  v99);
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x749,
                  (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                  (const char *)(unsigned int)MixFormat,
                  v100);
                LOBYTE(v95) = 1;
                (*(void (__fastcall **)(_QWORD, CAudioStream *, __int64))(**(_QWORD **)(a1 + 168) + 312LL))(
                  *(_QWORD *)(a1 + 168),
                  v103,
                  v95);
LABEL_60:
                (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)v103 + 64LL))(v103);
                goto LABEL_61;
              }
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x744,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v34,
                v99);
            }
            if ( v129 )
              CAudioStream::CloseAudioHandle(v103);
            goto LABEL_60;
          }
          v79 = 1800LL;
          goto LABEL_122;
        }
        v80 = *(unsigned int *)(a1 + 408);
        v81 = *(unsigned int *)(a1 + 336);
        v82 = *(unsigned int *)(a1 + 328);
        LODWORD(v98) = 0;
        v126 = GUID_00000000_0000_0000_0000_000000000000;
        v105 = 0LL;
        v123 = GUID_00000000_0000_0000_0000_000000000000;
        v125 = GUID_00000000_0000_0000_0000_000000000000;
        v83 = DeriveAudioProcessingModeConfiguration(v82, v81, v80, v104);
        MixFormat = v83;
        if ( v83 >= 0 )
        {
          v86 = *(struct tWAVEFORMATEX **)(a1 + 176);
          v119 = &v105;
          v101 = *(_DWORD *)(a1 + 328);
          v127 = v123;
          v120 = 0LL;
          v121 = 1;
          MixFormat = DeriveOffloadConnectorFormatFromStreamFormat(v104, v86, v84, &v127, v98, v101, &v120);
          if ( v121 )
          {
            v87 = *v119;
            *v119 = v120;
            if ( v87 )
              CoTaskMemFree(v87);
          }
          if ( MixFormat < 0 )
          {
            v88 = (unsigned int)MixFormat;
            v85 = 1793LL;
            goto LABEL_117;
          }
          v83 = (*(__int64 (__fastcall **)(CAudioStream *, LPVOID))(*(_QWORD *)v103 + 136LL))(v103, v105);
          MixFormat = v83;
          if ( v83 >= 0 )
          {
            v90 = v105;
            v105 = 0LL;
            if ( v90 )
              CoTaskMemFree(v90);
            goto LABEL_30;
          }
          v85 = 1795LL;
        }
        else
        {
          v85 = 1791LL;
        }
        v88 = (unsigned int)v83;
LABEL_117:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v85,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)v88,
          (int)v98);
        v89 = v105;
        v105 = 0LL;
        if ( v89 )
          CoTaskMemFree(v89);
        goto LABEL_124;
      }
      v21 = (*(__int64 (__fastcall **)(CAudioStream *, _QWORD))(*(_QWORD *)v103 + 136LL))(v103, *(_QWORD *)(a1 + 176));
      MixFormat = v21;
      if ( v21 >= 0 )
        goto LABEL_34;
      v77 = 1752LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v77,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v21,
      (int)&v104);
    goto LABEL_60;
  }
  MixFormat = -2147024882;
  v75 = 1739LL;
LABEL_98:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v75,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)MixFormat,
    v97);
LABEL_61:
  if ( a1 != -224 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 224));
  if ( v114 )
  {
    if ( v114 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B0,
        (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        v99);
    v67 = (_QWORD *)v112[0];
    v114 = 0;
    v68 = *(_QWORD **)v112[0];
    if ( *(_QWORD *)v112[0] )
    {
      while ( v68 != v112 )
      {
        v67 = v68 + 2;
        v112[0] = v68 + 2;
        v68 = (_QWORD *)v68[2];
        if ( !v68 )
          goto LABEL_69;
      }
      *v67 = v113;
    }
LABEL_69:
    v112[0] = 0LL;
  }
  v69 = v104;
  if ( v104 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v104 + 16LL))(v104);
  if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
    McGenEventWrite_EtwEventWriteTransfer(
      (__int64)v69,
      (__int64)&VadServer_CreateStream_Task_Stop,
      v66,
      1LL,
      (__int64)v130);
  return (unsigned int)MixFormat;
}
