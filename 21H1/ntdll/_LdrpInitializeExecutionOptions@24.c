/*
 * XREFs of _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _RtlQueryApplicationKeyOption@32 @ 0x4B2A6C1D (_RtlQueryApplicationKeyOption@32.c)
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrControlFlowGuardEnforced@0 @ 0x4B2D0100 (_LdrControlFlowGuardEnforced@0.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlQueryEnvironmentVariable_U@12 @ 0x4B2DB100 (_RtlQueryEnvironmentVariable_U@12.c)
 *     _RtlUnicodeStringToInteger@12 @ 0x4B2E07A0 (_RtlUnicodeStringToInteger@12.c)
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _ZwSetInformationProcess@16 @ 0x4B2F2B40 (_ZwSetInformationProcess@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     __chkstk @ 0x4B2F64D0 (__chkstk.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpConstructModernAppKeyName@8 @ 0x4B331983 (_LdrpConstructModernAppKeyName@8.c)
 *     _LdrpInitializeApplicationVerifierPackage@24 @ 0x4B331CC8 (_LdrpInitializeApplicationVerifierPackage@24.c)
 *     _LdrpInitializeCriticalSectionExceptionGlobalMitigation@0 @ 0x4B331E35 (_LdrpInitializeCriticalSectionExceptionGlobalMitigation@0.c)
 *     _LdrpIsVerifierActivationFilterMatched@12 @ 0x4B333042 (_LdrpIsVerifierActivationFilterMatched@12.c)
 *     _LdrpPayloadRestrictionMitigationsEnabled@0 @ 0x4B3335DC (_LdrpPayloadRestrictionMitigationsEnabled@0.c)
 *     _LdrpQueryAndUpdateVerifierLaunchCounter@8 @ 0x4B333771 (_LdrpQueryAndUpdateVerifierLaunchCounter@8.c)
 *     _LdrpQueryIllegalCWDDevices@4 @ 0x4B33384B (_LdrpQueryIllegalCWDDevices@4.c)
 *     _AVrfOpenCurrentUserImageFileOptionsKey@12 @ 0x4B3388F7 (_AVrfOpenCurrentUserImageFileOptionsKey@12.c)
 *     _RtlOpenModernAppOptionsKey@12 @ 0x4B33FDAB (_RtlOpenModernAppOptionsKey@12.c)
 *     _RtlSetLowFragHeapGlobalFlags@8 @ 0x4B35708B (_RtlSetLowFragHeapGlobalFlags@8.c)
 */

NTSTATUS __fastcall LdrpInitializeExecutionOptions(
        unsigned __int16 *a1,
        int a2,
        int a3,
        HANDLE *a4,
        HANDLE *a5,
        int a6)
{
  HANDLE v6; // ebx
  ULONG v7; // esi
  HANDLE v8; // edi
  int v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // eax
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  _BYTE *v20; // edi
  NTSTATUS v21; // eax
  NTSTATUS v22; // esi
  int v23; // eax
  ULONG v24; // esi
  void *ProcessHeap; // ecx
  PVOID Heap; // eax
  NTSTATUS v27; // eax
  _BYTE *v28; // edi
  NTSTATUS v29; // eax
  NTSTATUS v30; // esi
  int v31; // eax
  ULONG v32; // esi
  void *v33; // ecx
  PVOID v34; // eax
  NTSTATUS v35; // eax
  _BYTE *v36; // edi
  NTSTATUS v37; // eax
  NTSTATUS v38; // esi
  int v39; // eax
  ULONG v40; // esi
  void *v41; // ecx
  PVOID v42; // eax
  NTSTATUS v43; // eax
  NTSTATUS v44; // eax
  NTSTATUS v45; // esi
  _BYTE *v46; // esi
  NTSTATUS v47; // eax
  void *v48; // edi
  int v49; // eax
  ULONG v50; // ebx
  void *v51; // ecx
  PVOID v52; // eax
  NTSTATUS v53; // eax
  int v54; // esi
  bool *v55; // ecx
  int v56; // ecx
  _BYTE *v57; // esi
  NTSTATUS v58; // eax
  void *v59; // edi
  int v60; // eax
  ULONG v61; // ebx
  PVOID v62; // eax
  NTSTATUS v63; // eax
  int v64; // esi
  int v65; // ecx
  ULONG v66; // esi
  int v67; // eax
  bool v68; // zf
  int v69; // eax
  int v70; // edi
  char v71; // al
  HANDLE *v72; // ebx
  HANDLE *v73; // ebx
  ULONG v75; // [esp-8h] [ebp-1678h]
  ULONG v76; // [esp-8h] [ebp-1678h]
  SIZE_T v77; // [esp-4h] [ebp-1674h]
  HANDLE KeyHandle; // [esp+Ch] [ebp-1664h] BYREF
  ULONG v79[2]; // [esp+10h] [ebp-1660h] BYREF
  int v80; // [esp+18h] [ebp-1658h]
  PVOID BaseAddress; // [esp+1Ch] [ebp-1654h]
  ULONG v82; // [esp+20h] [ebp-1650h] BYREF
  char v83; // [esp+27h] [ebp-1649h]
  ULONG ResultLength; // [esp+28h] [ebp-1648h] BYREF
  ULONG Length; // [esp+2Ch] [ebp-1644h] BYREF
  ULONG v86; // [esp+30h] [ebp-1640h] BYREF
  ULONG v87; // [esp+34h] [ebp-163Ch] BYREF
  ULONG v88; // [esp+38h] [ebp-1638h] BYREF
  HANDLE Handle; // [esp+3Ch] [ebp-1634h] BYREF
  ULONG Value[2]; // [esp+40h] [ebp-1630h] BYREF
  HANDLE v91; // [esp+48h] [ebp-1628h] BYREF
  unsigned __int16 *v92; // [esp+4Ch] [ebp-1624h]
  ULONG v93; // [esp+50h] [ebp-1620h] BYREF
  char v94[4]; // [esp+54h] [ebp-161Ch]
  _UNICODE_STRING ValueName; // [esp+58h] [ebp-1618h] BYREF
  _UNICODE_STRING String; // [esp+60h] [ebp-1610h] BYREF
  _UNICODE_STRING v97; // [esp+68h] [ebp-1608h] BYREF
  _UNICODE_STRING v98; // [esp+70h] [ebp-1600h] BYREF
  _UNICODE_STRING v99; // [esp+78h] [ebp-15F8h] BYREF
  int v100; // [esp+80h] [ebp-15F0h] BYREF
  HANDLE *v101; // [esp+84h] [ebp-15ECh]
  HANDLE *v102; // [esp+88h] [ebp-15E8h]
  _UNICODE_STRING v103; // [esp+8Ch] [ebp-15E4h] BYREF
  int v104; // [esp+94h] [ebp-15DCh]
  int v105; // [esp+98h] [ebp-15D8h] BYREF
  int v106; // [esp+9Ch] [ebp-15D4h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+A0h] [ebp-15D0h] BYREF
  _UNICODE_STRING DestinationString; // [esp+B8h] [ebp-15B8h] BYREF
  _BYTE KeyValueInformation[1024]; // [esp+C0h] [ebp-15B0h] BYREF
  _BYTE v110[1024]; // [esp+4C0h] [ebp-11B0h] BYREF
  _BYTE v111[1024]; // [esp+8C0h] [ebp-DB0h] BYREF
  _BYTE v112[1024]; // [esp+CC0h] [ebp-9B0h] BYREF
  _BYTE v113[1024]; // [esp+10C0h] [ebp-5B0h] BYREF
  char v114; // [esp+14C0h] [ebp-1B0h] BYREF
  WCHAR SourceString[198]; // [esp+14E0h] [ebp-190h] BYREF

  v80 = a2;
  v92 = a1;
  v104 = a3;
  v106 = a6;
  *a4 = 0;
  v6 = 0;
  v102 = a5;
  v7 = 0;
  *a5 = 0;
  v8 = 0;
  v101 = a4;
  v94[0] = 0;
  KeyHandle = 0;
  Handle = 0;
  v93 = 0;
  v91 = 0;
  v83 = 1;
  v82 = 0;
  v100 = 0;
  LdrpInitializeCriticalSectionExceptionGlobalMitigation();
  if ( (*(_DWORD *)(*(_DWORD *)(v80 + 16) + 8) & 0x4000) != 0 )
    goto LABEL_171;
  v9 = RtlpOpenImageFileOptionsKeyEx(v92, 9u, 0, &KeyHandle);
  v6 = KeyHandle;
  if ( v9 < 0 )
    goto LABEL_171;
  v11 = v80;
  *v101 = KeyHandle;
  if ( (*(_BYTE *)(v11 + 3) & 0x10) != 0 && LdrpConstructModernAppKeyName((wchar_t *)SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v12 = RtlOpenModernAppOptionsKey(&v91);
    v8 = v91;
    if ( v12 >= 0 )
      *v102 = v91;
  }
  RtlQueryApplicationKeyOption(v8, v6, L"DisableHeapLookaside", 4, &RtlpDisableHeapLookaside, 4, v10, 0);
  RtlQueryApplicationKeyOption(v8, v6, L"FrontEndHeapDebugOptions", 4, &v93, 4, v13, 0);
  RtlQueryApplicationKeyOption(v8, v6, L"ShutdownFlags", 4, &RtlpShutdownProcessFlags, 4, v14, 0);
  v79[0] = 0;
  RtlQueryApplicationKeyOption(v8, v6, L"UnloadEventTraceDepth", 4, v79, 4, v15, 0);
  if ( v79[0] )
    RtlpUnloadEventTraceExNumber = v79[0];
  v79[0] = 0;
  RtlQueryApplicationKeyOption(v8, v6, L"MaxLoaderThreads", 4, v79, 4, v16, 0);
  v17 = v79[0];
  if ( v79[0] )
    *(_DWORD *)(*(_DWORD *)(v11 + 16) + 672) = v79[0];
  v79[0] = 0;
  RtlQueryApplicationKeyOption(v8, v6, L"UseImpersonatedDeviceMap", 4, v79, 4, v17, 0);
  if ( v79[0] )
    LdrpUseImpersonatedDeviceMap = 1;
  v79[0] = 0;
  RtlQueryApplicationKeyOption(v8, v6, L"TracingFlags", 4, v79, 4, v18, 0);
  v19 = v79[0];
  if ( v79[0] )
    _InterlockedOr((volatile signed __int32 *)(v11 + 576), v79[0]);
  v79[0] = 0;
  if ( RtlQueryApplicationKeyOption(v8, v6, L"RaiseExceptionOnPossibleDeadlock", 4, v79, 4, v19, 0) >= 0 )
    RtlpRaiseExceptionOnPossibleDeadlock = v79[0] != 0;
  Value[0] = 0;
  if ( RtlInitUnicodeStringEx(&ValueName, L"ExecuteOptions") >= 0 )
  {
    v20 = KeyValueInformation;
    v21 = ZwQueryValueKey(v6, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x400u, &ResultLength);
    v22 = v21;
    if ( v21 >= 0 )
    {
      BaseAddress = 0;
LABEL_20:
      v23 = *((_DWORD *)v20 + 1);
      if ( v23 != 3 && v23 != 7 )
      {
        if ( v23 == 4 )
        {
          if ( *((_DWORD *)v20 + 2) == 4 )
          {
            ResultLength = 4;
            Value[0] = *((_DWORD *)v20 + 3);
          }
          else
          {
            v22 = -1073741820;
          }
          goto LABEL_38;
        }
        if ( v23 == 1 )
        {
          if ( ((unsigned __int8)Value & 3) != 0 )
          {
            v22 = -2147483646;
          }
          else
          {
            ResultLength = 4;
            ValueName.Buffer = (wchar_t *)(v20 + 12);
            ValueName.Length = *((_WORD *)v20 + 4);
            ValueName.MaximumLength = *((_WORD *)v20 + 4);
            v22 = RtlUnicodeStringToInteger(&ValueName, 0, Value);
          }
LABEL_38:
          if ( BaseAddress )
          {
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
            v6 = KeyHandle;
          }
          goto LABEL_40;
        }
      }
      v22 = -1073741788;
      goto LABEL_38;
    }
    if ( v21 != -2147483643 )
    {
LABEL_40:
      if ( v22 >= 0 )
        Value[0] = Value[0] != 0 ? 2 : 13;
      goto LABEL_42;
    }
    while ( 1 )
    {
      v24 = ResultLength;
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
      if ( !ProcessHeap )
        break;
      LODWORD(v77) = ResultLength;
      Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, v77);
      BaseAddress = Heap;
      if ( !Heap )
        break;
      v6 = KeyHandle;
      v20 = Heap;
      v27 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, v24, &ResultLength);
      v22 = v27;
      if ( v27 >= 0 )
        goto LABEL_20;
      if ( v27 != -2147483643 )
        goto LABEL_38;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v20);
    }
    v6 = KeyHandle;
  }
LABEL_42:
  if ( RtlInitUnicodeStringEx(&String, L"DisableExceptionChainValidation") < 0 )
    goto LABEL_74;
  v28 = v110;
  v29 = ZwQueryValueKey(v6, &String, KeyValuePartialInformation, v110, 0x400u, &Length);
  v30 = v29;
  if ( v29 >= 0 )
  {
    BaseAddress = 0;
LABEL_45:
    v31 = *((_DWORD *)v28 + 1);
    if ( v31 != 3 && v31 != 7 )
    {
      if ( v31 == 4 )
      {
        if ( *((_DWORD *)v28 + 2) == 4 )
        {
          Length = 4;
          RtlpProcessECVPolicy = *((_DWORD *)v28 + 3);
        }
        else
        {
          v30 = -1073741820;
        }
        goto LABEL_64;
      }
      if ( v31 == 1 )
      {
        if ( ((unsigned __int8)&RtlpProcessECVPolicy & 3) != 0 )
        {
          v30 = -2147483646;
        }
        else
        {
          Length = 4;
          String.Buffer = (wchar_t *)(v28 + 12);
          String.Length = *((_WORD *)v28 + 4);
          String.MaximumLength = *((_WORD *)v28 + 4);
          v30 = RtlUnicodeStringToInteger(&String, 0, &RtlpProcessECVPolicy);
        }
LABEL_64:
        if ( BaseAddress )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
          v6 = KeyHandle;
        }
        goto LABEL_66;
      }
    }
    v30 = -1073741788;
    goto LABEL_64;
  }
  if ( v29 == -2147483643 )
  {
    while ( 1 )
    {
      v32 = Length;
      v33 = NtCurrentPeb()->ProcessHeap;
      if ( !v33 )
        break;
      LODWORD(v77) = Length;
      v34 = RtlAllocateHeap(v33, NtdllBaseTag + 1572864, v77);
      BaseAddress = v34;
      if ( !v34 )
        break;
      v6 = KeyHandle;
      v28 = v34;
      v35 = ZwQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, v34, v32, &Length);
      v30 = v35;
      if ( v35 >= 0 )
        goto LABEL_45;
      if ( v35 != -2147483643 )
        goto LABEL_64;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v28);
    }
    v6 = KeyHandle;
    goto LABEL_74;
  }
LABEL_66:
  if ( v30 < 0 )
  {
LABEL_74:
    if ( Value[0] )
      ZwSetInformationProcess((HANDLE)0xFFFFFFFF, ProcessExecuteFlags, Value, 4u);
    goto LABEL_76;
  }
  if ( RtlpProcessECVPolicy && RtlpProcessECVPolicy != 3 && RtlpProcessECVPolicy != 2 )
    RtlpProcessECVPolicy = 1;
  if ( Value[0] )
  {
    if ( RtlpProcessECVPolicy == 1 )
      Value[0] |= 0x40u;
    goto LABEL_74;
  }
LABEL_76:
  v79[0] = 0;
  if ( RtlInitUnicodeStringEx(&v97, L"CFGOptions") < 0 )
    goto LABEL_103;
  v36 = v111;
  v37 = ZwQueryValueKey(v6, &v97, KeyValuePartialInformation, v111, 0x400u, &v86);
  v38 = v37;
  if ( v37 >= 0 )
  {
    BaseAddress = 0;
LABEL_79:
    v39 = *((_DWORD *)v36 + 1);
    if ( v39 != 3 && v39 != 7 )
    {
      if ( v39 == 4 )
      {
        if ( *((_DWORD *)v36 + 2) == 4 )
        {
          v86 = 4;
          v79[0] = *((_DWORD *)v36 + 3);
        }
        else
        {
          v38 = -1073741820;
        }
        goto LABEL_98;
      }
      if ( v39 == 1 )
      {
        if ( ((unsigned __int8)v79 & 3) != 0 )
        {
          v38 = -2147483646;
        }
        else
        {
          v86 = 4;
          v97.Buffer = (wchar_t *)(v36 + 12);
          v97.Length = *((_WORD *)v36 + 4);
          v97.MaximumLength = *((_WORD *)v36 + 4);
          v38 = RtlUnicodeStringToInteger(&v97, 0, v79);
        }
LABEL_98:
        if ( BaseAddress )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
          v6 = KeyHandle;
        }
        goto LABEL_100;
      }
    }
    v38 = -1073741788;
    goto LABEL_98;
  }
  if ( v37 != -2147483643 )
  {
LABEL_100:
    if ( v38 >= 0 && (v79[0] & 1) != 0 )
    {
      LdrProtectMrdata(0);
      RtlGuardAllowSuppressedCalls = 1;
      LdrProtectMrdata(1);
    }
    goto LABEL_103;
  }
  while ( 1 )
  {
    v40 = v86;
    v41 = NtCurrentPeb()->ProcessHeap;
    if ( !v41 )
      break;
    LODWORD(v77) = v86;
    v42 = RtlAllocateHeap(v41, NtdllBaseTag + 1572864, v77);
    BaseAddress = v42;
    if ( !v42 )
      break;
    v6 = KeyHandle;
    v36 = v42;
    v43 = ZwQueryValueKey(KeyHandle, &v97, KeyValuePartialInformation, v42, v40, &v86);
    v38 = v43;
    if ( v43 >= 0 )
      goto LABEL_79;
    if ( v43 != -2147483643 )
      goto LABEL_98;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v36);
  }
  v6 = KeyHandle;
LABEL_103:
  if ( (*(_BYTE *)(v80 + 3) & 1) != 0 )
  {
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    ObjectAttributes.Length = 24;
    ObjectAttributes.RootDirectory = v6;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&dword_4B281A38;
    v44 = ZwOpenKey(&LdrpLargePageDllKeyHandle, 1u, &ObjectAttributes);
    v45 = v44;
    if ( v44 == -1073741772 )
    {
      LdrpLargePageDllKeyHandle = 0;
    }
    else if ( v44 < 0 )
    {
      goto LABEL_199;
    }
  }
  if ( RtlInitUnicodeStringEx(&v98, L"MinimumStackCommitInBytes") >= 0 )
  {
    v46 = v112;
    v47 = ZwQueryValueKey(v6, &v98, KeyValuePartialInformation, v112, 0x400u, &v87);
    if ( v47 < 0 )
    {
      if ( v47 != -2147483643 )
        goto LABEL_128;
      while ( 1 )
      {
        v50 = v87;
        v51 = NtCurrentPeb()->ProcessHeap;
        if ( !v51 )
          goto LABEL_127;
        LODWORD(v77) = v87;
        v52 = RtlAllocateHeap(v51, NtdllBaseTag + 1572864, v77);
        v48 = v52;
        if ( !v52 )
          goto LABEL_127;
        v46 = v52;
        v75 = v50;
        v6 = KeyHandle;
        v53 = ZwQueryValueKey(KeyHandle, &v98, KeyValuePartialInformation, v52, v75, &v87);
        if ( v53 >= 0 )
          goto LABEL_111;
        if ( v53 != -2147483643 )
          goto LABEL_125;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v48);
      }
    }
    v48 = 0;
LABEL_111:
    v49 = *((_DWORD *)v46 + 1);
    if ( v49 != 3 && v49 != 7 )
    {
      if ( v49 == 4 )
      {
        if ( *((_DWORD *)v46 + 2) == 4 )
        {
          v87 = 4;
          v79[0] = *((_DWORD *)v46 + 3);
        }
      }
      else if ( v49 == 1 && ((unsigned __int8)v79 & 3) == 0 )
      {
        v87 = 4;
        v98.Buffer = (wchar_t *)(v46 + 12);
        v98.Length = *((_WORD *)v46 + 4);
        v98.MaximumLength = *((_WORD *)v46 + 4);
        RtlUnicodeStringToInteger(&v98, 0, v79);
      }
    }
LABEL_125:
    if ( v48 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v48);
LABEL_127:
      v6 = KeyHandle;
    }
  }
LABEL_128:
  if ( *(_DWORD *)(v80 + 520) < v79[0] )
    *(_DWORD *)(v80 + 520) = v79[0];
  v54 = 0;
  while ( 1 )
  {
    v79[0] = 0;
    RtlQueryImageFileKeyOption(v6, (PCWSTR)(&off_4B281A60)[v54], 4, v79, 4u, 0);
    v55 = *(bool **)((char *)&off_4B281A64 + v54 * 4);
    v54 += 2;
    *v55 = v79[0] != 0;
    if ( v54 == 6 )
      break;
    v6 = KeyHandle;
  }
  v79[0] = 0;
  if ( RtlInitUnicodeStringEx(&v99, L"MaxDeadActivationContexts") < 0 )
  {
LABEL_155:
    v6 = KeyHandle;
    goto LABEL_156;
  }
  v6 = KeyHandle;
  v57 = v113;
  v58 = ZwQueryValueKey(KeyHandle, &v99, KeyValuePartialInformation, v113, 0x400u, &v82);
  if ( v58 < 0 )
  {
    if ( v58 != -2147483643 )
      goto LABEL_156;
    while ( 1 )
    {
      v61 = v82;
      v56 = (int)NtCurrentPeb()->ProcessHeap;
      if ( !v56 )
        goto LABEL_155;
      LODWORD(v77) = v82;
      v62 = RtlAllocateHeap((PVOID)v56, NtdllBaseTag + 1572864, v77);
      v59 = v62;
      if ( !v62 )
        goto LABEL_155;
      v57 = v62;
      v76 = v61;
      v6 = KeyHandle;
      v63 = ZwQueryValueKey(KeyHandle, &v99, KeyValuePartialInformation, v62, v76, &v82);
      if ( v63 >= 0 )
        goto LABEL_136;
      if ( v63 != -2147483643 )
        goto LABEL_151;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v59);
    }
  }
  v59 = 0;
LABEL_136:
  v60 = *((_DWORD *)v57 + 1);
  if ( v60 == 3 || v60 == 7 )
  {
    v56 = 4;
  }
  else
  {
    v56 = 4;
    if ( v60 == 4 )
    {
      if ( *((_DWORD *)v57 + 2) == 4 )
      {
        v82 = 4;
        v79[0] = *((_DWORD *)v57 + 3);
      }
    }
    else if ( v60 == 1 && ((unsigned __int8)v79 & 3) == 0 )
    {
      v82 = 4;
      v99.Buffer = (wchar_t *)(v57 + 12);
      v99.Length = *((_WORD *)v57 + 4);
      v99.MaximumLength = *((_WORD *)v57 + 4);
      RtlUnicodeStringToInteger(&v99, 0, v79);
    }
  }
LABEL_151:
  if ( v59 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v59);
    v6 = KeyHandle;
  }
  if ( v79[0] )
    g_SxsMaxDeadActivationContexts = v79[0];
LABEL_156:
  v64 = v80;
  v8 = v91;
  BaseAddress = (PVOID)((*(_DWORD *)(v80 + 104) >> 8) & 0xFFFFFF01);
  if ( RtlQueryApplicationKeyOption(v91, v6, L"GlobalFlag", 4, &v88, 4, v56, &v100) >= 0 )
  {
    v66 = v88;
    if ( (v88 & 0x2000100) != 0 )
    {
      if ( !LdrpIsVerifierActivationFilterMatched(v80, v8, v6) )
      {
        v66 &= 0xFDFFFEFF;
        v88 = v66;
      }
      if ( (v66 & 0x2000100) != 0 )
      {
        if ( LdrpQueryAndUpdateVerifierLaunchCounter(v92, &v105) < 0 )
        {
          v64 = v80;
          goto LABEL_166;
        }
        if ( !v105 )
        {
          v66 &= 0xFDFFFEFF;
          v88 = v66;
        }
      }
    }
    v67 = v80;
    *(_DWORD *)(v80 + 104) = v66;
    v64 = v67;
  }
LABEL_166:
  if ( RtlQueryApplicationKeyOption(v8, v6, L"GlobalFlag2", 4, &v88, 4, v65, 0) >= 0 )
    *(_DWORD *)(v64 + 1144) = v88;
  v68 = (*(_DWORD *)(v64 + 104) & 0x2000100) == 0;
  v7 = v93;
  v94[0] = (char)BaseAddress;
  if ( v68 )
  {
    v82 = 0;
  }
  else
  {
    v83 = 0;
    v82 = v100;
  }
LABEL_171:
  LOBYTE(v69) = LdrControlFlowGuardEnforced();
  if ( v69 )
    v7 |= 1u;
  RtlSetLowFragHeapGlobalFlags(v7, *(_DWORD *)(*(_DWORD *)(v80 + 16) + 8));
  if ( v83 && !LdrpIsSecureProcess && (MEMORY[0x7FFE03A0] & 1) != 0 )
  {
    if ( AVrfOpenCurrentUserImageFileOptionsKey(&Handle) < 0 )
    {
      Handle = 0;
    }
    else if ( RtlQueryImageFileKeyOption(Handle, L"GlobalFlag", 4, &v88, 4u, 0) >= 0 )
    {
      *(_DWORD *)(v80 + 104) |= v88 & 0x2000100;
      v82 = (ULONG)Handle;
    }
  }
  v45 = 0;
  if ( (*(_DWORD *)(v80 + 104) & 0x2000100) == 0 && !(unsigned __int8)LdrpPayloadRestrictionMitigationsEnabled() )
  {
    v68 = v8 == 0;
    v70 = v80;
    if ( v68 && !v6 && *(_BYTE *)(v80 + 2) )
    {
      v103.Buffer = (wchar_t *)&v114;
      v103.Length = 0;
      v103.MaximumLength = 32;
      if ( RtlQueryEnvironmentVariable_U(*(PVOID *)(*(_DWORD *)(v80 + 16) + 72), (PUNICODE_STRING)&stru_4B281A40, &v103) < 0 )
      {
        v45 = 0;
      }
      else
      {
        v45 = RtlUnicodeStringToInteger(&v103, 0, v79);
        if ( v45 >= 0 && v79[0] )
          goto LABEL_188;
      }
      *(_DWORD *)(v70 + 104) |= 0x70u;
    }
LABEL_188:
    if ( (*(_BYTE *)(v70 + 1144) & 1) != 0 )
      *(_DWORD *)(v70 + 1140) |= 1u;
    goto LABEL_190;
  }
  v70 = v80;
  v45 = LdrpInitializeApplicationVerifierPackage(v92, v80, v94[0], (HANDLE)v82, v104, v106);
  if ( v45 >= 0 )
    goto LABEL_188;
  v71 = ShowSnaps;
  if ( (ShowSnaps & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (int)"minkernel\\ntdll\\ldrinit.c",
      8197,
      (int)"LdrpInitializeExecutionOptions",
      0,
      "Initializing the application verifier package failed with status 0x%08lx\n",
      v45);
    v71 = ShowSnaps;
  }
  if ( (v71 & 0x10) != 0 )
    __debugbreak();
LABEL_190:
  if ( v45 >= 0 )
  {
    LdrpQueryIllegalCWDDevices(v6);
    goto LABEL_203;
  }
LABEL_199:
  v72 = v101;
  if ( *v101 )
  {
    NtClose(*v101);
    *v72 = 0;
  }
  v73 = v102;
  if ( *v102 )
  {
    NtClose(*v102);
    *v73 = 0;
  }
LABEL_203:
  if ( Handle )
    NtClose(Handle);
  return v45;
}
