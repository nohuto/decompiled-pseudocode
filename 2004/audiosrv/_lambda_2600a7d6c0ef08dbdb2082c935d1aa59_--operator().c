/*
 * XREFs of _lambda_2600a7d6c0ef08dbdb2082c935d1aa59_::operator() @ 0x180003318
 * Callers:
 *     ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x180003444 (-TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x1800088A8 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x18006A580 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_2600a7d6c0ef08dbdb2082c935d1aa59_::operator()(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r10
  int *v4; // rax
  int v5; // edx
  void **v6; // rax
  _WORD *v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rcx
  _DWORD v11[2]; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v12[2]; // [rsp+38h] [rbp-11h] BYREF
  __int64 v13; // [rsp+40h] [rbp-9h]
  unsigned __int16 *v14; // [rsp+50h] [rbp+7h]
  int v15; // [rsp+58h] [rbp+Fh]
  int v16; // [rsp+5Ch] [rbp+13h]
  void *v17; // [rsp+60h] [rbp+17h]
  int v18; // [rsp+68h] [rbp+1Fh]
  int v19; // [rsp+6Ch] [rbp+23h]
  _WORD *v20; // [rsp+70h] [rbp+27h]
  int v21; // [rsp+78h] [rbp+2Fh]
  int v22; // [rsp+7Ch] [rbp+33h]
  _DWORD *v23; // [rsp+80h] [rbp+37h]
  __int64 v24; // [rsp+88h] [rbp+3Fh]

  result = wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
             a1,
             _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  v3 = *(_QWORD *)(result + 8);
  if ( *(_DWORD *)v3 > 4u )
  {
    v4 = *(int **)(a1 + 8);
    v24 = 4LL;
    v5 = *v4;
    v23 = v11;
    v6 = *(void ***)a1;
    v11[0] = v5;
    v7 = *v6;
    if ( *v6 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( v7[v8] );
      v9 = 2 * v8 + 2;
    }
    else
    {
      v7 = &unk_18015D734;
      v9 = 2;
    }
    v12[1] = 4;
    v14 = *(unsigned __int16 **)(v3 + 8);
    v20 = v7;
    v21 = v9;
    v22 = 0;
    v12[0] = 184549376;
    v13 = 0LL;
    v15 = *v14;
    v17 = &unk_180167B77;
    v16 = 2;
    v10 = *(_QWORD *)(v3 + 32);
    v18 = 64;
    v19 = 1;
    v11[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    return EtwEventWriteTransfer(v10, v12, 0LL);
  }
  return result;
}
