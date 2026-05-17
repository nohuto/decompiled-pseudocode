/*
 * XREFs of LdrpFatalExceptionFilter @ 0x1800D54B0
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x180075740 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x1800780E0 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReportSilentProcessExit @ 0x18005F440 (RtlReportSilentProcessExit.c)
 *     NtQueryInformationProcess @ 0x18009D960 (NtQueryInformationProcess.c)
 *     ZwTerminateProcess @ 0x18009DBC0 (ZwTerminateProcess.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180100980 (RtlUnhandledExceptionFilter2.c)
 *     RtlRaiseStatus @ 0x1801026C0 (RtlRaiseStatus.c)
 */

__int64 __fastcall LdrpFatalExceptionFilter(_DWORD **a1)
{
  struct _TEB *v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // rsi
  NTSTATUS v5; // eax
  void (__fastcall *v6)(_DWORD **); // rsi
  int ProcessInformation; // [rsp+40h] [rbp+8h] BYREF

  v2 = NtCurrentTeb();
  if ( **a1 == -1073741571 && v2->NtTib.StackLimit > v2->DeallocationStack )
  {
    RtlReportSilentProcessExit(-1LL, -1073741571);
  }
  else
  {
    v3 = `RtlpGetCookieValue'::`2'::CookieValue;
    v4 = RtlpUnhandledExceptionFilter;
    if ( !`RtlpGetCookieValue'::`2'::CookieValue )
    {
      v5 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
      if ( v5 < 0 )
        RtlRaiseStatus((unsigned int)v5);
      v3 = ProcessInformation;
      `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
    }
    v6 = (void (__fastcall *)(_DWORD **))(v3 ^ __ROR8__(v4, 64 - (v3 & 0x3F)));
    if ( v6 )
      v6(a1);
    else
      RtlUnhandledExceptionFilter2(a1, &unk_18012277A);
  }
  ZwTerminateProcess();
  return 0LL;
}
