/*
 * XREFs of _LdrpGetProcApphelpCheckModule@4 @ 0x4B331AA6
 * Callers:
 *     _LdrpDynamicShimModule@4 @ 0x4B2D234A (_LdrpDynamicShimModule@4.c)
 * Callees:
 *     _LdrpGetShimEngineInterface@0 @ 0x4B2A6828 (_LdrpGetShimEngineInterface@0.c)
 *     _LdrpLoadDll@16 @ 0x4B2A6B05 (_LdrpLoadDll@16.c)
 *     _LdrpBuildSystem32FileName@8 @ 0x4B2A6BD1 (_LdrpBuildSystem32FileName@8.c)
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _LdrpInitializeDllPath@12 @ 0x4B2CE876 (_LdrpInitializeDllPath@12.c)
 *     _RtlReleasePath@4 @ 0x4B2DE7B0 (_RtlReleasePath@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int __thiscall LdrpGetProcApphelpCheckModule(int *this)
{
  int v2; // esi
  int ShimEngineInterface; // esi
  char v4; // al
  int v5; // eax
  int v7; // [esp+Ch] [ebp-16Ch] BYREF
  _WORD v8[2]; // [esp+10h] [ebp-168h] BYREF
  const wchar_t *v9; // [esp+14h] [ebp-164h]
  PWSTR Path[19]; // [esp+18h] [ebp-160h] BYREF
  char v11; // [esp+64h] [ebp-114h]
  _UNICODE_STRING v12; // [esp+68h] [ebp-110h] BYREF
  _WORD v13[130]; // [esp+70h] [ebp-108h] BYREF

  v8[0] = 22;
  v8[1] = 24;
  v12.Buffer = v13;
  v9 = L"apphelp.dll";
  *(_DWORD *)&v12.Length = 0x1000000;
  v13[0] = 0;
  if ( g_pfnApphelpCheckModuleProc )
  {
    v2 = MEMORY[0x7FFE0330] ^ __ROR4__(g_pfnApphelpCheckModuleProc, 32 - (MEMORY[0x7FFE0330] & 0x1F));
    *this = v2;
    if ( v2 )
      return 0;
    else
      return -1073741823;
  }
  ShimEngineInterface = LdrpBuildSystem32FileName(&v12, (int)v8);
  if ( ShimEngineInterface >= 0 )
  {
    LdrpInitializeDllPath(0, 16385, (int *)Path);
    ShimEngineInterface = LdrpLoadDll(&v12, 0, (int)&v7);
    if ( v11 )
      RtlReleasePath(Path[0]);
    if ( ShimEngineInterface < 0 )
    {
      v4 = ShowSnaps;
      if ( (ShowSnaps & 3) == 0 )
        goto LABEL_12;
      LdrpLogDbgPrint(
        (int)"minkernel\\ntdll\\ldrinit.c",
        2899,
        (int)"LdrpGetProcApphelpCheckModule",
        0,
        "Loading the shim engine DLL \"%wZ\" failed with status 0x%08lx\n",
        &v12,
        ShimEngineInterface);
      goto LABEL_11;
    }
    *(_DWORD *)(v7 + 52) |= 0x100u;
    g_pShimEngineModule = *(PVOID *)(v7 + 24);
    ShimEngineInterface = LdrpGetShimEngineInterface();
    if ( ShimEngineInterface < 0 )
    {
      v4 = ShowSnaps;
      if ( (ShowSnaps & 3) == 0 )
      {
LABEL_12:
        if ( (v4 & 0x10) != 0 )
          __debugbreak();
        goto LABEL_20;
      }
      LdrpLogDbgPrint(
        (int)"minkernel\\ntdll\\ldrinit.c",
        2910,
        (int)"LdrpGetProcApphelpCheckModule",
        0,
        "Getting the shim engine exports failed with status 0x%08lx\n",
        ShimEngineInterface);
LABEL_11:
      v4 = ShowSnaps;
      goto LABEL_12;
    }
    v5 = MEMORY[0x7FFE0330] ^ __ROR4__(g_pfnApphelpCheckModuleProc, 32 - (MEMORY[0x7FFE0330] & 0x1F));
    *this = v5;
    if ( v5 )
      ShimEngineInterface = 0;
    else
      ShimEngineInterface = -1073741823;
  }
LABEL_20:
  if ( v13 != v12.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v12.Buffer);
  return ShimEngineInterface;
}
