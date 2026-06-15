/*
 * XREFs of ?RegisterSpatialPipe@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x140016130
 * Callers:
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x140008010 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14000F8B0 (-RemovePipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ @ 0x1400324D4 (--1-$CComPtr@UIAudioEndpoint@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1400336CC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x14003D47C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@@PEAUIAdaptiveSpatialAudioRenderer@@_N@Z @ 0x14003EAFC (-DoSpatialAudioProcessBlockRegistration@CAudioDeviceGraph@@AEAAJPEAUISpatialAudioProcessBlockRT@.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400432DC (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall CAudioDeviceGraph::RegisterSpatialPipe(CAudioDeviceGraph *this, struct CPipeInstance *a2, bool a3)
{
  int v4; // r12d
  __int64 v5; // r15
  struct ISpatialAudioProcessBlockRT *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rbx
  _QWORD *v10; // rax
  struct ISpatialAudioProcessBlockRT *v11; // rbx
  int v12; // ebx
  struct ISpatialAudioProcessBlockRT *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rbx
  _QWORD *v17; // rax
  struct ISpatialAudioProcessBlockRT *v18; // rbx
  bool v19; // r15
  __int64 *v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // rbx
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  int v27; // ebx
  CAudioDeviceGraph *v28; // rcx
  int v29; // ebx
  CAudioDeviceGraph *v30; // rcx
  __int64 v31; // rax
  char *v32; // [rsp+28h] [rbp-51h]
  struct ISpatialAudioProcessBlockRT *v33; // [rsp+80h] [rbp+7h] BYREF
  __int64 v34; // [rsp+88h] [rbp+Fh] BYREF
  struct ISpatialAudioProcessBlockRT *v35; // [rsp+90h] [rbp+17h] BYREF
  _QWORD *v36; // [rsp+98h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  struct ISpatialAudioProcessBlockRT *v38; // [rsp+E0h] [rbp+67h] BYREF
  bool v39; // [rsp+F0h] [rbp+77h]
  struct IAdaptiveSpatialAudioRenderer *v40; // [rsp+F8h] [rbp+7Fh] BYREF

  v39 = a3;
  v4 = 0;
  v5 = *((_QWORD *)this + 20);
  v6 = 0LL;
  v38 = 0LL;
  v40 = 0LL;
  v7 = *(_QWORD *)(v5 + 24);
  v8 = *(_QWORD *)(v5 + 72);
  if ( !v7 )
    goto LABEL_74;
  while ( 1 )
  {
    v9 = *(_QWORD *)(v7 + 16);
    v7 = *(_QWORD *)(v7 + 8);
    v10 = *(_QWORD **)(v8 + 16);
    v8 = *(_QWORD *)(v8 + 8);
    if ( !*v10 )
      ATL::AtlThrowImpl(-2147467259);
    if ( *(_DWORD *)(v9 + 40) != 2 )
      goto LABEL_10;
    v11 = *(struct ISpatialAudioProcessBlockRT **)(*(_QWORD *)(v9 + 32) + 40LL);
    v35 = v11;
    if ( v11 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v11 + 8LL))(v11);
    v33 = 0LL;
    if ( (**(int (__fastcall ***)(struct ISpatialAudioProcessBlockRT *, GUID *, struct ISpatialAudioProcessBlockRT **))v11)(
           v11,
           &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
           &v33) >= 0 )
      break;
    if ( v33 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v33 + 16LL))(v33);
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_10:
    if ( !v7 )
      goto LABEL_74;
  }
  v35 = 0LL;
  v6 = v11;
  v38 = v11;
  if ( v33 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v33 + 16LL))(v33);
  if ( !v11 )
  {
LABEL_74:
    if ( *(_DWORD *)(v5 + 112) == 1 )
    {
      if ( !*(_DWORD *)(v5 + 12) && !*(_DWORD *)(v5 + 128) )
      {
        LODWORD(v32) = *(_DWORD *)(v5 + 160);
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)0x129F,
          (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
          (const char *)0x80070490LL,
          (int)"Could not find ASAR in device pipe for EndpointId: {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
          v32,
          *(unsigned __int16 *)(v5 + 164),
          *(unsigned __int16 *)(v5 + 166),
          *(unsigned __int8 *)(v5 + 168),
          *(unsigned __int8 *)(v5 + 169),
          *(unsigned __int8 *)(v5 + 170),
          *(unsigned __int8 *)(v5 + 171),
          *(unsigned __int8 *)(v5 + 172),
          *(unsigned __int8 *)(v5 + 173),
          *(unsigned __int8 *)(v5 + 174),
          *(unsigned __int8 *)(v5 + 175));
      }
      ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v38);
    }
    else if ( v6 )
    {
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    goto LABEL_46;
  }
  v12 = (**(__int64 (__fastcall ***)(struct ISpatialAudioProcessBlockRT *, GUID *, struct IAdaptiveSpatialAudioRenderer **))v11)(
          v11,
          &GUID_24bdc606_d710_4d62_be35_be665fbc3e00,
          &v40);
  ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v38);
  if ( v12 < 0 )
    goto LABEL_46;
  v13 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v14 = *((_QWORD *)a2 + 3);
  v15 = *((_QWORD *)a2 + 9);
  if ( !v14 )
    goto LABEL_26;
  while ( 1 )
  {
    v16 = *(_QWORD *)(v14 + 16);
    v14 = *(_QWORD *)(v14 + 8);
    v17 = *(_QWORD **)(v15 + 16);
    v15 = *(_QWORD *)(v15 + 8);
    if ( !*v17 )
      ATL::AtlThrowImpl(-2147467259);
    if ( *(_DWORD *)(v16 + 40) != 2 )
      goto LABEL_25;
    v18 = *(struct ISpatialAudioProcessBlockRT **)(*(_QWORD *)(v16 + 32) + 40LL);
    v35 = v18;
    if ( v18 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v18 + 8LL))(v18);
    v38 = 0LL;
    if ( (**(int (__fastcall ***)(struct ISpatialAudioProcessBlockRT *, GUID *, struct ISpatialAudioProcessBlockRT **))v18)(
           v18,
           &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a,
           &v38) >= 0 )
      break;
    if ( v38 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v38 + 16LL))(v38);
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_25:
    if ( !v14 )
      goto LABEL_26;
  }
  v35 = 0LL;
  v13 = v18;
  v33 = v18;
  if ( v38 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v38 + 16LL))(v38);
  if ( !v18 )
  {
LABEL_26:
    if ( v13 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v13 + 16LL))(v13);
    goto LABEL_28;
  }
  v27 = (**(__int64 (__fastcall ***)(struct ISpatialAudioProcessBlockRT *, GUID *, __int64 *))v18)(
          v18,
          &GUID_ff4fd0e7_dae6_4f9f_b627_53d3bfbc611a,
          &v34);
  ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v33);
  if ( v27 < 0 )
  {
LABEL_28:
    v19 = v39;
    goto LABEL_29;
  }
  v38 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, struct ISpatialAudioProcessBlockRT **))(*(_QWORD *)v34 + 24LL))(v34, &v38);
  v19 = v39;
  if ( v4 >= 0 )
    v4 = CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(v28, v38, v40, v39);
  if ( v38 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v4 < 0 )
    goto LABEL_42;
LABEL_29:
  v20 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v21 = *((_QWORD *)a2 + 3);
  v22 = *((_QWORD *)a2 + 9);
  if ( !v21 )
    goto LABEL_39;
  while ( 2 )
  {
    v23 = *(_QWORD *)(v21 + 16);
    v21 = *(_QWORD *)(v21 + 8);
    v24 = *(_QWORD **)(v22 + 16);
    v22 = *(_QWORD *)(v22 + 8);
    if ( !*v24 )
      ATL::AtlThrowImpl(-2147467259);
    if ( *(_DWORD *)(v23 + 40) != 2 )
    {
LABEL_38:
      if ( !v21 )
        goto LABEL_39;
      continue;
    }
    break;
  }
  v25 = *(_QWORD **)(*(_QWORD *)(v23 + 32) + 40LL);
  v36 = v25;
  if ( v25 )
    (*(void (__fastcall **)(_QWORD *))(*v25 + 8LL))(v25);
  v38 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD *, GUID *, struct ISpatialAudioProcessBlockRT **))*v25)(
         v25,
         &GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065,
         &v38) < 0 )
  {
    if ( v38 )
      (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v38 + 16LL))(v38);
    (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
    goto LABEL_38;
  }
  v36 = 0LL;
  v20 = v25;
  v35 = (struct ISpatialAudioProcessBlockRT *)v25;
  if ( v38 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v25 )
  {
    v29 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, struct ISpatialAudioProcessBlockRT **))*v25)(
            v25,
            &GUID_b8bb0d7d_75ea_4359_abdf_d256f849d065,
            &v33);
    ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(&v35);
    if ( v29 >= 0 )
    {
      v38 = 0LL;
      v4 = (*(__int64 (__fastcall **)(struct ISpatialAudioProcessBlockRT *, struct ISpatialAudioProcessBlockRT **))(*(_QWORD *)v33 + 24LL))(
             v33,
             &v38);
      if ( v4 >= 0 )
        v4 = CAudioDeviceGraph::DoSpatialAudioProcessBlockRegistration(v30, v38, v40, v19);
      if ( v38 )
      {
        v31 = *(_QWORD *)v38;
        goto LABEL_72;
      }
    }
    goto LABEL_40;
  }
LABEL_39:
  if ( v20 )
  {
    v31 = *v20;
LABEL_72:
    (*(void (**)(void))(v31 + 16))();
  }
LABEL_40:
  if ( v33 )
    (*(void (__fastcall **)(struct ISpatialAudioProcessBlockRT *))(*(_QWORD *)v33 + 16LL))(v33);
LABEL_42:
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v4 < 0 )
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::RegisterSpatialPipe", 0x579u, v4);
LABEL_46:
  if ( v40 )
    (*(void (__fastcall **)(struct IAdaptiveSpatialAudioRenderer *))(*(_QWORD *)v40 + 16LL))(v40);
  return (unsigned int)v4;
}
