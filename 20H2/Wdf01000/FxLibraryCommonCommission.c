/*
 * XREFs of FxLibraryCommonCommission @ 0x1C0040E98
 * Callers:
 *     LibraryCommission @ 0x1C002D7D0 (LibraryCommission.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 *     ?FxTraceInitialize@@YAJXZ @ 0x1C0039208 (-FxTraceInitialize@@YAJXZ.c)
 *     ?GetTriageInfo@@YAXXZ @ 0x1C0040B90 (-GetTriageInfo@@YAXXZ.c)
 *     FxLibraryGlobalsCommission @ 0x1C00568A0 (FxLibraryGlobalsCommission.c)
 *     RegisterTelemetryProvider @ 0x1C005FC30 (RegisterTelemetryProvider.c)
 */

__int64 __fastcall FxLibraryCommonCommission()
{
  int v0; // ebx
  void (__fastcall *SystemRoutineAddress)(_OSVERSIONINFOW *); // rax
  _UNICODE_STRING usName; // [rsp+30h] [rbp-48h] BYREF
  wchar_t usName_buffer[16]; // [rsp+40h] [rbp-38h] BYREF

  wcscpy(usName_buffer, L"RtlGetVersion");
  usName.Buffer = usName_buffer;
  *(_QWORD *)&usName.Length = 1835034LL;
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryCommission\n");
  }
  v0 = FxLibraryGlobalsCommission();
  if ( v0 >= 0 )
  {
    RegisterTelemetryProvider();
    if ( (int)FxTraceInitialize() < 0 )
    {
      if ( WdfLdrDbgPrintOn )
      {
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "Failed to initialize tracing for WDF\n");
      }
    }
    else
    {
      unk_1C00A9F61 = 1;
    }
    SystemRoutineAddress = (void (__fastcall *)(_OSVERSIONINFOW *))MmGetSystemRoutineAddress(&usName);
    if ( SystemRoutineAddress )
      SystemRoutineAddress(&gOsVersion);
    if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "OsVersion(%d.%d)\n", gOsVersion.dwMajorVersion, gOsVersion.dwMinorVersion);
    }
    GetTriageInfo();
    return 0LL;
  }
  else
  {
    if ( WdfLdrDbgPrintOn )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "FxLibraryGlobalsCommission failed %X\n", v0);
    }
    return (unsigned int)v0;
  }
}
