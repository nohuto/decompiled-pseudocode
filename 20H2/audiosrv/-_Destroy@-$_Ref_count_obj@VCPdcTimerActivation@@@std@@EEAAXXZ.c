/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x180008230
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     memmove_0 @ 0x18007419B (memmove_0.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall std::_Ref_count_obj<CPdcTimerActivation>::_Destroy(_QWORD *a1)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  int v4; // eax
  char *v5; // r8
  char *v6; // rcx
  __int64 v7; // rax
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // r10
  __int64 v11; // r8
  __int64 v12; // rcx
  int v13; // edx
  int v15; // [rsp+30h] [rbp-69h] BYREF
  int v16; // [rsp+34h] [rbp-65h] BYREF
  char *v17; // [rsp+38h] [rbp-61h]
  __int64 v18; // [rsp+40h] [rbp-59h] BYREF
  __int64 v19; // [rsp+48h] [rbp-51h] BYREF
  _DWORD v20[2]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v21; // [rsp+58h] [rbp-41h]
  char *v22; // [rsp+60h] [rbp-39h]
  char *v23; // [rsp+68h] [rbp-31h]
  unsigned __int16 *v24; // [rsp+70h] [rbp-29h]
  int v25; // [rsp+78h] [rbp-21h]
  int v26; // [rsp+7Ch] [rbp-1Dh]
  void *v27; // [rsp+80h] [rbp-19h]
  int v28; // [rsp+88h] [rbp-11h]
  int v29; // [rsp+8Ch] [rbp-Dh]
  __int64 *v30; // [rsp+90h] [rbp-9h]
  __int64 v31; // [rsp+98h] [rbp-1h]
  int *v32; // [rsp+A0h] [rbp+7h]
  __int64 v33; // [rsp+A8h] [rbp+Fh]
  __int64 *v34; // [rsp+B0h] [rbp+17h]
  __int64 v35; // [rsp+B8h] [rbp+1Fh]
  int *v36; // [rsp+C0h] [rbp+27h]
  __int64 v37; // [rsp+C8h] [rbp+2Fh]

  v2 = a1[4];
  v3 = a1[3];
  v4 = _Mtx_lock((_Mtx_t)(v3 + 32));
  if ( v4 )
  {
    std::_Throw_C_error(v4);
    goto LABEL_12;
  }
  v5 = *(char **)(v3 + 16);
  v17 = v5;
  v6 = *(char **)(v3 + 8);
  v22 = v6;
  if ( v6 != v5 )
  {
    while ( *(_QWORD *)v6 != v2 )
    {
LABEL_12:
      v6 += 8;
      if ( v6 == v5 )
        break;
    }
  }
  v23 = v5;
  if ( v6 != v5 )
  {
    memmove_0(v6, v6 + 8, v5 - (v6 + 8));
    *(_QWORD *)(v3 + 16) -= 8LL;
  }
  LODWORD(v7) = _Mtx_unlock((_Mtx_t)(v3 + 32));
  if ( (_DWORD)v7 )
  {
    std::_Throw_C_error(v7);
    JUMPOUT(0x18007F7D2LL);
  }
  if ( a1[2] )
  {
    v8 = Pdcv2ActivationClientDeactivate();
    a1[2] = 0LL;
    v7 = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
           v9,
           _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    v10 = *(_QWORD *)(v7 + 8);
    if ( *(_DWORD *)v10 > 4u )
    {
      v11 = a1[4];
      v12 = *(_QWORD *)(v11 + 544);
      v13 = *(_DWORD *)(v11 + 64);
      v15 = v8;
      v18 = v12;
      v16 = v13;
      v19 = v11;
      v36 = &v15;
      v37 = 4LL;
      v34 = &v18;
      v35 = 8LL;
      v32 = &v16;
      v33 = 4LL;
      v30 = &v19;
      v31 = 8LL;
      v20[0] = 184549376;
      v20[1] = 4;
      v21 = 0LL;
      v24 = *(unsigned __int16 **)(v10 + 8);
      v25 = *v24;
      v26 = 2;
      v27 = &unk_180168ADB;
      v28 = 76;
      v29 = 1;
      LODWORD(v17) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      LODWORD(v7) = EtwEventWriteTransfer(*(_QWORD *)(v10 + 32), v20, 0LL);
    }
  }
  return v7;
}
