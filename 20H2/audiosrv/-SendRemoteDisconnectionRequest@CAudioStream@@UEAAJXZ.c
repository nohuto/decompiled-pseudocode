/*
 * XREFs of ?SendRemoteDisconnectionRequest@CAudioStream@@UEAAJXZ @ 0x1800D2700
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008418 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180052318 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SendRemoteDisconnectionRequest(CAudioStream *this)
{
  _DWORD *v2; // rdi
  int v3; // eax
  __int64 v4; // rcx
  bool v5; // al
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  int MediaEvent; // eax
  unsigned int v10; // ebx
  int v12; // [rsp+38h] [rbp-59h] BYREF
  __int64 v13; // [rsp+40h] [rbp-51h] BYREF
  _DWORD v14[12]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v15; // [rsp+78h] [rbp-19h]
  __int16 v16; // [rsp+90h] [rbp-1h]
  _BYTE v17[32]; // [rsp+98h] [rbp+7h] BYREF
  __int64 *v18; // [rsp+B8h] [rbp+27h]
  __int64 v19; // [rsp+C0h] [rbp+2Fh]
  int *v20; // [rsp+C8h] [rbp+37h]
  __int64 v21; // [rsp+D0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v2 = (_DWORD *)*((_QWORD *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                               (__int64)this,
                               _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                 + 1);
  if ( *v2 > 4u )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 40LL))(*((_QWORD *)this + 9));
    v21 = 4LL;
    v12 = v3;
    v13 = *((_QWORD *)this + 40);
    v19 = 8LL;
    v20 = &v12;
    v18 = &v13;
    tlgWriteTransfer_EtwEventWriteTransfer((__int64)v2, byte_180166C07, 0LL, 0LL, 4, (__int64)v17);
  }
  v4 = *((_QWORD *)this + 9);
  v5 = *((_BYTE *)this + 120) != 0;
  v14[0] = 80;
  *((_BYTE *)this + 424) = v5;
  v15 = *((_QWORD *)this + 40);
  v14[6] = 2;
  v14[1] = 0x8000;
  v16 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 40LL))(v4);
  MediaEvent = GenerateMediaEvent(v14, v6, v7, v8);
  v10 = MediaEvent;
  if ( MediaEvent >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x59B,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)MediaEvent);
  return v10;
}
