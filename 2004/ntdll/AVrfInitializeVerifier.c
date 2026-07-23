/*
 * XREFs of AVrfInitializeVerifier @ 0x1800D97F8
 * Callers:
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D0A40 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlInitializeCriticalSectionEx @ 0x180020BC0 (RtlInitializeCriticalSectionEx.c)
 *     LdrpFindLoadedDllByName @ 0x18002113C (LdrpFindLoadedDllByName.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     DbgPrintEx @ 0x1800502F0 (DbgPrintEx.c)
 *     DbgPrint @ 0x180050960 (DbgPrint.c)
 *     LdrpInitializeGraphRecurse @ 0x18006BF38 (LdrpInitializeGraphRecurse.c)
 *     RtlUnicodeStringToInteger @ 0x1800754D0 (RtlUnicodeStringToInteger.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x18009D0F0 (NtQueryValueKey.c)
 *     _alloca_probe @ 0x1800A2060 (_alloca_probe.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800D441C (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     AVrfpChainDuplicateVerificationLayers @ 0x1800DA508 (AVrfpChainDuplicateVerificationLayers.c)
 *     AVrfpEnableVerifierOptions @ 0x1800DAA04 (AVrfpEnableVerifierOptions.c)
 *     AVrfpLoadAndInitializeProvider @ 0x1800DAC58 (AVrfpLoadAndInitializeProvider.c)
 *     AVrfpParseVerifierDllsString @ 0x1800DAF80 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapAlreadyLoadedDlls @ 0x1800DB234 (AVrfpSnapAlreadyLoadedDlls.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DB4C0 (AVrfpVerifierStopInitialize.c)
 *     AvrfMiniLoadDll @ 0x1800DB580 (AvrfMiniLoadDll.c)
 */

__int64 __fastcall AVrfInitializeVerifier(char a1, __int64 a2, void *a3, int a4, __int64 a5, _QWORD *a6)
{
  void *v6; // rdi
  struct _PEB *v7; // rsi
  int Dll; // ebx
  __int64 *i; // rbx
  int LoadedDllByName; // eax
  void *v13; // rbx
  NTSTATUS ProcedureAddressForCaller; // ebx
  __int64 *j; // rdi
  __int64 v16; // rax
  __int64 *v17; // rbx
  __int64 v18; // rdx
  unsigned int NtGlobalFlag; // r11d
  char v20; // al
  int v21; // ecx
  int v22; // ebx
  _BYTE *v23; // rbx
  NTSTATUS v24; // eax
  void *v25; // rsi
  int v26; // ecx
  ULONG v27; // edi
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v30; // eax
  unsigned __int16 *v31; // rbx
  NTSTATUS v32; // eax
  void *v33; // rsi
  int v34; // ecx
  ULONG v35; // edi
  void *v36; // rcx
  PVOID v37; // rax
  NTSTATUS v38; // eax
  unsigned __int16 *v39; // rbx
  NTSTATUS v40; // eax
  void *v41; // rsi
  int v42; // ecx
  ULONG v43; // edi
  void *v44; // rcx
  PVOID v45; // rax
  NTSTATUS v46; // eax
  _DWORD *v47; // rbx
  NTSTATUS v48; // eax
  ULONG v49; // esi
  void *v50; // rcx
  PVOID v51; // rax
  NTSTATUS v52; // eax
  int v53; // ecx
  ULONG v54; // eax
  size_t v55; // r8
  ULONG Flags[2]; // [rsp+20h] [rbp-E0h]
  char v58; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v59[3]; // [rsp+31h] [rbp-CFh] BYREF
  ULONG ResultLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG Length; // [rsp+38h] [rbp-C8h] BYREF
  ULONG v62; // [rsp+3Ch] [rbp-C4h] BYREF
  ULONG v63; // [rsp+40h] [rbp-C0h] BYREF
  int v64; // [rsp+44h] [rbp-BCh]
  ULONG Value; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  _UNICODE_STRING String; // [rsp+70h] [rbp-90h] BYREF
  PVOID BaseAddress; // [rsp+80h] [rbp-80h] BYREF
  PVOID ProcedureAddress; // [rsp+88h] [rbp-78h] BYREF
  __int64 v71; // [rsp+90h] [rbp-70h]
  __int64 v72; // [rsp+98h] [rbp-68h]
  _QWORD *v73; // [rsp+A0h] [rbp-60h]
  _UNICODE_STRING v74; // [rsp+A8h] [rbp-58h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v77[1024]; // [rsp+4C0h] [rbp+3C0h] BYREF
  _BYTE v78[1024]; // [rsp+8C0h] [rbp+7C0h] BYREF
  _BYTE v79[1024]; // [rsp+CC0h] [rbp+BC0h] BYREF
  PVOID *Callback; // [rsp+1108h] [rbp+1008h]

  v6 = 0LL;
  v7 = NtCurrentPeb();
  v71 = a5;
  v73 = a6;
  v72 = a2;
  Value = 0;
  if ( !a4 )
  {
    if ( !a6 )
      return (unsigned int)-1073741811;
    *a6 = 0LL;
    NtGlobalFlag = v7->NtGlobalFlag;
    if ( (NtGlobalFlag & 0x2000100) != 0 )
    {
      v64 = 1;
    }
    else
    {
      v20 = LdrpPayloadRestrictionMitigationsEnabled();
      v21 = 0;
      if ( v20 )
        v21 = 2;
      v64 = v21;
    }
    if ( (NtGlobalFlag & 0x100) != 0 || (v22 = 0, a1) )
      v22 = 294916;
    AVrfpVerifierFlags = v22;
    AVrfpVerifierDllsString = 0;
    if ( a3 && RtlInitUnicodeStringEx(&DestinationString, L"VerifierFlags") >= 0 )
    {
      v23 = KeyValueInformation;
      v24 = NtQueryValueKey(
              a3,
              &DestinationString,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x400u,
              &ResultLength);
      if ( v24 < 0 )
      {
        if ( v24 == -2147483643 )
        {
          while ( 1 )
          {
            v27 = ResultLength;
            ProcessHeap = NtCurrentPeb()->ProcessHeap;
            if ( !ProcessHeap )
              break;
            Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
            v25 = Heap;
            if ( !Heap )
              break;
            v23 = Heap;
            v30 = NtQueryValueKey(a3, &DestinationString, KeyValuePartialInformation, Heap, v27, &ResultLength);
            v6 = 0LL;
            if ( v30 >= 0 )
              goto LABEL_43;
            if ( v30 != -2147483643 )
              goto LABEL_59;
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v23);
          }
          v6 = 0LL;
        }
      }
      else
      {
        v25 = 0LL;
LABEL_43:
        v26 = *((_DWORD *)v23 + 1);
        if ( ((v26 - 3) & 0xFFFFFFFB) != 0 )
        {
          if ( v26 == 4 )
          {
            if ( *((_DWORD *)v23 + 2) == 4 )
            {
              ResultLength = 4;
              Value = *((_DWORD *)v23 + 3);
            }
          }
          else if ( v26 == 1 && ((unsigned __int8)&Value & 3) == 0 )
          {
            ResultLength = 4;
            DestinationString.Buffer = (wchar_t *)(v23 + 12);
            DestinationString.Length = *((_WORD *)v23 + 4);
            DestinationString.MaximumLength = *((_WORD *)v23 + 4);
            RtlUnicodeStringToInteger(&DestinationString, 0, &Value);
          }
        }
        else if ( v26 == 4 )
        {
          ResultLength = *((_DWORD *)v23 + 2);
          if ( *((_DWORD *)v23 + 2) <= 4u )
            memmove(&Value, v23 + 12, *((unsigned int *)v23 + 2));
        }
LABEL_59:
        if ( v25 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v25);
        LOBYTE(v22) = Value;
        if ( Value )
        {
          AVrfpVerifierFlags = Value;
LABEL_67:
          if ( !a3 )
            goto LABEL_131;
          if ( (v22 & 4) != 0 && RtlInitUnicodeStringEx(&ValueName, L"HandleTraces") >= 0 )
          {
            v31 = (unsigned __int16 *)v77;
            v32 = NtQueryValueKey(a3, &ValueName, KeyValuePartialInformation, v77, 0x400u, &Length);
            if ( v32 < 0 )
            {
              if ( v32 == -2147483643 )
              {
                while ( 1 )
                {
                  v35 = Length;
                  v36 = NtCurrentPeb()->ProcessHeap;
                  if ( !v36 )
                    break;
                  v37 = RtlAllocateHeap(v36, NtdllBaseTag + 1572864, Length);
                  v33 = v37;
                  if ( !v37 )
                    break;
                  v31 = (unsigned __int16 *)v37;
                  v38 = NtQueryValueKey(a3, &ValueName, KeyValuePartialInformation, v37, v35, &Length);
                  v6 = 0LL;
                  if ( v38 >= 0 )
                    goto LABEL_72;
                  if ( v38 != -2147483643 )
                    goto LABEL_88;
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v31);
                }
                v6 = 0LL;
              }
            }
            else
            {
              v33 = 0LL;
LABEL_72:
              v34 = *((_DWORD *)v31 + 1);
              if ( ((v34 - 3) & 0xFFFFFFFB) != 0 )
              {
                if ( v34 == 4 )
                {
                  if ( *((_DWORD *)v31 + 2) == 4 )
                  {
                    Length = 4;
                    AVrfpHandleTraces = *((_DWORD *)v31 + 3);
                  }
                }
                else if ( v34 == 1 && ((unsigned __int8)&AVrfpHandleTraces & 3) == 0 )
                {
                  Length = 4;
                  ValueName.Buffer = v31 + 6;
                  ValueName.Length = v31[4];
                  ValueName.MaximumLength = v31[4];
                  RtlUnicodeStringToInteger(&ValueName, 0, &AVrfpHandleTraces);
                }
              }
              else if ( v34 == 4 )
              {
                Length = *((_DWORD *)v31 + 2);
                if ( *((_DWORD *)v31 + 2) <= 4u )
                  memmove(&AVrfpHandleTraces, v31 + 6, *((unsigned int *)v31 + 2));
              }
LABEL_88:
              if ( v33 )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v33);
            }
          }
          if ( RtlInitUnicodeStringEx(&String, L"VerifierDebug") >= 0 )
          {
            v39 = (unsigned __int16 *)v78;
            v40 = NtQueryValueKey(a3, &String, KeyValuePartialInformation, v78, 0x400u, &v62);
            if ( v40 < 0 )
            {
              if ( v40 == -2147483643 )
              {
                while ( 1 )
                {
                  v43 = v62;
                  v44 = NtCurrentPeb()->ProcessHeap;
                  if ( !v44 )
                    break;
                  v45 = RtlAllocateHeap(v44, NtdllBaseTag + 1572864, v62);
                  v41 = v45;
                  if ( !v45 )
                    break;
                  v39 = (unsigned __int16 *)v45;
                  v46 = NtQueryValueKey(a3, &String, KeyValuePartialInformation, v45, v43, &v62);
                  v6 = 0LL;
                  if ( v46 >= 0 )
                    goto LABEL_94;
                  if ( v46 != -2147483643 )
                    goto LABEL_110;
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v39);
                }
                v6 = 0LL;
              }
            }
            else
            {
              v41 = 0LL;
LABEL_94:
              v42 = *((_DWORD *)v39 + 1);
              if ( ((v42 - 3) & 0xFFFFFFFB) != 0 )
              {
                if ( v42 == 4 )
                {
                  if ( *((_DWORD *)v39 + 2) == 4 )
                  {
                    v62 = 4;
                    AVrfpDebug = *((_DWORD *)v39 + 3);
                  }
                }
                else if ( v42 == 1 && ((unsigned __int8)&AVrfpDebug & 3) == 0 )
                {
                  v62 = 4;
                  String.Buffer = v39 + 6;
                  String.Length = v39[4];
                  String.MaximumLength = v39[4];
                  RtlUnicodeStringToInteger(&String, 0, &AVrfpDebug);
                }
              }
              else if ( v42 == 4 )
              {
                v62 = *((_DWORD *)v39 + 2);
                if ( *((_DWORD *)v39 + 2) <= 4u )
                  memmove(&AVrfpDebug, v39 + 6, *((unsigned int *)v39 + 2));
              }
LABEL_110:
              if ( v41 )
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v41);
            }
          }
          if ( RtlInitUnicodeStringEx(&v74, L"VerifierDlls") < 0 )
            goto LABEL_131;
          v47 = v79;
          v48 = NtQueryValueKey(a3, &v74, KeyValuePartialInformation, v79, 0x400u, &v63);
          if ( v48 < 0 )
          {
            if ( v48 == -2147483643 )
            {
              while ( 1 )
              {
                v49 = v63;
                v50 = NtCurrentPeb()->ProcessHeap;
                if ( !v50 )
                  break;
                v51 = RtlAllocateHeap(v50, NtdllBaseTag + 1572864, v63);
                v6 = v51;
                if ( !v51 )
                  break;
                v47 = v51;
                v52 = NtQueryValueKey(a3, &v74, KeyValuePartialInformation, v51, v49, &v63);
                if ( v52 >= 0 )
                  goto LABEL_121;
                if ( v52 != -2147483643 )
                  goto LABEL_129;
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v47);
              }
            }
            goto LABEL_131;
          }
LABEL_121:
          v53 = v47[1];
          if ( ((v53 - 3) & 0xFFFFFFFB) != 0 )
          {
            if ( v53 == 1 )
            {
              v54 = v47[2];
              v63 = v54;
              if ( v54 <= 0x200 )
              {
                v55 = v54;
LABEL_128:
                memmove(&AVrfpVerifierDllsString, v47 + 3, v55);
              }
            }
          }
          else if ( v53 == 1 )
          {
            v63 = v47[2];
            if ( v47[2] <= 0x200u )
            {
              v55 = (unsigned int)v47[2];
              goto LABEL_128;
            }
          }
LABEL_129:
          if ( v6 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
LABEL_131:
          Dll = AvrfMiniLoadDll((unsigned int)&VerifierDllString, v72, (_DWORD)a3, v71, (__int64)&AvrfpLoaderEntry);
          if ( Dll >= 0 )
          {
            *v73 = &AvrfpLoaderEntry;
            Dll = AVrfpEnableVerifierOptions();
            if ( Dll >= 0 )
            {
              LdrProtectMrdata(0);
              AvrfAppVerifierMode = v64;
              LdrProtectMrdata(1);
            }
          }
          return (unsigned int)Dll;
        }
      }
      LOBYTE(v22) = AVrfpVerifierFlags;
    }
    if ( a1 )
      AVrfpEnabledSystemWide = 1;
    goto LABEL_67;
  }
  if ( a4 != 1 )
    return 0;
  qword_180169718 = (__int64)&AVrfpVerifierProvidersList;
  AVrfpVerifierProvidersList = (__int64)&AVrfpVerifierProvidersList;
  Dll = RtlInitializeCriticalSectionEx(&AVrfpVerifierLock, 0, 0);
  if ( Dll >= 0 )
  {
    if ( AvrfAppVerifierMode == 2 )
    {
      v59[0] = 0;
      Dll = LdrpInitializeGraphRecurse(qword_180169840, 0LL, v59);
      if ( Dll < 0 )
        return (unsigned int)Dll;
    }
    else
    {
      DbgPrintEx(
        0x5Du,
        0,
        "AVRF: %ws: pid 0x%X: flags 0x%X: application verifier enabled\n",
        *(_QWORD *)(qword_18016A4D0 + 96),
        LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
        AVrfpVerifierFlags);
      if ( (int)AVrfpParseVerifierDllsString() < 0 )
      {
        Flags[0] = (ULONG)NtCurrentTeb()->ClientId.UniqueProcess;
        DbgPrintEx(
          0x5Du,
          0,
          "AVRF: %ws: pid 0x%X: application verifier will be disabled due to an initialization error.\n",
          *(_QWORD *)(qword_18016A4D0 + 96),
          *(_QWORD *)Flags);
        Dll = -1073741823;
        NtCurrentPeb()->NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag & 0xFFFFFEFF;
        return (unsigned int)Dll;
      }
      for ( i = (__int64 *)AVrfpVerifierProvidersList; i != &AVrfpVerifierProvidersList; i = (__int64 *)*i )
      {
        if ( !(unsigned __int8)AVrfpLoadAndInitializeProvider(i) )
          return (unsigned int)-1073741502;
      }
      AVrfpChainDuplicateVerificationLayers();
      LoadedDllByName = LdrpFindLoadedDllByName(
                          (PUNICODE_STRING)&VrfcoreDllString,
                          0LL,
                          0LL,
                          (__int64)&BaseAddress,
                          0LL);
      Dll = LoadedDllByName;
      if ( LoadedDllByName < 0 )
      {
        if ( LoadedDllByName != -1073741515 )
          return (unsigned int)Dll;
        v13 = (void *)qword_180169750;
      }
      else
      {
        v13 = (void *)*((_QWORD *)BaseAddress + 6);
        LdrpDereferenceModule((char *)BaseAddress);
      }
      ProcedureAddressForCaller = LdrGetProcedureAddressForCaller(
                                    v13,
                                    (PANSI_STRING)&AvrfpAPILookupCallbackName,
                                    0,
                                    &ProcedureAddress,
                                    1u,
                                    Callback);
      LdrProtectMrdata(0);
      if ( ProcedureAddressForCaller >= 0 )
      {
        AvrfpAPILookupCallbackRoutine = __ROR8__(
                                          (unsigned __int64)ProcedureAddress ^ MEMORY[0x7FFE0330],
                                          MEMORY[0x7FFE0330] & 0x3F);
        AvrfpAPILookupCallbacksEnabled = 1;
      }
      AVrfpEnabled = 1;
      RtlGuardAllowSuppressedCalls = 1;
      LdrProtectMrdata(1);
      AVrfpSnapAlreadyLoadedDlls();
      for ( j = (__int64 *)AVrfpVerifierProvidersList; j != &AVrfpVerifierProvidersList; j = (__int64 *)*j )
      {
        v16 = j[4];
        v58 = 0;
        Dll = LdrpInitializeGraphRecurse(*(__int64 **)(v16 + 152), 0LL, &v58);
        if ( Dll < 0 )
          return (unsigned int)Dll;
      }
      if ( (AVrfpDebug & 8) != 0 )
      {
        DbgPrint("AVRF: -*- final list of providers -*- \n");
        v17 = (__int64 *)AVrfpVerifierProvidersList;
        while ( v17 != &AVrfpVerifierProvidersList )
        {
          v18 = v17[3];
          v17 = (__int64 *)*v17;
          DbgPrint("AVRF: provider %ws \n", v18);
        }
      }
      AVrfpVerifierStopInitialize();
      RtlImageNtHeaderEx(3u, v7->ImageBaseAddress, 0LL, &OutHeaders);
    }
    return 0;
  }
  return (unsigned int)Dll;
}
