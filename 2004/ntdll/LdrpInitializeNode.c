/*
 * XREFs of LdrpInitializeNode @ 0x18006C014
 * Callers:
 *     LdrpLoadShimEngine @ 0x18006B7E4 (LdrpLoadShimEngine.c)
 *     LdrpInitializeGraphRecurse @ 0x18006BF38 (LdrpInitializeGraphRecurse.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     LdrpCallInitRoutine @ 0x1800199BC (LdrpCallInitRoutine.c)
 *     LdrpCallTlsInitializers @ 0x180019A78 (LdrpCallTlsInitializers.c)
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     ZwSetInformationVirtualMemory @ 0x1800A01C0 (ZwSetInformationVirtualMemory.c)
 *     LdrpLogDbgPrint @ 0x1800CDAE8 (LdrpLogDbgPrint.c)
 *     RtlReportException @ 0x1800DC950 (RtlReportException.c)
 */

__int64 __fastcall LdrpInitializeNode(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r8
  __int64 **v3; // rax
  __int64 *v4; // rdx
  unsigned int v5; // r15d
  __int64 i; // rsi
  __int64 v7; // rbx
  char v8; // r13
  __int64 v9; // r9
  char v10; // al
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64); // [rsp+48h] [rbp-100h]
  __int64 v13; // [rsp+68h] [rbp-E0h]
  __int64 v14; // [rsp+78h] [rbp-D0h]
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+C0h] [rbp-88h] BYREF
  int v17; // [rsp+C8h] [rbp-80h]
  __int128 v18; // [rsp+D0h] [rbp-78h]
  __int128 v19; // [rsp+E0h] [rbp-68h]
  __int128 v20; // [rsp+F0h] [rbp-58h]
  __int64 v21; // [rsp+100h] [rbp-48h]
  int VmInformation; // [rsp+168h] [rbp+20h] BYREF

  v1 = a1;
  v13 = a1;
  *(_DWORD *)(a1 + 56) = 8;
  v2 = LdrpImageEntry;
  v3 = (__int64 **)qword_18016A4F8;
  while ( 1 )
  {
    a1 = *(_QWORD *)(a1 + 8);
    if ( a1 == v1 )
      break;
    if ( a1 - 160 != v2 )
    {
      v4 = (__int64 *)(a1 - 160 + 32);
      if ( *v3 != &qword_18016A4F0 )
        __fastfail(3u);
      *v4 = (__int64)&qword_18016A4F0;
      *(_QWORD *)(a1 - 160 + 40) = v3;
      *v3 = v4;
      v3 = (__int64 **)(a1 - 160 + 32);
      qword_18016A4F8 = (__int64)v3;
    }
  }
  v5 = 0;
  for ( i = *(_QWORD *)(v1 + 8); i != v1; i = *(_QWORD *)(i + 8) )
  {
    v7 = i - 160;
    if ( i - 160 != v2 )
    {
      VmInformation = 1;
      VirtualAddresses.VirtualAddress = *(PVOID *)(v7 + 48);
      VirtualAddresses.NumberOfBytes = 4096LL;
      ZwSetInformationVirtualMemory(
        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
        VmImageHotPatchInformation,
        1uLL,
        &VirtualAddresses,
        &VmInformation,
        4u);
      v14 = LdrpCurrentDllInitializer;
      LdrpCurrentDllInitializer = i - 160;
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v7 + 56);
      if ( (LdrpDebugFlags & 5) != 0 )
        LdrpLogDbgPrint(
          (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
          976,
          (unsigned int)"LdrpInitializeNode",
          2,
          (__int64)"Calling init routine %p for DLL \"%wZ\"\n",
          *(_QWORD *)(v7 + 56),
          v7 + 72);
      v8 = 1;
      v16 = 72LL;
      v17 = 1;
      v18 = 0LL;
      v19 = 0LL;
      v20 = 0LL;
      v21 = 0LL;
      RtlActivateActivationContextUnsafeFast((__int64)&v16, *(_QWORD *)(v7 + 136));
      if ( *(_WORD *)(v7 + 110) )
        LdrpCallTlsInitializers(1u, i - 160);
      if ( v12 )
      {
        v9 = 0LL;
        if ( (*(_BYTE *)(v7 + 104) & 0x20) != 0 )
          v9 = LdrpProcessInitContextRecord;
        v8 = LdrpCallInitRoutine(v12, *(_QWORD *)(v7 + 48), 1u, v9);
      }
      RtlDeactivateActivationContextUnsafeFast((__int64)&v16);
      v10 = LdrpDebugFlags;
      LdrpCurrentDllInitializer = v14;
      *(_DWORD *)(v7 + 104) |= 0x80000u;
      if ( !v8 )
      {
        if ( (v10 & 3) != 0 )
        {
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            1028,
            (unsigned int)"LdrpInitializeNode",
            0,
            (__int64)"Init routine %p for DLL \"%wZ\" failed during DLL_PROCESS_ATTACH\n",
            v12,
            v7 + 72);
          v10 = LdrpDebugFlags;
        }
        if ( (v10 & 0x10) != 0 )
          __debugbreak();
        v5 = -1073741502;
        *(_DWORD *)(v7 + 104) |= 0x100000u;
        break;
      }
      LdrpLogDllState(*(_QWORD *)(v7 + 48), v7 + 72, 0x14AEu);
      v2 = LdrpImageEntry;
    }
  }
  *(_DWORD *)(v13 + 56) = v5 != 0 ? -4 : 9;
  return v5;
}
