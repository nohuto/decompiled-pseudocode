/*
 * XREFs of _LdrLoadDll@16 @ 0x4B2CDD70
 * Callers:
 *     _LdrpCodeAuthzInitialize@0 @ 0x4B2E82F2 (_LdrpCodeAuthzInitialize@0.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _RtlWow64LogMessageInEventLogger@12 @ 0x4B335A80 (_RtlWow64LogMessageInEventLogger@12.c)
 *     _SbpResolveBasedOnName@4 @ 0x4B386048 (_SbpResolveBasedOnName@4.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpLoadDllInternal@32 @ 0x4B2CE104 (_LdrpLoadDllInternal@32.c)
 *     _LdrpInitializeDllPath@12 @ 0x4B2CE876 (_LdrpInitializeDllPath@12.c)
 *     _LdrpDllCharacteristicsToLoadFlags@4 @ 0x4B2CE8B0 (_LdrpDllCharacteristicsToLoadFlags@4.c)
 *     _RtlReleasePath@4 @ 0x4B2DE7B0 (_RtlReleasePath@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

NTSTATUS __cdecl LdrLoadDll(PWSTR DllPath, PULONG DllCharacteristics, PUNICODE_STRING DllName, PVOID *DllHandle)
{
  int Flags; // ebx
  NTSTATUS v5; // esi
  char *v6; // ecx
  int v8; // [esp+10h] [ebp-170h] BYREF
  int v9; // [esp+14h] [ebp-16Ch] BYREF
  PVOID BaseAddress; // [esp+18h] [ebp-168h] BYREF
  PVOID *v11; // [esp+1Ch] [ebp-164h]
  _UNICODE_STRING SystemPath; // [esp+20h] [ebp-160h] BYREF
  _WORD v13[128]; // [esp+28h] [ebp-158h] BYREF
  PWSTR Path[19]; // [esp+128h] [ebp-58h] BYREF
  char v15; // [esp+174h] [ebp-Ch]

  v11 = DllHandle;
  if ( DllCharacteristics )
    Flags = LdrpDllCharacteristicsToLoadFlags(*DllCharacteristics);
  else
    Flags = 0;
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrapi.c", 151, "LdrLoadDll", 3, "DLL name: %wZ\n", DllName);
  if ( (LdrpPolicyBits & 4) == 0 && ((unsigned __int16)DllPath & 0x401) == 0x401 )
    return -1073741811;
  if ( (Flags & 8) == 0 || (LdrpPolicyBits & 8) != 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x2000) != 0 )
    {
      v5 = -1073740004;
    }
    else
    {
      LdrpInitializeDllPath(Path);
      v8 = Flags;
      LdrpLogDllState(5288);
      *(_DWORD *)&SystemPath.Length = 0x1000000;
      SystemPath.Buffer = v13;
      v13[0] = 0;
      v9 = LdrpPreprocessDllName(DllName, &SystemPath, 0, &v8);
      if ( v9 >= 0 )
        LdrpLoadDllInternal(v8, 4, 0, 0, &BaseAddress, &v9);
      if ( v13 != SystemPath.Buffer )
        RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)SystemPath.Buffer);
      *(_DWORD *)&SystemPath.Length = 0x1000000;
      SystemPath.Buffer = v13;
      v13[0] = 0;
      LdrpLogDllState(5289);
      v5 = v9;
      if ( v15 )
        RtlReleasePath(Path[0]);
      if ( v5 >= 0 )
      {
        v6 = (char *)BaseAddress;
        *v11 = (PVOID)*((_DWORD *)BaseAddress + 6);
        LdrpDereferenceModule(v6);
      }
    }
  }
  else
  {
    if ( (ShowSnaps & 3) != 0 )
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrapi.c",
        172,
        "LdrLoadDll",
        0,
        "Nonpackaged process attempted to load a packaged DLL.\n");
    if ( (ShowSnaps & 0x10) != 0 )
      __debugbreak();
    v5 = -1073741398;
  }
  if ( (ShowSnaps & 9) != 0 )
    LdrpLogDbgPrint("minkernel\\ntdll\\ldrapi.c", 204, "LdrLoadDll", 4, "Status: 0x%08lx\n", v5);
  return v5;
}
