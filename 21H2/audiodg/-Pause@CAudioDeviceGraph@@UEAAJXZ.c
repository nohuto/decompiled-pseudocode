/*
 * XREFs of ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x140004790
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@DurationTracker@CAudioDeviceGraph@@QEAA?AUDurationInformation@2@XZ @ 0x1400046F0 (-Stop@DurationTracker@CAudioDeviceGraph@@QEAA-AUDurationInformation@2@XZ.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400053BC (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B400 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14003ECA8 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAudioDeviceGraph::Pause(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v8; // [rsp+28h] [rbp-49h]
  int v9; // [rsp+38h] [rbp-39h] BYREF
  __int64 v10; // [rsp+40h] [rbp-31h] BYREF
  __int64 v11; // [rsp+48h] [rbp-29h] BYREF
  int v12; // [rsp+50h] [rbp-21h] BYREF
  __int64 v13; // [rsp+58h] [rbp-19h]
  __int64 v14; // [rsp+60h] [rbp-11h]
  _BYTE v15[32]; // [rsp+68h] [rbp-9h] BYREF
  int *v16; // [rsp+88h] [rbp+17h]
  int v17; // [rsp+90h] [rbp+1Fh]
  int v18; // [rsp+94h] [rbp+23h]
  __int64 *v19; // [rsp+98h] [rbp+27h]
  int v20; // [rsp+A0h] [rbp+2Fh]
  int v21; // [rsp+A4h] [rbp+33h]
  __int64 *v22; // [rsp+A8h] [rbp+37h]
  int v23; // [rsp+B0h] [rbp+3Fh]
  int v24; // [rsp+B4h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x387,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v3,
      v8);
  }
  else
  {
    CAudioDeviceGraph::DurationTracker::Stop((__int64)this + 80, (__int64)&v12);
    v6 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                       v5,
                       _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                   + 8);
    if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
    {
      v24 = 0;
      v21 = 0;
      v18 = 0;
      v10 = v14;
      v11 = v13;
      v9 = v12;
      v22 = &v10;
      v19 = &v11;
      v16 = &v9;
      v23 = 8;
      v20 = 8;
      v17 = 4;
      tlgWriteTransfer_EtwEventWriteTransfer(v6, (unsigned int)&unk_14007C312, (_DWORD)this + 352, 0, 5, (__int64)v15);
    }
    v4 = 0;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v4;
}
