/*
 * XREFs of _AVrfInitializeVerifier@24 @ 0x4B338523
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrpInitializeApplicationVerifierPackage@24 @ 0x4B331CC8 (_LdrpInitializeApplicationVerifierPackage@24.c)
 * Callees:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _RtlImageNtHeaderEx@20 @ 0x4B2BE540 (_RtlImageNtHeaderEx@20.c)
 *     _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0 (_LdrGetProcedureAddressForCaller@24.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpFindLoadedDllByName@20 @ 0x4B2CF350 (_LdrpFindLoadedDllByName@20.c)
 *     _LdrpInitializeGraphRecurse@12 @ 0x4B2D1904 (_LdrpInitializeGraphRecurse@12.c)
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 *     _LdrpPayloadRestrictionMitigationsEnabled@0 @ 0x4B3335DC (_LdrpPayloadRestrictionMitigationsEnabled@0.c)
 *     _AVrfpChainDuplicateVerificationLayers@0 @ 0x4B338A4E (_AVrfpChainDuplicateVerificationLayers@0.c)
 *     _AVrfpDumpProviderList@0 @ 0x4B338DA8 (_AVrfpDumpProviderList@0.c)
 *     _AVrfpEnableVerifierOptions@0 @ 0x4B338EAB (_AVrfpEnableVerifierOptions@0.c)
 *     _AVrfpLoadAndInitializeProvider@4 @ 0x4B33908C (_AVrfpLoadAndInitializeProvider@4.c)
 *     _AVrfpParseVerifierDllsString@4 @ 0x4B339319 (_AVrfpParseVerifierDllsString@4.c)
 *     _AVrfpSnapAlreadyLoadedDlls@0 @ 0x4B33953A (_AVrfpSnapAlreadyLoadedDlls@0.c)
 *     _AVrfpVerifierStopInitialize@0 @ 0x4B339708 (_AVrfpVerifierStopInitialize@0.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

NTSTATUS __fastcall AVrfInitializeVerifier(char a1, int a2, HANDLE KeyHandle, int a4, int a5, _DWORD *a6)
{
  struct _PEB *v6; // esi
  NTSTATUS Dll; // esi
  int *i; // esi
  int LoadedDllByName; // eax
  void *v10; // esi
  NTSTATUS ProcedureAddressForCaller; // esi
  int *j; // edi
  int v13; // eax
  char v14; // al
  int v15; // eax
  char v17; // [esp+Dh] [ebp-1Bh]
  char v18; // [esp+Eh] [ebp-1Ah] BYREF
  char v19; // [esp+Fh] [ebp-19h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [esp+10h] [ebp-18h] BYREF
  ULONG Value; // [esp+14h] [ebp-14h] BYREF
  PVOID BaseAddress; // [esp+18h] [ebp-10h] BYREF
  PVOID ProcedureAddress; // [esp+1Ch] [ebp-Ch] BYREF
  struct _PEB *v24; // [esp+20h] [ebp-8h]
  int v25; // [esp+24h] [ebp-4h]
  PVOID *retaddr; // [esp+2Ch] [ebp+4h]

  v25 = a2;
  v17 = a1;
  v6 = NtCurrentPeb();
  v24 = v6;
  Value = 0;
  OutHeaders = 0;
  if ( !a4 )
  {
    if ( !a6 )
      return -1073741811;
    *a6 = 0;
    if ( (v6->NtGlobalFlag & 0x2000100) != 0 )
    {
      OutHeaders = (PIMAGE_NT_HEADERS)1;
    }
    else
    {
      v14 = LdrpPayloadRestrictionMitigationsEnabled();
      a1 = v17;
      if ( v14 )
        OutHeaders = (PIMAGE_NT_HEADERS)2;
    }
    if ( (v6->NtGlobalFlag & 0x100) != 0 || a1 )
      v15 = 294916;
    else
      v15 = 0;
    AVrfpVerifierFlags = v15;
    AVrfpVerifierDllsString = 0;
    if ( KeyHandle )
    {
      RtlQueryImageFileKeyOption(KeyHandle, L"VerifierFlags", 4, &Value, 4u, 0);
      LOBYTE(v15) = Value;
      if ( Value )
      {
        AVrfpVerifierFlags = Value;
LABEL_43:
        if ( KeyHandle )
        {
          if ( (v15 & 4) != 0 )
            RtlQueryImageFileKeyOption(KeyHandle, L"HandleTraces", 4, &AVrfpHandleTraces, 4u, 0);
          RtlQueryImageFileKeyOption(KeyHandle, L"VerifierDebug", 4, &AVrfpDebug, 4u, 0);
          RtlQueryImageFileKeyOption(KeyHandle, L"VerifierDlls", 1, (PULONG)&AVrfpVerifierDllsString, 0x200u, 0);
        }
        Dll = AvrfMiniLoadDll(&VerifierDllString, v25, KeyHandle, a5, &AvrfpLoaderEntry);
        if ( Dll >= 0 )
        {
          *a6 = &AvrfpLoaderEntry;
          Dll = AVrfpEnableVerifierOptions();
          if ( Dll >= 0 )
          {
            LdrProtectMrdata(0);
            AvrfAppVerifierMode = (int)OutHeaders;
            LdrProtectMrdata(1);
          }
        }
        return Dll;
      }
      LOBYTE(v15) = AVrfpVerifierFlags;
    }
    if ( v17 )
      AVrfpEnabledSystemWide = 1;
    goto LABEL_43;
  }
  if ( a4 != 1 )
    return 0;
  dword_4B3A5244 = (int)&AVrfpVerifierProvidersList;
  AVrfpVerifierProvidersList = (int)&AVrfpVerifierProvidersList;
  Dll = RtlInitializeCriticalSectionEx(&AVrfpVerifierLock, 0, 0);
  if ( Dll >= 0 )
  {
    if ( AvrfAppVerifierMode == 2 )
    {
      v19 = 0;
      Dll = LdrpInitializeGraphRecurse(dword_4B3A5308, 0, &v19);
      if ( Dll < 0 )
        return Dll;
    }
    else
    {
      DbgPrintEx(
        93,
        0,
        (int)"AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
        (int)dword_4B3A5D8C->BaseDllName.Buffer);
      if ( AVrfpParseVerifierDllsString() < 0 )
      {
        DbgPrintEx(
          93,
          0,
          (int)"AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
          (int)dword_4B3A5D8C->BaseDllName.Buffer);
        Dll = -1073741823;
        NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
        return Dll;
      }
      for ( i = (int *)AVrfpVerifierProvidersList; i != &AVrfpVerifierProvidersList; i = (int *)*i )
      {
        if ( !(unsigned __int8)AVrfpLoadAndInitializeProvider(i) )
          return -1073741502;
      }
      AVrfpChainDuplicateVerificationLayers();
      LoadedDllByName = LdrpFindLoadedDllByName((_UNICODE_STRING *)&VrfcoreDllString, 0, 0, (int *)&BaseAddress, 0);
      Dll = LoadedDllByName;
      if ( LoadedDllByName < 0 )
      {
        if ( LoadedDllByName != -1073741515 )
          return Dll;
        v10 = (void *)dword_4B3A5278;
      }
      else
      {
        v10 = (void *)*((_DWORD *)BaseAddress + 6);
        LdrpDereferenceModule((char *)BaseAddress);
      }
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                    v10,
                                    (PANSI_STRING)&AvrfpAPILookupCallbackName,
                                    0,
                                    &ProcedureAddress,
                                    1u,
                                    retaddr);
      LdrProtectMrdata(0);
      if ( ProcedureAddressForCaller >= 0 )
      {
        AvrfpAPILookupCallbackRoutine = __ROR4__(
                                          (unsigned int)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                          MEMORY[0x7FFE0330] & 0x1F);
        AvrfpAPILookupCallbacksEnabled = 1;
      }
      AVrfpEnabled = 1;
      RtlGuardAllowSuppressedCalls = 1;
      LdrProtectMrdata(1);
      AVrfpSnapAlreadyLoadedDlls();
      for ( j = (int *)AVrfpVerifierProvidersList; j != &AVrfpVerifierProvidersList; j = (int *)*j )
      {
        v13 = j[4];
        v18 = 0;
        Dll = LdrpInitializeGraphRecurse(*(_DWORD **)(v13 + 80), 0, &v18);
        if ( Dll < 0 )
          return Dll;
      }
      if ( (AVrfpDebug & 8) != 0 )
      {
        DbgPrint("AVRF: -*- final list of providers -*- \n");
        AVrfpDumpProviderList();
      }
      AVrfpVerifierStopInitialize();
      RtlImageNtHeaderEx(3u, v24->ImageBaseAddress, 0LL, &OutHeaders);
    }
    return 0;
  }
  return Dll;
}
