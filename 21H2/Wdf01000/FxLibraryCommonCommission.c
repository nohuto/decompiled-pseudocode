/*
 * XREFs of FxLibraryCommonCommission @ 0x1C002E7B8
 * Callers:
 *     LibraryCommission @ 0x1C002E260 (LibraryCommission.c)
 * Callees:
 *     FxLibraryGlobalsCommission @ 0x1C002E278 (FxLibraryGlobalsCommission.c)
 *     ?GetTriageInfo@@YAXXZ @ 0x1C002EF78 (-GetTriageInfo@@YAXXZ.c)
 *     ?FxTraceInitialize@@YAJXZ @ 0x1C002F0CC (-FxTraceInitialize@@YAJXZ.c)
 *     RegisterTelemetryProvider @ 0x1C002F140 (RegisterTelemetryProvider.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxLibraryCommonCommission()
{
  NTSTATUS v0; // ebx
  void (__fastcall *SystemRoutineAddress)(_OSVERSIONINFOW *); // rax
  _UNICODE_STRING usName; // [rsp+30h] [rbp-48h] BYREF
  wchar_t usName_buffer[16]; // [rsp+40h] [rbp-38h] BYREF

  wcscpy(usName_buffer, L"RtlGetVersion");
  usName.Buffer = usName_buffer;
  *(_QWORD *)&usName.Length = 1835034LL;
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryCommission\n");
  }
  v0 = FxLibraryGlobalsCommission();
  if ( v0 < 0 )
  {
    if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "FxLibraryGlobalsCommission failed %X\n", v0);
    }
    return (unsigned int)v0;
  }
  else
  {
    RegisterTelemetryProvider();
    if ( FxTraceInitialize() < 0 )
    {
      if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      {
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "Failed to initialize tracing for WDF\n");
      }
    }
    else
    {
      FxLibraryGlobals.InternalTracingInitialized = 1;
    }
    SystemRoutineAddress = (void (__fastcall *)(_OSVERSIONINFOW *))MmGetSystemRoutineAddress(&usName);
    if ( SystemRoutineAddress )
      SystemRoutineAddress(&gOsVersion);
    if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "OsVersion(%d.%d)\n", gOsVersion.dwMajorVersion, gOsVersion.dwMinorVersion);
    }
    GetTriageInfo();
    return 0LL;
  }
}
