/*
 * XREFs of _LdrpGetShimEngineInterface@0 @ 0x4B2A6828
 * Callers:
 *     _LdrpInitShimEngine@4 @ 0x4B2A63CD (_LdrpInitShimEngine@4.c)
 *     _LdrInitShimEngineDynamic@8 @ 0x4B331380 (_LdrInitShimEngineDynamic@8.c)
 *     _LdrpGetProcApphelpCheckModule@4 @ 0x4B331AA6 (_LdrpGetProcApphelpCheckModule@4.c)
 * Callees:
 *     _LdrGetProcedureAddressEx@20 @ 0x4B2A6AE0 (_LdrGetProcedureAddressEx@20.c)
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 *     _RtlInitString@8 @ 0x4B2F4FA0 (_RtlInitString@8.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

NTSTATUS __stdcall LdrpGetShimEngineInterface()
{
  NTSTATUS v0; // esi
  char v2; // al
  _STRING DestinationString; // [esp+Ch] [ebp-34h] BYREF
  PVOID v4; // [esp+14h] [ebp-2Ch] BYREF
  PVOID v5; // [esp+18h] [ebp-28h] BYREF
  PVOID v6; // [esp+1Ch] [ebp-24h] BYREF
  PVOID v7; // [esp+20h] [ebp-20h] BYREF
  PVOID v8; // [esp+24h] [ebp-1Ch] BYREF
  PVOID v9; // [esp+28h] [ebp-18h] BYREF
  PVOID v10; // [esp+2Ch] [ebp-14h] BYREF
  PVOID v11; // [esp+30h] [ebp-10h] BYREF
  PVOID v12; // [esp+34h] [ebp-Ch] BYREF
  PVOID v13; // [esp+38h] [ebp-8h] BYREF
  PVOID ProcedureAddress; // [esp+3Ch] [ebp-4h] BYREF

  RtlInitString(&DestinationString, "SE_InitializeEngine");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &ProcedureAddress, 0);
  if ( v0 < 0 )
    goto LABEL_14;
  RtlInitString(&DestinationString, "SE_ShimDllLoaded");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v13, 0);
  if ( v0 < 0 )
    goto LABEL_14;
  RtlInitString(&DestinationString, "SE_InstallBeforeInit");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v12, 0);
  if ( v0 < 0 )
    goto LABEL_14;
  RtlInitString(&DestinationString, "SE_InstallAfterInit");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v11, 0);
  if ( v0 < 0 )
    goto LABEL_14;
  RtlInitString(&DestinationString, "SE_DllLoaded");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v10, 0);
  if ( v0 < 0 )
    goto LABEL_14;
  RtlInitString(&DestinationString, "SE_DllUnloaded");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v9, 0);
  if ( v0 < 0 )
    goto LABEL_14;
  RtlInitString(&DestinationString, "SE_LdrEntryRemoved");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v8, 0);
  if ( v0 < 0 )
    goto LABEL_14;
  RtlInitString(&DestinationString, "SE_ProcessDying");
  v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v7, 0);
  if ( v0 < 0
    || (RtlInitString(&DestinationString, "SE_LdrResolveDllName"),
        v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v5, 0),
        v0 < 0)
    || (RtlInitString(&DestinationString, "SE_GetProcAddressForCaller"),
        v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v6, 0),
        v0 < 0)
    || (RtlInitString(&DestinationString, "ApphelpCheckModule"),
        v0 = LdrGetProcedureAddressEx(g_pShimEngineModule, &DestinationString, 0, &v4, 0),
        v0 < 0) )
  {
LABEL_14:
    v2 = ShowSnaps;
    if ( (ShowSnaps & 3) != 0 )
    {
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrinit.c",
        2215,
        "LdrpGetShimEngineInterface",
        0,
        "Could not locate procedure \"%s\" in the shim engine DLL\n",
        DestinationString.Buffer);
      v2 = ShowSnaps;
    }
    if ( (v2 & 0x10) != 0 )
      __debugbreak();
    g_ShimsEnabled = 0;
    LdrUnloadDll(g_pShimEngineModule);
    g_pShimEngineModule = 0;
  }
  else
  {
    LdrProtectMrdata(0);
    g_pfnSE_InitializeEngine = __ROR4__((unsigned int)ProcedureAddress ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
    g_pfnSE_ShimDllLoaded = __ROR4__((unsigned int)v13 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
    g_pfnSE_InstallBeforeInit = __ROR4__((unsigned int)v12 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
    g_pfnSE_InstallAfterInit = __ROR4__((unsigned int)v11 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
    g_pfnSE_DllLoaded = __ROR4__((unsigned int)v10 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
    g_pfnSE_DllUnloaded = __ROR4__((unsigned int)v9 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
    g_pfnSE_LdrEntryRemoved = __ROR4__((unsigned int)v8 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
    g_pfnSE_ProcessDying = __ROR4__((unsigned int)v7 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
    g_pfnSE_GetProcAddressForCaller = __ROR4__((unsigned int)v6 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
    g_pfnSE_LdrResolveDllName = __ROR4__((unsigned int)v5 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
    g_pfnApphelpCheckModuleProc = __ROR4__((unsigned int)v4 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x1F);
    LdrProtectMrdata(1);
  }
  return v0;
}
