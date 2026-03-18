/*
 * XREFs of FxLibraryCommonRegisterClient @ 0x1C0028820
 * Callers:
 *     LibraryRegisterClient @ 0x1C0028570 (LibraryRegisterClient.c)
 * Callees:
 *     GetNameFromPath @ 0x1C00275B8 (GetNameFromPath.c)
 *     FxAllocateDriverGlobals @ 0x1C002861C (FxAllocateDriverGlobals.c)
 *     GetEnhancedVerifierOptions @ 0x1C0028C04 (GetEnhancedVerifierOptions.c)
 *     memmove @ 0x1C0036E00 (memmove.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C005FDF8 (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     McGenEventRegister_EtwRegister @ 0x1C00603C8 (McGenEventRegister_EtwRegister.c)
 *     LockVerifierSection @ 0x1C006C0F8 (LockVerifierSection.c)
 */

__int64 __fastcall FxLibraryCommonRegisterClient(
        _WDF_BIND_INFO *Info,
        _WDF_DRIVER_GLOBALS **WdfDriverGlobals,
        _CLIENT_INFO *ClientInfo)
{
  unsigned int v6; // ebp
  unsigned int FuncCount; // r9d
  _WDF_DRIVER_GLOBALS *DriverGlobals; // rax
  _FX_DRIVER_GLOBALS *v9; // rsi
  __int64 v10; // rax
  void (__fastcall **FuncTable)(); // rcx
  _WDFFUNCTIONS *p_Functions; // rax
  bool v14; // zf
  _WDFFUNCTIONS *v15; // rdx
  void (__fastcall *v16)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  const _GUID *v17; // rcx
  _UNICODE_STRING *RegistryPath; // rcx
  unsigned int v19; // r8d
  unsigned __int8 v20; // r9
  const char *v21; // r9
  _UNICODE_STRING serviceName; // [rsp+30h] [rbp-28h] BYREF

  v6 = -1073741811;
  serviceName = 0LL;
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: enter\n");
  }
  if ( !Info || !WdfDriverGlobals || !Info->FuncTable )
  {
    if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
      return v6;
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    if ( Info )
    {
      if ( WdfDriverGlobals )
      {
        v21 = "PWDF_BIND_INFO->FuncTable";
        if ( Info->FuncTable )
          v21 = "unknown";
      }
      else
      {
        v21 = "PWDF_DRIVER_GLOBALS *";
      }
    }
    else
    {
      v21 = "PWDF_BIND_INFO";
    }
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: NULL parameter -- %s\n", v21);
    goto LABEL_63;
  }
  *WdfDriverGlobals = 0LL;
  FuncCount = Info->FuncCount;
  if ( FuncCount > WdfVersion.FuncCount )
  {
    DbgPrintEx(
      0x65u,
      0,
      "LibraryRegisterClient: version mismatch detected in function table count: clienthas 0x%x,  library has 0x%x\n",
      FuncCount,
      WdfVersion.FuncCount);
    goto LABEL_63;
  }
  if ( FuncCount > 0x1CA )
  {
    if ( FxLibraryGlobals.AllowBindToPreReleaseVersion )
    {
      if ( ClientInfo
        && ClientInfo->Size == 24
        && ClientInfo->DriverObject
        && (RegistryPath = ClientInfo->RegistryPath) != 0LL
        && RegistryPath->Length
        && RegistryPath->Buffer )
      {
        GetNameFromPath(RegistryPath, &serviceName);
      }
      else
      {
        RtlInitUnicodeString(&serviceName, L"Unknown");
      }
      ReportDdiFunctionCountMismatch(&serviceName, Info->FuncCount, v19, v20);
    }
    else
    {
      DbgPrintEx(0x65u, 0, "LibraryRegisterClient: The driver was built for a pre-released WDF version.\n");
    }
    goto LABEL_63;
  }
  if ( FuncCount <= 0x1BC )
  {
    if ( FuncCount == 444 || FuncCount == 383 )
      goto LABEL_10;
    if ( FuncCount > 0x181 )
    {
      if ( FuncCount <= 0x183 || FuncCount == 396 || FuncCount == 432 )
        goto LABEL_10;
      v14 = FuncCount == 438;
      goto LABEL_30;
    }
LABEL_35:
    DbgPrintEx(
      0x65u,
      0,
      "LibraryRegisterClient: Function table count 0x%x doesn't match any previously released framework version table size\n",
      FuncCount);
    goto LABEL_63;
  }
  if ( FuncCount == 451 || FuncCount == 446 || FuncCount == 448 )
    goto LABEL_10;
  if ( FuncCount <= 0x1C4 )
    goto LABEL_35;
  if ( FuncCount <= 0x1C6 )
    goto LABEL_10;
  v14 = FuncCount == 458;
LABEL_30:
  if ( !v14 )
    goto LABEL_35;
LABEL_10:
  DriverGlobals = FxAllocateDriverGlobals();
  *WdfDriverGlobals = DriverGlobals;
  if ( !DriverGlobals )
    goto LABEL_63;
  v9 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  *(_QWORD *)DriverGlobals[-7].DriverName = ClientInfo->DriverObject;
  GetEnhancedVerifierOptions((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8]);
  if ( (unsigned __int16)v9->FxEnhancedVerifierOptions || (v9->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
    {
      DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
      DbgPrintEx(0x65u, 0, "LibraryRegisterClient: Enhanced Verification is ON \n");
    }
    LockVerifierSection(v9, ClientInfo->RegistryPath);
    if ( !KMDF_PERF_PROVIDER_Context.RegistrationHandle )
      McGenEventRegister_EtwRegister(
        v17,
        v16,
        &KMDF_PERF_PROVIDER_Context,
        &KMDF_PERF_PROVIDER_Context.RegistrationHandle);
    v10 = Info->FuncCount;
    FuncTable = Info->FuncTable;
    if ( (unsigned int)v10 > 0x1B6 )
    {
      p_Functions = &VfWdfVersion.Functions;
      goto LABEL_15;
    }
    v15 = &VfWdfVersion.Functions;
LABEL_33:
    memmove(FuncTable, v15, 8 * v10);
    goto LABEL_16;
  }
  v10 = Info->FuncCount;
  FuncTable = Info->FuncTable;
  if ( (unsigned int)v10 <= 0x1B6 )
  {
    v15 = &WdfVersion.Functions;
    goto LABEL_33;
  }
  p_Functions = &WdfVersion.Functions;
LABEL_15:
  *FuncTable = (void (__fastcall *)())p_Functions;
LABEL_16:
  v6 = 0;
  if ( !LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
    return v6;
  DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
  DbgPrintEx(0x65u, 0, "LibraryRegisterClient: WdfFunctions %p\n", Info->FuncTable);
LABEL_63:
  if ( LODWORD(WPP_GLOBAL_WDF_Control.DeviceExtension) )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: exit: status %X\n", v6);
  }
  return v6;
}
