/*
 * XREFs of _LdrpInitializeNode@4 @ 0x4B2D16BE
 * Callers:
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 *     _LdrpInitializeGraphRecurse@12 @ 0x4B2D1904 (_LdrpInitializeGraphRecurse@12.c)
 * Callees:
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _LdrpCallInitRoutine@16 @ 0x4B2CDCA1 (_LdrpCallInitRoutine@16.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpCallTlsInitializers@8 @ 0x4B2CF073 (_LdrpCallTlsInitializers@8.c)
 *     _LdrpInitializeNode@4 @ 0x4B2D16BE (_LdrpInitializeNode@4.c)
 *     _NtSetInformationVirtualMemory@24 @ 0x4B2F4360 (_NtSetInformationVirtualMemory@24.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpCalloutExceptionFilter@4 @ 0x4B334818 (_LdrpCalloutExceptionFilter@4.c)
 */

int __thiscall LdrpInitializeNode(_DWORD *this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // edx
  int **v3; // ecx
  int v4; // edi
  int *v5; // esi
  int v6; // ecx
  _DWORD *i; // edi
  int v8; // esi
  void *v9; // ecx
  int v10; // eax
  char v11; // cl
  ULONG_PTR v13; // [esp-10h] [ebp-90h]
  ULONG v14; // [esp+0h] [ebp-80h]
  int v15[9]; // [esp+10h] [ebp-70h] BYREF
  _DWORD v16[2]; // [esp+34h] [ebp-4Ch] BYREF
  _DWORD *v17; // [esp+3Ch] [ebp-44h]
  _DWORD *v18; // [esp+40h] [ebp-40h]
  int v19; // [esp+44h] [ebp-3Ch]
  int v20; // [esp+4Ch] [ebp-34h]
  int v21; // [esp+50h] [ebp-30h]
  _DWORD *v22; // [esp+54h] [ebp-2Ch]
  _DWORD *v23; // [esp+58h] [ebp-28h]
  _MEMORY_RANGE_ENTRY VirtualAddresses; // [esp+5Ch] [ebp-24h] BYREF
  int v25; // [esp+7Ch] [ebp-4h]

  v1 = this;
  v18 = this;
  v17 = this;
  this[8] = 8;
  v2 = (_DWORD *)this[1];
  v3 = (int **)dword_4B3A5DA0;
  v4 = LdrpImageEntry;
  while ( v2 != v1 )
  {
    if ( v2 - 21 != (_DWORD *)v4 )
    {
      v5 = v2 - 17;
      if ( *v3 != &dword_4B3A5D9C )
        __fastfail(3u);
      *v5 = (int)&dword_4B3A5D9C;
      *(v2 - 16) = v3;
      *v3 = v5;
      v3 = (int **)(v2 - 17);
      dword_4B3A5DA0 = (int)v3;
    }
    v2 = (_DWORD *)v2[1];
  }
  v6 = 0;
  *((_DWORD *)&VirtualAddresses.VirtualAddress + 1) = 0;
  v21 = 0;
  for ( i = (_DWORD *)v1[1]; ; i = (_DWORD *)i[1] )
  {
    v23 = i;
    if ( i == v1 )
      break;
    v8 = (int)(i - 21);
    v22 = i - 21;
    if ( i - 21 != (_DWORD *)LdrpImageEntry )
    {
      VirtualAddresses.VirtualAddress = (PVOID)1;
      v16[0] = *(_DWORD *)(v8 + 24);
      v16[1] = 4096;
      HIDWORD(v13) = v16;
      LODWORD(v13) = 1;
      NtSetInformationVirtualMemory(
        (HANDLE)0xFFFFFFFF,
        VmImageHotPatchInformation,
        v13,
        &VirtualAddresses,
        (PVOID)4,
        v14);
      v19 = LdrpCurrentDllInitializer[0];
      LdrpCurrentDllInitializer[0] = (int)(i - 21);
      v9 = *(void **)(v8 + 28);
      VirtualAddresses.VirtualAddress = v9;
      if ( (ShowSnaps & 5) != 0 )
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrsnap.c",
          976,
          "LdrpInitializeNode",
          2,
          "Calling init routine %p for DLL \"%wZ\"\n",
          v9,
          v8 + 36);
      LODWORD(VirtualAddresses.NumberOfBytes) = 16777472;
      v25 = 0;
      v15[0] = 36;
      v15[1] = 1;
      memset(&v15[2], 0, 0x1Cu);
      RtlActivateActivationContextUnsafeFast(v15, *(_DWORD *)(v8 + 72));
      v25 = 1;
      if ( *(_WORD *)(v8 + 58) )
        LdrpCallTlsInitializers(1, v8);
      if ( VirtualAddresses.VirtualAddress )
      {
        v10 = 0;
        v20 = 0;
        if ( (*(_BYTE *)(v8 + 52) & 0x20) != 0 )
        {
          v10 = LdrpProcessInitContextRecord;
          v20 = LdrpProcessInitContextRecord;
        }
        BYTE3(VirtualAddresses.NumberOfBytes) = LdrpCallInitRoutine(
                                                  (int)VirtualAddresses.VirtualAddress,
                                                  *(_DWORD *)(v8 + 24),
                                                  1,
                                                  v10);
        BYTE1(VirtualAddresses.NumberOfBytes) = BYTE3(VirtualAddresses.NumberOfBytes);
      }
      v25 = 0;
      i = v23;
      RtlDeactivateActivationContextUnsafeFast(v15);
      v25 = -2;
      v11 = ShowSnaps;
      LdrpCurrentDllInitializer[0] = v19;
      if ( !BYTE2(VirtualAddresses.NumberOfBytes) )
        *(_DWORD *)(v8 + 52) |= 0x80000u;
      if ( !BYTE3(VirtualAddresses.NumberOfBytes) )
      {
        if ( (v11 & 3) != 0 )
        {
          LdrpLogDbgPrint(
            "minkernel\\ntdll\\ldrsnap.c",
            1028,
            "LdrpInitializeNode",
            0,
            "Init routine %p for DLL \"%wZ\" failed during DLL_PROCESS_ATTACH\n",
            VirtualAddresses.VirtualAddress,
            v8 + 36);
          v11 = ShowSnaps;
        }
        if ( (v11 & 0x10) != 0 )
          __debugbreak();
        v6 = -1073741502;
        *((_DWORD *)&VirtualAddresses.VirtualAddress + 1) = -1073741502;
        *(_DWORD *)(v8 + 52) |= 0x100000u;
        break;
      }
      LdrpLogDllState(*(_DWORD *)(v8 + 24), v8 + 36, 5294);
      v1 = v18;
      v6 = *((_DWORD *)&VirtualAddresses.VirtualAddress + 1);
    }
  }
  v17[8] = v6 != 0 ? -4 : 9;
  return *((_DWORD *)&VirtualAddresses.VirtualAddress + 1);
}
