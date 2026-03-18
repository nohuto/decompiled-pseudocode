/*
 * XREFs of FxLibraryCommonRegisterClient @ 0x1C0041A64
 * Callers:
 *     LibraryRegisterClient @ 0x1C002E0E0 (LibraryRegisterClient.c)
 * Callees:
 *     memmove @ 0x1C001D440 (memmove.c)
 *     ?IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z @ 0x1C00415B4 (-IsClientInfoValid@@YAEPEAU_CLIENT_INFO@@@Z.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x1C00415E4 (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     GetEnhancedVerifierOptions @ 0x1C0041F28 (GetEnhancedVerifierOptions.c)
 *     McGenEventRegister_EtwRegister @ 0x1C0042338 (McGenEventRegister_EtwRegister.c)
 *     FxAllocateDriverGlobals @ 0x1C0056BB4 (FxAllocateDriverGlobals.c)
 *     LockVerifierSection @ 0x1C00587A0 (LockVerifierSection.c)
 *     GetNameFromPath @ 0x1C0060BB0 (GetNameFromPath.c)
 */

__int64 __fastcall FxLibraryCommonRegisterClient(
        _WDF_BIND_INFO *Info,
        _WDF_DRIVER_GLOBALS **WdfDriverGlobals,
        _CLIENT_INFO *ClientInfo)
{
  unsigned int v6; // r14d
  unsigned int FuncCount; // ebx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // r8d
  unsigned __int8 v11; // r9
  _WDF_DRIVER_GLOBALS *DriverGlobals; // rax
  _FX_DRIVER_GLOBALS *DriverName; // rsi
  unsigned int *v14; // rbx
  __int64 v15; // rax
  void (__fastcall **FuncTable)(); // rcx
  _WDFFUNCTIONS *p_Functions; // rdx
  _WDFFUNCTIONS *v18; // rax
  void (__fastcall *v19)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdx
  const _GUID *v20; // rcx
  const char *v21; // r9
  _UNICODE_STRING serviceName; // [rsp+30h] [rbp-28h] BYREF

  serviceName = 0LL;
  v6 = -1073741811;
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: enter\n");
  }
  if ( !Info || !WdfDriverGlobals || !Info->FuncTable )
  {
    if ( !WdfLdrDbgPrintOn )
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
    goto $Done_18;
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
    goto $Done_18;
  }
  if ( FuncCount > 0x1C6 )
  {
    if ( !FxLibraryGlobals.AllowBindToPreReleaseVersion )
    {
      DbgPrintEx(0x65u, 0, "LibraryRegisterClient: The driver was built for a pre-released WDF version.\n");
      goto $Done_18;
    }
    if ( FuncCount != 458 )
    {
      if ( IsClientInfoValid(ClientInfo) )
      {
        GetNameFromPath(ClientInfo->RegistryPath, &serviceName);
      }
      else
      {
        RtlInitUnicodeString(&serviceName, L"Unknown");
        FuncCount = Info->FuncCount;
      }
      ReportDdiFunctionCountMismatch(&serviceName, FuncCount, v10, v11);
      goto $Done_18;
    }
  }
  else
  {
    v8 = FuncCount - 383;
    if ( (unsigned int)v8 > 0x3F || (v9 = 0xA082000000002019uLL, !_bittest64((const __int64 *)&v9, v8)) )
    {
      if ( FuncCount != 448 && FuncCount != 451 && FuncCount < 0x1C5 )
      {
        DbgPrintEx(
          0x65u,
          0,
          "LibraryRegisterClient: Function table count 0x%x doesn't match any previously released framework version table size\n",
          FuncCount);
        goto $Done_18;
      }
    }
  }
  DriverGlobals = FxAllocateDriverGlobals();
  *WdfDriverGlobals = DriverGlobals;
  if ( DriverGlobals )
  {
    DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
    v14 = (unsigned int *)&DriverGlobals[-1].DriverName[12];
    GetEnhancedVerifierOptions(ClientInfo, v14);
    if ( (unsigned __int16)*v14 || (*v14 & 0xF00000) != 0 )
    {
      if ( WdfLdrDbgPrintOn )
      {
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "LibraryRegisterClient: Enhanced Verification is ON \n");
      }
      LockVerifierSection(DriverName, ClientInfo->RegistryPath);
      if ( !KMDF_PERF_PROVIDER_Context.RegistrationHandle )
        McGenEventRegister_EtwRegister(
          v20,
          v19,
          &KMDF_PERF_PROVIDER_Context,
          &KMDF_PERF_PROVIDER_Context.RegistrationHandle);
      v15 = Info->FuncCount;
      FuncTable = Info->FuncTable;
      if ( (unsigned int)v15 <= 0x1B6 )
      {
        p_Functions = &VfWdfVersion.Functions;
        goto LABEL_34;
      }
      v18 = &VfWdfVersion.Functions;
    }
    else
    {
      v15 = Info->FuncCount;
      FuncTable = Info->FuncTable;
      if ( (unsigned int)v15 <= 0x1B6 )
      {
        p_Functions = &WdfVersion.Functions;
LABEL_34:
        memmove(FuncTable, p_Functions, 8 * v15);
LABEL_37:
        v6 = 0;
        if ( !WdfLdrDbgPrintOn )
          return v6;
        DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
        DbgPrintEx(0x65u, 0, "LibraryRegisterClient: WdfFunctions %p\n", Info->FuncTable);
        goto $Done_18;
      }
      v18 = &WdfVersion.Functions;
    }
    *FuncTable = (void (__fastcall *)())v18;
    goto LABEL_37;
  }
$Done_18:
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryRegisterClient: exit: status %X\n", v6);
  }
  return v6;
}
