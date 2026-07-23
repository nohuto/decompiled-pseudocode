/*
 * XREFs of _LdrpInitShimEngine@4 @ 0x4B2A63CD
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 *     _LdrpGetShimEngineInterface@0 @ 0x4B2A6828 (_LdrpGetShimEngineInterface@0.c)
 *     _LdrpLoadDll@16 @ 0x4B2A6B05 (_LdrpLoadDll@16.c)
 *     _LdrpBuildSystem32FileName@8 @ 0x4B2A6BD1 (_LdrpBuildSystem32FileName@8.c)
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpInitializeDllPath@12 @ 0x4B2CE876 (_LdrpInitializeDllPath@12.c)
 *     _RtlReleasePath@4 @ 0x4B2DE7B0 (_RtlReleasePath@4.c)
 *     _LdrpPinModule@4 @ 0x4B2E7DC6 (_LdrpPinModule@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

void __thiscall LdrpInitShimEngine(void *this)
{
  int v2; // eax
  int v3; // esi
  int ShimEngineInterface; // eax
  int (__thiscall *v5)(_DWORD, int *, int, void *); // ecx
  char v6; // cl
  bool v7; // zf
  char v8; // al
  PVOID v9; // [esp+Ch] [ebp-374h] BYREF
  int v10; // [esp+10h] [ebp-370h] BYREF
  PVOID BaseAddress; // [esp+14h] [ebp-36Ch]
  _WORD v12[2]; // [esp+18h] [ebp-368h] BYREF
  const wchar_t *v13; // [esp+1Ch] [ebp-364h]
  PWSTR Path[19]; // [esp+20h] [ebp-360h] BYREF
  char v15; // [esp+6Ch] [ebp-314h]
  _UNICODE_STRING v16; // [esp+70h] [ebp-310h] BYREF
  _WORD v17[128]; // [esp+78h] [ebp-308h] BYREF
  _BYTE v18[516]; // [esp+178h] [ebp-208h] BYREF

  v12[0] = 22;
  v12[1] = 24;
  v13 = L"apphelp.dll";
  v16.Buffer = v17;
  *(_DWORD *)&v16.Length = 0x1000000;
  v17[0] = 0;
  v2 = LdrpBuildSystem32FileName(&v16, v12);
  if ( v2 < 0 )
  {
    v6 = ShowSnaps;
    if ( (ShowSnaps & 3) != 0 )
    {
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrinit.c",
        2613,
        "LdrpInitShimEngine",
        0,
        "Building shim engine DLL system32 filename failed with status 0x%08lx\n",
        v2);
LABEL_13:
      v6 = ShowSnaps;
    }
  }
  else
  {
    LdrpInitializeDllPath(Path);
    v3 = LdrpLoadDll(&v16, 0, &v9);
    if ( v15 )
      RtlReleasePath(Path[0]);
    if ( v3 < 0 )
    {
      v8 = ShowSnaps;
      if ( (ShowSnaps & 3) != 0 )
      {
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrinit.c",
          2632,
          "LdrpInitShimEngine",
          0,
          "Loading the shim engine DLL failed with status 0x%08lx\n",
          v3);
        v8 = ShowSnaps;
      }
      v7 = (v8 & 0x10) == 0;
      goto LABEL_16;
    }
    *((_DWORD *)v9 + 13) |= 0x100u;
    g_pShimEngineModule = (PVOID)*((_DWORD *)v9 + 6);
    LdrpPinModule();
    LdrpDereferenceModule(v9);
    ShimEngineInterface = LdrpGetShimEngineInterface();
    if ( ShimEngineInterface >= 0 )
    {
      BaseAddress = v18;
      v10 = 0x2000000;
      v5 = (int (__thiscall *)(_DWORD, int *, int, void *))(MEMORY[0x7FFE0330] ^ __ROR4__(
                                                                                   g_pfnSE_InitializeEngine,
                                                                                   32 - (MEMORY[0x7FFE0330] & 0x1F)));
      if ( v5(v5, &v10, LdrpImageEntry + 36, this) >= 0 )
      {
        LdrpLoadShimEngine((PCWSTR)BaseAddress);
        if ( BaseAddress != v18 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      }
      goto LABEL_9;
    }
    v6 = ShowSnaps;
    if ( (ShowSnaps & 3) != 0 )
    {
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrinit.c",
        2646,
        "LdrpInitShimEngine",
        0,
        "Getting the shim engine exports failed with status 0x%08lx\n",
        ShimEngineInterface);
      goto LABEL_13;
    }
  }
  v7 = (v6 & 0x10) == 0;
LABEL_16:
  if ( !v7 )
    __debugbreak();
LABEL_9:
  if ( v17 != v16.Buffer )
    RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)v16.Buffer);
}
