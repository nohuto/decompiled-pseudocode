/*
 * XREFs of ?Resume@CAudioDeviceGraph@@UEAAJXZ @ 0x1400014E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ @ 0x1400014B0 (-Start@DurationTracker@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400053EC (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14001B430 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x14003EB18 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAudioDeviceGraph::Resume(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-48h]
  _BYTE v9[32]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x39C,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v3,
      v8);
  }
  else
  {
    CAudioDeviceGraph::DurationTracker::Start((LARGE_INTEGER *)this + 10);
    v6 = *(_QWORD *)(wil::details::static_lazy<AudioDgTelemetryProvider>::get(
                       v5,
                       _lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_)
                   + 8);
    if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
      tlgWriteTransfer_EtwEventWriteTransfer(v6, (unsigned int)&unk_14007C519, (_DWORD)this + 352, 0, 2, (__int64)v9);
    v4 = 0;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v4;
}
