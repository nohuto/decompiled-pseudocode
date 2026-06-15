/*
 * XREFs of ?CreateSpatialStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x14003FE80
 * Callers:
 *     ?CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400196D4 (-CreateStreamInstance@CStreamProcessNode@@QEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAPEAUICr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002134 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessMemoryManager@@AEAPEBG@Z @ 0x14001152C (--$MakeAndInitialize@VCCrossProcessMemoryManager@@UICrossProcessMemoryManager@@AEAPEBG@Details@W.c)
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x140018460 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B180 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CC60 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001D34C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_DDD @ 0x140039F40 (WPP_SF_DDD.c)
 *     ?reset@?$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14003FB64 (-reset@-$com_ptr_t@UICrossProcessEvent@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z @ 0x14003FB90 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@PEAVHandleSendReceiveServer@@_J@Z.c)
 *     ?HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIIPEAI@Z @ 0x14004058C (-HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE@@YAJ_JIIPEAI@Z.c)
 *     CreateSpatialCrossProcessEndpointRT @ 0x14005E264 (CreateSpatialCrossProcessEndpointRT.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointInstance::CreateSpatialStreamEndpointInstance(
        struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *a1,
        __int64 a2,
        int a3,
        struct SYSTEM_AUDIO_STREAM *a4,
        struct ICrossProcessMemory **a5,
        struct ICrossProcessEvent **a6,
        struct CEndpointInstance **a7)
{
  __int64 v8; // r13
  int v9; // r12d
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v12; // r10
  int v13; // r11d
  int started; // edi
  __int64 v15; // r9
  __int64 v16; // rdx
  int v17; // eax
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v18; // r10
  unsigned int v19; // r11d
  unsigned int v20; // esi
  __int64 v21; // rax
  void (__fastcall ***v22)(_QWORD, __int64); // rcx
  HRESULT v23; // eax
  __int64 v24; // rdx
  LPVOID v25; // rbx
  __int64 v26; // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rdx
  int v31; // eax
  struct IAudioEndpointRT *v32; // rbx
  int v33; // eax
  __int64 v34; // r9
  __int64 v35; // rdx
  int v36; // eax
  CEndpointInstance *v37; // rax
  CEndpointInstance *v38; // rax
  struct ICrossProcessEvent *v39; // rcx
  struct HandleSendReceiveServer *v40; // rcx
  void *v41; // rcx
  LPVOID v43; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-C8h] BYREF
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR *v45; // [rsp+40h] [rbp-C0h] BYREF
  struct HandleSendReceiveServer *v46; // [rsp+48h] [rbp-B8h] BYREF
  struct IAudioEndpointRT *v47; // [rsp+50h] [rbp-B0h] BYREF
  struct ICrossProcessEvent *v48; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+60h] [rbp-A0h]
  struct ICrossProcessMemory **v50; // [rsp+68h] [rbp-98h]
  struct HandleSendReceiveServer *v51[2]; // [rsp+70h] [rbp-90h] BYREF
  char v52; // [rsp+80h] [rbp-80h]
  struct CEndpointInstance **v53; // [rsp+90h] [rbp-70h]
  struct SYSTEM_AUDIO_STREAM_DESCRIPTOR **v54; // [rsp+98h] [rbp-68h]
  char v55; // [rsp+A0h] [rbp-60h]
  __int128 v56; // [rsp+B0h] [rbp-50h] BYREF
  int v57; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v58; // [rsp+C8h] [rbp-38h]
  __int128 v59; // [rsp+D8h] [rbp-28h]
  __int128 v60; // [rsp+E8h] [rbp-18h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  int v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  int v64; // [rsp+110h] [rbp+10h]
  int v65; // [rsp+114h] [rbp+14h]
  __int64 v66; // [rsp+118h] [rbp+18h]
  struct HandleSendReceiveServer *v67; // [rsp+120h] [rbp+20h]
  struct ICrossProcessEvent *v68; // [rsp+128h] [rbp+28h]
  LPVOID v69; // [rsp+130h] [rbp+30h]
  __int64 v70; // [rsp+138h] [rbp+38h]
  __int64 v71; // [rsp+140h] [rbp+40h]
  __int64 v72; // [rsp+148h] [rbp+48h]
  __int128 v73; // [rsp+150h] [rbp+50h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v49 = a3;
  v45 = a1;
  v50 = a5;
  v53 = a7;
  v54 = &v45;
  v55 = 1;
  v8 = *((_QWORD *)a1 + 16);
  v9 = *(_DWORD *)a1;
  v10 = *(unsigned __int16 *)(v8 + 12);
  v11 = HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE(a2, *(_DWORD *)(v8 + 8), v10, (unsigned int *)&v43);
  started = v11;
  if ( v11 < 0 )
  {
    v15 = (unsigned int)v11;
    v16 = 492LL;
LABEL_65:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v15);
    goto LABEL_66;
  }
  if ( (int)v43 + v13 < (unsigned int)v43 )
  {
    started = -2147024362;
    v15 = 2147942934LL;
    v16 = 493LL;
    goto LABEL_65;
  }
  v17 = HNSTIME_BYTERATE_TO_FRAMES_DOUBLE_SAFE(*(_QWORD *)(v12 + 24), *(_DWORD *)(v8 + 8), v10, (unsigned int *)&v43);
  started = v17;
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F1,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_66;
  }
  v20 = (unsigned int)v43;
  if ( *((_DWORD *)v18 + 2) != 1 && v19 > (unsigned int)v43 )
    v20 = v19;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_DDD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xAu,
      (__int64)&WPP_d2de981987fa3fae783080b930bc1a00_Traceguids,
      v19);
    v18 = v45;
  }
  v47 = (struct IAudioEndpointRT *)*((_QWORD *)v18 + 2);
  v46 = 0LL;
  v48 = 0LL;
  v21 = *((_QWORD *)v18 + 10) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v21 )
    v21 = *((_QWORD *)v18 + 11) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v21 )
  {
    ppv = 0LL;
    v23 = CoCreateInstance((const IID *const)v18 + 5, 0LL, 0x17u, &GUID_c4e70434_407d_416b_94be_9717b79065fb, &ppv);
    started = v23;
    if ( v23 >= 0 )
    {
      v23 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)ppv + 24LL))(ppv, (__int64)v45 + 96);
      started = v23;
      if ( v23 >= 0 )
      {
        v25 = ppv;
        wil::com_ptr_t<ICrossProcessEvent,wil::err_returncode_policy>::reset((__int64 *)&v48);
        v23 = (*(__int64 (__fastcall **)(LPVOID, struct ICrossProcessEvent **))(*(_QWORD *)v25 + 32LL))(v25, &v48);
        started = v23;
        if ( v23 >= 0 )
        {
          wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&ppv);
          goto LABEL_29;
        }
        v24 = 521LL;
      }
      else
      {
        v24 = 520LL;
      }
    }
    else
    {
      v24 = 519LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)v23);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&ppv);
    goto LABEL_62;
  }
  v51[0] = (struct HandleSendReceiveServer *)&v46;
  v51[1] = 0LL;
  v52 = 1;
  started = CEndpointInstance::StartALPCHandleServer(v18, &v51[1]);
  if ( v52 )
  {
    v22 = *(void (__fastcall ****)(_QWORD, __int64))v51[0];
    *(_QWORD *)v51[0] = v51[1];
    if ( v22 )
      (**v22)(v22, 1LL);
  }
  if ( started < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x201,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)(unsigned int)started);
    goto LABEL_62;
  }
LABEL_29:
  v43 = 0LL;
  v26 = *((_QWORD *)v45 + 8) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( !v26 )
    v26 = *((_QWORD *)v45 + 9) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v43 = 0LL;
  if ( !v26 )
  {
    v27 = Microsoft::WRL::Details::MakeAndInitialize<CCrossProcessMemoryManager,ICrossProcessMemoryManager,unsigned short const * &>(
            (CCrossProcessMemoryManager **)&v43,
            (const unsigned __int16 **)&v47);
    started = v27;
    if ( v27 < 0 )
    {
      v28 = 534LL;
      goto LABEL_38;
    }
    goto LABEL_39;
  }
  v27 = CoCreateInstance((const IID *const)v45 + 4, 0LL, 0x17u, &GUID_6b7f3699_f0ab_4184_bfd4_383e1520e0c9, &v43);
  started = v27;
  if ( v27 >= 0 )
  {
    v27 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)v43 + 24LL))(v43, (__int64)v45 + 96);
    started = v27;
    if ( v27 < 0 )
    {
      v28 = 529LL;
      goto LABEL_38;
    }
LABEL_39:
    v47 = 0LL;
    if ( v9 )
    {
      started = -2147418113;
      v29 = 2147549183LL;
      v30 = 576LL;
    }
    else
    {
      v56 = *((_OWORD *)v45 + 3);
      *(GUID *)v51 = GUID_6b78656b_c0e1_4190_83ee_ef91c2908926;
      v47 = 0LL;
      v31 = CreateSpatialCrossProcessEndpointRT(v51, &v56, &v47);
      started = v31;
      if ( v31 >= 0 )
      {
        ppv = 0LL;
        v32 = v47;
        v33 = ((__int64 (__fastcall *)(struct IAudioEndpointRT *, GUID *, LPVOID *))v47->lpVtbl->QueryInterface)(
                v47,
                &GUID_50a63589_dc31_42b1_8e82_dbb0ab53dda5,
                &ppv);
        started = v33;
        if ( v33 >= 0 )
        {
          v57 = 160;
          v58 = *((_OWORD *)v45 + 13);
          v59 = *((_OWORD *)v45 + 14);
          v60 = *((_OWORD *)v45 + 15);
          v61 = *((_QWORD *)v45 + 32);
          v62 = 0;
          v63 = *((_QWORD *)v45 + 4);
          if ( v20 * (unsigned __int64)*(unsigned __int16 *)(v8 + 12) > 0xFFFFFFFF )
          {
            v64 = -1;
            started = -2147024362;
            v34 = 2147942934LL;
            v35 = 553LL;
          }
          else
          {
            v64 = v20 * *(unsigned __int16 *)(v8 + 12);
            v65 = v49;
            v66 = *((_QWORD *)v45 + 18);
            v67 = v46;
            v68 = v48;
            v70 = 0LL;
            v71 = *((_QWORD *)v45 + 16);
            v72 = *((_QWORD *)v45 + 14);
            v73 = *(_OWORD *)((char *)v45 + 180);
            v69 = v43;
            v36 = (*(__int64 (__fastcall **)(LPVOID, int *, struct ICrossProcessMemory **))(*(_QWORD *)ppv + 24LL))(
                    ppv,
                    &v57,
                    v50);
            started = v36;
            if ( v36 >= 0 )
            {
              *(GUID *)a4 = GUID_9371e7ff_df2d_4962_9585_40424d054550;
              *((_DWORD *)a4 + 236) = 0;
              *((_DWORD *)a4 + 4) = v20 * *(unsigned __int16 *)(v8 + 12);
              wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&ppv);
              v37 = (CEndpointInstance *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
              v50 = (struct ICrossProcessMemory **)v37;
              if ( v37 )
                v38 = CEndpointInstance::CEndpointInstance(v37, (struct IUnknown *)v32, v46, 0LL);
              else
                v38 = 0LL;
              if ( v38 )
              {
                v46 = 0LL;
                v50 = 0LL;
                *v53 = v38;
                v39 = v48;
                if ( v48 )
                {
                  *a6 = v48;
                  (*(void (__fastcall **)(struct ICrossProcessEvent *))(*(_QWORD *)v39 + 8LL))(v39);
                }
                else
                {
                  *a6 = 0LL;
                }
                started = 0;
              }
              else
              {
                started = -2147024882;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x249,
                  (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
                  (const char *)0x8007000ELL);
              }
              goto LABEL_60;
            }
            v34 = (unsigned int)v36;
            v35 = 564LL;
          }
        }
        else
        {
          v34 = (unsigned int)v33;
          v35 = 546LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v35,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
          (const char *)v34);
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&ppv);
LABEL_60:
        wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v47);
        goto LABEL_61;
      }
      v29 = (unsigned int)v31;
      v30 = 543LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
      (const char *)v29);
    goto LABEL_60;
  }
  v28 = 528LL;
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v28,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\endpointinstance.cpp",
    (const char *)(unsigned int)v27);
LABEL_61:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v43);
LABEL_62:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v48);
  v40 = v46;
  v46 = 0LL;
  if ( v40 )
    (**(void (__fastcall ***)(struct HandleSendReceiveServer *, __int64))v40)(v40, 1LL);
LABEL_66:
  v41 = (void *)*((_QWORD *)v45 + 18);
  if ( v41 )
  {
    CoTaskMemFree(v41);
    *((_QWORD *)v45 + 18) = 0LL;
  }
  return (unsigned int)started;
}
