/*
 * XREFs of _lambda_1a6013364819a622eb1c78e19bf6fec0_::operator() @ 0x18000C288
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_1a6013364819a622eb1c78e19bf6fec0__long_IAudioSessionInfo___::_Do_call @ 0x18000DAB0 (std--_Func_impl_no_alloc__lambda_1a6013364819a622eb1c78e19bf6fec0__long_IAudioSessionInfo___--_D.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001090 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ @ 0x1800055CC (-Instance@AudioSrvPolicyManagerTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V?$shared_ptr@UIDuckingDescriptor@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVCPBMStreamClassVolumeGainStage@@$$QEAPEBU_GUID@@$$QEAV?$shared_ptr@UIDuckingDescriptor@@@std@@@Z @ 0x18000D298 (--$MakeAndInitialize@VCPBMStreamClassVolumeGainStage@@V1@PEBU_GUID@@V-$shared_ptr@UIDuckingDescr.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000EF90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCGainStage@@@Det.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000F8F4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_1a6013364819a622eb1c78e19bf6fec0_::operator()(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rdi
  _WORD *v5; // rax
  __int64 v6; // rcx
  int v7; // edx
  int v8; // eax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rax
  int v12; // esi
  volatile signed __int32 *v13; // rbx
  __int64 *v14; // rsi
  HANDLE ProcessHeap; // rax
  char *v16; // rax
  char *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  volatile signed __int32 *v21; // rbx
  __int64 v22; // rbx
  int v23; // eax
  ULONG v25; // [rsp+20h] [rbp-59h]
  __int64 v26; // [rsp+30h] [rbp-49h] BYREF
  __int64 v27; // [rsp+38h] [rbp-41h] BYREF
  __int64 v28; // [rsp+40h] [rbp-39h] BYREF
  volatile signed __int32 *v29; // [rsp+48h] [rbp-31h]
  char *v30; // [rsp+50h] [rbp-29h] BYREF
  volatile signed __int32 *v31; // [rsp+58h] [rbp-21h]
  void *v32; // [rsp+60h] [rbp-19h] BYREF
  void *v33; // [rsp+68h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+70h] [rbp-9h] BYREF
  _WORD *v35; // [rsp+90h] [rbp+17h]
  int v36; // [rsp+98h] [rbp+1Fh]
  int v37; // [rsp+9Ch] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = (_DWORD *)*((_QWORD *)AudioSrvPolicyManagerTelemetryProvider::Instance() + 1);
  if ( *v4 > 4u )
  {
    v5 = (_WORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
    if ( v5 )
    {
      v6 = -1LL;
      do
        ++v6;
      while ( v5[v6] );
      v7 = 2 * v6 + 2;
    }
    else
    {
      v5 = &unk_1800428B8;
      v7 = 2;
    }
    v35 = v5;
    v36 = v7;
    v37 = 0;
    tlgWriteTransfer_EventWriteTransfer((__int64)v4, (unsigned __int8 *)dword_180046221, 0LL, 0LL, 3u, &v34);
  }
  v27 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a2)(a2, &GUID_7597ca7a_c7f8_4aa5_823c_aff9d9aebd8c, &v27) < 0 )
    goto LABEL_48;
  v26 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 24LL))(v27);
  v9 = (_QWORD *)*a1;
  if ( !v8 )
  {
    v14 = (__int64 *)a1[1];
    ProcessHeap = GetProcessHeap();
    v16 = (char *)HeapAlloc(ProcessHeap, 0, 0x30uLL);
    v17 = v16;
    if ( v16 )
    {
      *((_DWORD *)v16 + 2) = 1;
      *((_DWORD *)v16 + 3) = 1;
      *(_QWORD *)v16 = &std::_Ref_count_obj<DeactivatableDuckingDescriptor>::`vftable';
      v18 = *v14;
      *((_QWORD *)v16 + 2) = &DeactivatableDuckingDescriptor::`vftable';
      *((_QWORD *)v16 + 3) = 0LL;
      *((_QWORD *)v16 + 4) = 0LL;
      v19 = v9[60];
      if ( v19 )
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
      *((_QWORD *)v17 + 3) = v9[59];
      *((_QWORD *)v17 + 4) = v9[60];
      *((_QWORD *)v17 + 5) = v18;
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
    }
    else
    {
      v17 = 0LL;
    }
    if ( v17 == (char *)-16LL )
    {
      v12 = -2147024882;
      v20 = 910LL;
    }
    else
    {
      v33 = &DuckingPolicyGuid;
      if ( v17 )
        _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
      v30 = v17 + 16;
      v31 = (volatile signed __int32 *)v17;
      v26 = 0LL;
      v12 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
              &v26,
              &v33,
              &v30);
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
        {
          v21 = v31;
          (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
          if ( _InterlockedExchangeAdd(v21 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
        }
      }
      if ( v12 >= 0 )
      {
        if ( v17 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v17 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(LPVOID))v17)(v17);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v17 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(char *))(*(_QWORD *)v17 + 8LL))(v17);
          }
        }
        goto LABEL_44;
      }
      v20 = 912LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v12);
    if ( v17 )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)v17 + 2) )
      {
        (**(void (__fastcall ***)(LPVOID))v17)(v17);
        if ( !_InterlockedDecrement((volatile signed __int32 *)v17 + 3) )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v17 + 8LL))(v17);
      }
    }
    goto LABEL_38;
  }
  v32 = &DuckingPolicyGuid;
  v10 = v9[57];
  v11 = (volatile signed __int32 *)v9[58];
  if ( v11 )
  {
    _InterlockedIncrement(v11 + 2);
    v11 = (volatile signed __int32 *)v9[58];
  }
  v28 = v10;
  v29 = v11;
  v26 = 0LL;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<CPBMStreamClassVolumeGainStage,CPBMStreamClassVolumeGainStage,_GUID const *,std::shared_ptr<IDuckingDescriptor>>(
          &v26,
          &v32,
          &v28);
  if ( v29 )
  {
    if ( _InterlockedExchangeAdd(v29 + 2, 0xFFFFFFFF) == 1 )
    {
      v13 = v29;
      (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
    }
  }
  if ( v12 >= 0 )
  {
LABEL_44:
    v22 = v26;
    v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 32LL))(v27, v26);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x393,
        (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
        (const char *)(unsigned int)v23,
        v25);
    if ( v22 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v22);
LABEL_48:
    v12 = 0;
    goto LABEL_49;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x383,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
    (const char *)(unsigned int)v12);
LABEL_38:
  if ( v26 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CGainStage>::Release(v26);
LABEL_49:
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  return (unsigned int)v12;
}
