/*
 * XREFs of _LdrpLoadShimEngine@4 @ 0x4B2A6525
 * Callers:
 *     _LdrpInitShimEngine@4 @ 0x4B2A63CD (_LdrpInitShimEngine@4.c)
 *     _LdrInitShimEngineDynamic@8 @ 0x4B331380 (_LdrInitShimEngineDynamic@8.c)
 * Callees:
 *     _LdrpSendShimEngineInitialNotifications@8 @ 0x4B2A66C4 (_LdrpSendShimEngineInitialNotifications@8.c)
 *     _LdrpInitializeShimDllDependencies@0 @ 0x4B2A672F (_LdrpInitializeShimDllDependencies@0.c)
 *     _LdrpLoadDll@16 @ 0x4B2A6B05 (_LdrpLoadDll@16.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpInitializeDllPath@12 @ 0x4B2CE876 (_LdrpInitializeDllPath@12.c)
 *     _LdrpInitializeNode@4 @ 0x4B2D16BE (_LdrpInitializeNode@4.c)
 *     _RtlReleasePath@4 @ 0x4B2DE7B0 (_RtlReleasePath@4.c)
 *     _LdrpPinModule@4 @ 0x4B2E7DC6 (_LdrpPinModule@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpInitializationFailure@4 @ 0x4B331C4E (_LdrpInitializationFailure@4.c)
 */

char __thiscall LdrpLoadShimEngine(PCWSTR SourceString)
{
  void (__thiscall *v2)(_DWORD, int); // ebx
  int v3; // ecx
  int *v4; // eax
  int v5; // esi
  char v6; // bl
  void (__thiscall *v7)(_DWORD); // ecx
  int v8; // edi
  int *v9; // esi
  char v11; // al
  char v12; // al
  int i; // eax
  UNICODE_STRING DestinationString; // [esp+10h] [ebp-68h] BYREF
  int *v15; // [esp+18h] [ebp-60h] BYREF
  char v16; // [esp+1Fh] [ebp-59h]
  int v17[19]; // [esp+20h] [ebp-58h] BYREF
  char v18; // [esp+6Ch] [ebp-Ch]

  v16 = 1;
  LdrpInitializeDllPath(v17);
  g_ShimsLoading = 1;
  v2 = (void (__thiscall *)(_DWORD, int))(MEMORY[0x7FFE0330] ^ __ROR4__(
                                                                 g_pfnSE_ShimDllLoaded,
                                                                 32 - (MEMORY[0x7FFE0330] & 0x1F)));
  if ( !*SourceString )
  {
LABEL_8:
    v6 = v16;
    goto LABEL_9;
  }
  while ( 1 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v3 = LdrpLoadDll(1, &v15);
    if ( v3 < 0 )
    {
      v11 = ShowSnaps;
      if ( (ShowSnaps & 3) != 0 )
      {
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrinit.c",
          2287,
          "LdrpLoadShimEngine",
          0,
          "Loading the shim DLL \"%wZ\" failed with status 0x%08lx\n",
          &DestinationString,
          v3);
        v11 = ShowSnaps;
      }
      if ( (v11 & 0x10) != 0 )
        __debugbreak();
      v16 = 0;
      goto LABEL_7;
    }
    v15[13] |= 0x100u;
    LdrpPinModule(v15);
    v4 = v15;
    if ( *(_DWORD *)(v15[20] + 32) == 7 )
      break;
LABEL_6:
    v2(v2, v4[6]);
    LdrpDereferenceModule(v15);
LABEL_7:
    SourceString += DestinationString.MaximumLength >> 1;
    if ( !*SourceString )
      goto LABEL_8;
  }
  v5 = LdrpInitializeNode();
  if ( v5 >= 0 )
  {
    v4 = v15;
    goto LABEL_6;
  }
  v12 = ShowSnaps;
  v6 = 0;
  if ( (ShowSnaps & 3) != 0 )
  {
    LdrpLogDbgPrint(
      "minkernel\\ntdll\\ldrinit.c",
      2313,
      "LdrpLoadShimEngine",
      0,
      "Initializing the shim DLL \"%wZ\" failed with status 0x%08lx\n",
      &DestinationString,
      v5);
    v12 = ShowSnaps;
  }
  if ( (v12 & 0x10) != 0 )
    __debugbreak();
  LdrpInitializationFailure(v5);
  ZwTerminateProcess(-1, v5);
LABEL_9:
  if ( v18 )
    RtlReleasePath(v17[0]);
  v7 = (void (__thiscall *)(_DWORD))(MEMORY[0x7FFE0330] ^ __ROR4__(
                                                            g_pfnSE_InstallBeforeInit,
                                                            32 - (MEMORY[0x7FFE0330] & 0x1F)));
  v7(v7);
  v8 = MEMORY[0x7FFE0330] ^ __ROR4__(g_pfnSE_DllLoaded, 32 - (MEMORY[0x7FFE0330] & 0x1F));
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    for ( i = dword_4B3A5D8C; (int *)i != &dword_4B3A5D8C; i = *(_DWORD *)i )
    {
      v15 = (int *)i;
      *(_BYTE *)(i + 53) &= ~8u;
    }
  }
  v9 = (int *)dword_4B3A5D8C;
  if ( LdrInitState < 2 )
    v9 = *(int **)dword_4B3A5D8C;
  for ( ; v9 != &dword_4B3A5D8C; v9 = (int *)*v9 )
  {
    v15 = v9;
    LdrpSendShimEngineInitialNotifications(v9[20], v8);
  }
  g_ShimsEnabled = 1;
  g_ShimsLoading = 0;
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  LdrpInitializeShimDllDependencies();
  return v6;
}
