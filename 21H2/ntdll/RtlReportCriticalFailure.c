/*
 * XREFs of RtlReportCriticalFailure @ 0x1800FF43C
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x18000A448 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18002F690 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlRunOnceExecuteOnce @ 0x180043830 (RtlRunOnceExecuteOnce.c)
 *     RtlRestoreThreadPreferredUILanguages @ 0x1800EF520 (RtlRestoreThreadPreferredUILanguages.c)
 *     RtlpReportHeapFailure @ 0x18010AFA8 (RtlpReportHeapFailure.c)
 * Callees:
 *     DbgPrintEx @ 0x180051450 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     RtlIsAnyDebuggerPresent @ 0x1800FF370 (RtlIsAnyDebuggerPresent.c)
 *     RtlReportFatalFailure @ 0x1800FF500 (RtlReportFatalFailure.c)
 */

__int64 __fastcall RtlReportCriticalFailure(int a1, __int64 a2, int a3)
{
  int v6; // ecx
  _DWORD v8[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+38h] [rbp-B0h]
  void (__stdcall *v10)(PEXCEPTION_RECORD); // [rsp+40h] [rbp-A8h]
  int v11; // [rsp+48h] [rbp-A0h]
  __int64 v12; // [rsp+50h] [rbp-98h]

  if ( RtlIsAnyDebuggerPresent() )
  {
    DbgPrintEx(0x65u, 0, "Critical error detected %lx\n", v6);
    if ( a3 )
      __debugbreak();
  }
  v8[0] = a1;
  v8[1] = 1;
  v9 = 0LL;
  v10 = RtlRaiseException;
  v11 = 1;
  v12 = a2;
  return RtlReportFatalFailure(v8);
}
