/*
 * XREFs of LdrpInitializeExecutionOptions @ 0x1800D0EEC
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180012224 (LdrProtectMrdata.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlQueryEnvironmentVariable_U @ 0x18004DE20 (RtlQueryEnvironmentVariable_U.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800751DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlUnicodeStringToInteger @ 0x1800754D0 (RtlUnicodeStringToInteger.c)
 *     RtlQueryApplicationKeyOption @ 0x18007A228 (RtlQueryApplicationKeyOption.c)
 *     RtlQueryImageFileKeyOption @ 0x18007A3A0 (RtlQueryImageFileKeyOption.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenKey @ 0x18009D050 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D0F0 (NtQueryValueKey.c)
 *     _alloca_probe @ 0x1800A2060 (_alloca_probe.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800CDAE8 (LdrpLogDbgPrint.c)
 *     LdrpConstructModernAppKeyName @ 0x1800D065C (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D0A40 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeCriticalSectionExceptionGlobalMitigation @ 0x1800D0E2C (LdrpInitializeCriticalSectionExceptionGlobalMitigation.c)
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800D4240 (LdrpIsVerifierActivationFilterMatched.c)
 *     LdrpPayloadRestrictionMitigationsEnabled @ 0x1800D441C (LdrpPayloadRestrictionMitigationsEnabled.c)
 *     LdrpQueryAndUpdateVerifierLaunchCounter @ 0x1800D4504 (LdrpQueryAndUpdateVerifierLaunchCounter.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D4630 (LdrpQueryIllegalCWDDevices.c)
 *     AVrfOpenCurrentUserImageFileOptionsKey @ 0x1800DA2FC (AVrfOpenCurrentUserImageFileOptionsKey.c)
 *     RtlOpenModernAppOptionsKey @ 0x1800E1918 (RtlOpenModernAppOptionsKey.c)
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800F29D8 (RtlSetLowFragHeapGlobalFlags.c)
 */

__int64 __fastcall LdrpInitializeExecutionOptions(
        unsigned __int16 *a1,
        __int64 a2,
        __int64 a3,
        HANDLE *a4,
        HANDLE *a5,
        __int64 a6)
{
  unsigned __int16 *v6; // r14
  char v8; // r13
  unsigned int v9; // ebx
  void *v10; // rsi
  char v11; // r12
  HANDLE v12; // r14
  int v13; // eax
  void *v14; // r15
  ULONG v15; // ecx
  char v16; // al
  NTSTATUS inited; // ebx
  _BYTE *v18; // rsi
  NTSTATUS v19; // eax
  ULONG v20; // ebx
  void *ProcessHeap; // rcx
  PVOID Heap; // rax
  NTSTATUS v23; // eax
  int v24; // ecx
  NTSTATUS v25; // eax
  int v26; // ebx
  _BYTE *v27; // rbx
  NTSTATUS v28; // eax
  void *v29; // rsi
  int v30; // ecx
  ULONG v31; // r14d
  void *v32; // rcx
  PVOID v33; // rax
  NTSTATUS v34; // eax
  __int64 v35; // rbx
  const WCHAR *v36; // rdx
  bool *v37; // rcx
  _BYTE *v38; // rbx
  NTSTATUS v39; // eax
  void *v40; // rsi
  int v41; // ecx
  ULONG v42; // r14d
  void *v43; // rcx
  PVOID v44; // rax
  NTSTATUS v45; // eax
  ULONG v46; // ecx
  ULONG v47; // ebx
  int v48; // eax
  __int64 v49; // rdx
  HANDLE v50; // r15
  void *v51; // r12
  NTSTATUS v52; // ebx
  _BYTE *v53; // r14
  NTSTATUS v54; // eax
  ULONG v55; // ebx
  void *v56; // rcx
  PVOID v57; // rax
  NTSTATUS v58; // eax
  int v59; // ecx
  __int64 v60; // rcx
  char v61; // al
  HANDLE *v62; // rdi
  HANDLE *v63; // rdi
  ULONG Length; // [rsp+20h] [rbp-E0h]
  __int64 v66; // [rsp+30h] [rbp-D0h]
  __int64 v67; // [rsp+30h] [rbp-D0h]
  __int64 v68; // [rsp+30h] [rbp-D0h]
  __int64 v69; // [rsp+30h] [rbp-D0h]
  __int64 v70; // [rsp+30h] [rbp-D0h]
  __int64 v71; // [rsp+30h] [rbp-D0h]
  __int64 v72; // [rsp+30h] [rbp-D0h]
  __int64 v73; // [rsp+30h] [rbp-D0h]
  __int64 v74; // [rsp+30h] [rbp-D0h]
  __int64 v75; // [rsp+30h] [rbp-D0h]
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v79; // [rsp+54h] [rbp-ACh] BYREF
  ULONG v80; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v81; // [rsp+5Ch] [rbp-A4h] BYREF
  ULONG v82; // [rsp+60h] [rbp-A0h] BYREF
  void *v83; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v84; // [rsp+70h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  HANDLE v86; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v87; // [rsp+88h] [rbp-78h]
  int v88; // [rsp+90h] [rbp-70h] BYREF
  _UNICODE_STRING ValueName; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING String; // [rsp+A8h] [rbp-58h] BYREF
  _UNICODE_STRING v91; // [rsp+B8h] [rbp-48h] BYREF
  _UNICODE_STRING v92; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE *v93; // [rsp+D8h] [rbp-28h]
  _UNICODE_STRING v94; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v95; // [rsp+F0h] [rbp-10h]
  __int64 v96; // [rsp+F8h] [rbp-8h]
  HANDLE *v97; // [rsp+100h] [rbp+0h]
  _UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp+18h] BYREF
  _BYTE KeyValueInformation[1024]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v101[1024]; // [rsp+550h] [rbp+450h] BYREF
  _BYTE v102[1024]; // [rsp+950h] [rbp+850h] BYREF
  _BYTE v103[1024]; // [rsp+D50h] [rbp+C50h] BYREF
  char v104; // [rsp+1150h] [rbp+1050h] BYREF
  WCHAR SourceString[200]; // [rsp+1170h] [rbp+1070h] BYREF

  v6 = a1;
  v87 = a1;
  v95 = a6;
  *a4 = 0LL;
  v8 = 0;
  v93 = a4;
  v9 = 0;
  v96 = a3;
  v10 = 0LL;
  v11 = 1;
  v97 = a5;
  KeyHandle = 0LL;
  Handle = 0LL;
  v84 = 0;
  v83 = 0LL;
  *a5 = 0LL;
  v86 = 0LL;
  LdrpInitializeCriticalSectionExceptionGlobalMitigation();
  if ( (*(_DWORD *)(*(_QWORD *)(a2 + 32) + 8LL) & 0x4000) != 0
    || (int)RtlpOpenImageFileOptionsKeyEx(v6, 9LL, 0, &KeyHandle) < 0 )
  {
    goto LABEL_114;
  }
  v12 = KeyHandle;
  *v93 = KeyHandle;
  if ( (*(_BYTE *)(a2 + 3) & 0x10) != 0 && LdrpConstructModernAppKeyName(SourceString) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v13 = RtlOpenModernAppOptionsKey(&DestinationString, v12, &v83);
    v10 = v83;
    if ( v13 >= 0 )
      *a5 = v83;
  }
  v14 = 0LL;
  RtlQueryApplicationKeyOption(
    v10,
    v12,
    (__int64)L"DisableHeapLookaside",
    4LL,
    (__int64)&RtlpDisableHeapLookaside,
    4,
    v66,
    0LL);
  RtlQueryApplicationKeyOption(v10, v12, (__int64)L"FrontEndHeapDebugOptions", 4LL, (__int64)&v84, 4, v67, 0LL);
  RtlQueryApplicationKeyOption(
    v10,
    v12,
    (__int64)L"ShutdownFlags",
    4LL,
    (__int64)&RtlpShutdownProcessFlags,
    4,
    v68,
    0LL);
  Value = 0;
  RtlQueryApplicationKeyOption(v10, v12, (__int64)L"UnloadEventTraceDepth", 4LL, (__int64)&Value, 4, v69, 0LL);
  v15 = RtlpUnloadEventTraceExNumber;
  if ( Value )
    v15 = Value;
  RtlpUnloadEventTraceExNumber = v15;
  Value = 0;
  RtlQueryApplicationKeyOption(v10, v12, (__int64)L"MaxLoaderThreads", 4LL, (__int64)&Value, 4, v70, 0LL);
  if ( Value )
    *(_DWORD *)(*(_QWORD *)(a2 + 32) + 1036LL) = Value;
  Value = 0;
  RtlQueryApplicationKeyOption(v10, v12, (__int64)L"UseImpersonatedDeviceMap", 4LL, (__int64)&Value, 4, v71, 0LL);
  v16 = LdrpUseImpersonatedDeviceMap;
  if ( Value )
    v16 = 1;
  LdrpUseImpersonatedDeviceMap = v16;
  Value = 0;
  RtlQueryApplicationKeyOption(v10, v12, (__int64)L"TracingFlags", 4LL, (__int64)&Value, 4, v72, 0LL);
  if ( Value )
  {
    _InterlockedOr((volatile signed __int32 *)(a2 + 888), Value);
    v12 = KeyHandle;
    v10 = v83;
  }
  Value = 0;
  if ( (int)RtlQueryApplicationKeyOption(
              v10,
              v12,
              (__int64)L"RaiseExceptionOnPossibleDeadlock",
              4LL,
              (__int64)&Value,
              4,
              v73,
              0LL) >= 0 )
    RtlpRaiseExceptionOnPossibleDeadlock = Value != 0;
  Value = 0;
  inited = RtlInitUnicodeStringEx(&ValueName, L"CFGOptions");
  if ( inited < 0 )
    goto LABEL_41;
  v18 = KeyValueInformation;
  v19 = NtQueryValueKey(v12, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x400u, &ResultLength);
  inited = v19;
  if ( v19 >= 0 )
  {
LABEL_25:
    v24 = *((_DWORD *)v18 + 1);
    if ( ((v24 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v24 == 4 )
      {
        if ( *((_DWORD *)v18 + 2) == 4 )
        {
          ResultLength = 4;
          Value = *((_DWORD *)v18 + 3);
        }
        else
        {
          inited = -1073741820;
        }
        goto LABEL_39;
      }
      if ( v24 != 1 )
      {
LABEL_31:
        inited = -1073741788;
        goto LABEL_39;
      }
      if ( ((unsigned __int8)&Value & 3) != 0 )
      {
        inited = -2147483646;
      }
      else
      {
        ResultLength = 4;
        ValueName.Buffer = (wchar_t *)(v18 + 12);
        ValueName.Length = *((_WORD *)v18 + 4);
        ValueName.MaximumLength = *((_WORD *)v18 + 4);
        inited = RtlUnicodeStringToInteger(&ValueName, 0, &Value);
      }
    }
    else
    {
      if ( v24 != 4 )
        goto LABEL_31;
      ResultLength = *((_DWORD *)v18 + 2);
      if ( *((_DWORD *)v18 + 2) > 4u )
        inited = -2147483643;
      else
        memmove(&Value, v18 + 12, *((unsigned int *)v18 + 2));
    }
LABEL_39:
    if ( v14 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
      v12 = KeyHandle;
    }
    goto LABEL_41;
  }
  if ( v19 != -2147483643 )
  {
LABEL_41:
    if ( inited >= 0 && (Value & 1) != 0 )
    {
      LdrProtectMrdata(0);
      RtlGuardAllowSuppressedCalls = 1;
      LdrProtectMrdata(1);
    }
    goto LABEL_45;
  }
  while ( 1 )
  {
    v20 = ResultLength;
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    if ( !ProcessHeap )
      break;
    Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, ResultLength);
    v14 = Heap;
    if ( !Heap )
      break;
    v12 = KeyHandle;
    v18 = Heap;
    v23 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, v20, &ResultLength);
    inited = v23;
    if ( v23 >= 0 )
      goto LABEL_25;
    if ( v23 != -2147483643 )
      goto LABEL_39;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
  }
  v12 = KeyHandle;
LABEL_45:
  if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18011D410;
    ObjectAttributes.RootDirectory = v12;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v25 = NtOpenKey(&LdrpLargePageDllKeyHandle, 1u, &ObjectAttributes);
    v26 = v25;
    if ( v25 == -1073741772 )
    {
      LdrpLargePageDllKeyHandle = 0LL;
    }
    else if ( v25 < 0 )
    {
      goto LABEL_168;
    }
  }
  if ( RtlInitUnicodeStringEx(&String, L"MinimumStackCommitInBytes") >= 0 )
  {
    v27 = v101;
    v28 = NtQueryValueKey(v12, &String, KeyValuePartialInformation, v101, 0x400u, &v79);
    if ( v28 < 0 )
    {
      if ( v28 != -2147483643 )
        goto LABEL_71;
      while ( 1 )
      {
        v31 = v79;
        v32 = NtCurrentPeb()->ProcessHeap;
        if ( !v32 )
          goto LABEL_70;
        v33 = RtlAllocateHeap(v32, NtdllBaseTag + 1572864, v79);
        v29 = v33;
        if ( !v33 )
          goto LABEL_70;
        v27 = v33;
        Length = v31;
        v12 = KeyHandle;
        v34 = NtQueryValueKey(KeyHandle, &String, KeyValuePartialInformation, v33, Length, &v79);
        if ( v34 >= 0 )
          goto LABEL_52;
        if ( v34 != -2147483643 )
          goto LABEL_68;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v27);
      }
    }
    v29 = 0LL;
LABEL_52:
    v30 = *((_DWORD *)v27 + 1);
    if ( ((v30 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v30 == 4 )
      {
        if ( *((_DWORD *)v27 + 2) == 4 )
        {
          v79 = 4;
          Value = *((_DWORD *)v27 + 3);
        }
      }
      else if ( v30 == 1 && ((unsigned __int8)&Value & 3) == 0 )
      {
        v79 = 4;
        String.Buffer = (wchar_t *)(v27 + 12);
        String.Length = *((_WORD *)v27 + 4);
        String.MaximumLength = *((_WORD *)v27 + 4);
        RtlUnicodeStringToInteger(&String, 0, &Value);
      }
    }
    else if ( v30 == 4 )
    {
      v79 = *((_DWORD *)v27 + 2);
      if ( *((_DWORD *)v27 + 2) <= 4u )
        memmove(&Value, v27 + 12, *((unsigned int *)v27 + 2));
    }
LABEL_68:
    if ( v29 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v29);
LABEL_70:
      v12 = KeyHandle;
    }
  }
LABEL_71:
  if ( *(_QWORD *)(a2 + 792) < (unsigned __int64)Value )
    *(_QWORD *)(a2 + 792) = Value;
  v35 = 0LL;
  while ( 1 )
  {
    v36 = (&off_18011D350)[v35];
    Value = 0;
    RtlQueryImageFileKeyOption(v12, v36, 4, &Value, 4u, 0LL);
    v37 = (bool *)*(&off_18011D350 + v35 + 1);
    v35 += 2LL;
    *v37 = Value != 0;
    if ( v35 == 6 )
      break;
    v12 = KeyHandle;
  }
  Value = 0;
  if ( RtlInitUnicodeStringEx(&v91, L"MaxDeadActivationContexts") >= 0 )
  {
    v38 = v102;
    v39 = NtQueryValueKey(KeyHandle, &v91, KeyValuePartialInformation, v102, 0x400u, &v80);
    if ( v39 < 0 )
    {
      if ( v39 == -2147483643 )
      {
        while ( 1 )
        {
          v42 = v80;
          v43 = NtCurrentPeb()->ProcessHeap;
          if ( !v43 )
            break;
          v44 = RtlAllocateHeap(v43, NtdllBaseTag + 1572864, v80);
          v40 = v44;
          if ( !v44 )
            break;
          v38 = v44;
          v45 = NtQueryValueKey(KeyHandle, &v91, KeyValuePartialInformation, v44, v42, &v80);
          if ( v45 >= 0 )
            goto LABEL_79;
          if ( v45 != -2147483643 )
            goto LABEL_95;
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v38);
        }
      }
    }
    else
    {
      v40 = 0LL;
LABEL_79:
      v41 = *((_DWORD *)v38 + 1);
      if ( ((v41 - 3) & 0xFFFFFFFB) != 0 )
      {
        if ( v41 == 4 )
        {
          if ( *((_DWORD *)v38 + 2) == 4 )
          {
            v80 = 4;
            Value = *((_DWORD *)v38 + 3);
          }
        }
        else if ( v41 == 1 && ((unsigned __int8)&Value & 3) == 0 )
        {
          v80 = 4;
          v91.Buffer = (wchar_t *)(v38 + 12);
          v91.Length = *((_WORD *)v38 + 4);
          v91.MaximumLength = *((_WORD *)v38 + 4);
          RtlUnicodeStringToInteger(&v91, 0, &Value);
        }
      }
      else if ( v41 == 4 )
      {
        v80 = *((_DWORD *)v38 + 2);
        if ( *((_DWORD *)v38 + 2) <= 4u )
          memmove(&Value, v38 + 12, *((unsigned int *)v38 + 2));
      }
LABEL_95:
      if ( v40 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v40);
      v46 = g_SxsMaxDeadActivationContexts;
      if ( Value )
        v46 = Value;
      g_SxsMaxDeadActivationContexts = v46;
    }
  }
  v10 = v83;
  v8 = BYTE1(*(_DWORD *)(a2 + 188)) & 1;
  if ( (int)RtlQueryApplicationKeyOption(v83, KeyHandle, (__int64)L"GlobalFlag", 4LL, (__int64)&v82, 4, v74, &v86) < 0 )
    goto LABEL_109;
  v47 = v82;
  if ( (v82 & 0x2000100) == 0 )
    goto LABEL_108;
  if ( !(unsigned int)LdrpIsVerifierActivationFilterMatched(a2, v10, KeyHandle) )
  {
    v47 &= 0xFDFFFEFF;
    v82 = v47;
  }
  if ( (v47 & 0x2000100) == 0 )
    goto LABEL_108;
  if ( (int)LdrpQueryAndUpdateVerifierLaunchCounter(v87, &v88) >= 0 )
  {
    if ( !v88 )
    {
      v47 &= 0xFDFFFEFF;
      v82 = v47;
    }
LABEL_108:
    *(_DWORD *)(a2 + 188) = v47;
  }
LABEL_109:
  if ( (int)RtlQueryApplicationKeyOption(v10, KeyHandle, (__int64)L"GlobalFlag2", 4LL, (__int64)&v82, 4, v75, 0LL) >= 0 )
    *(_DWORD *)(a2 + 1988) = v82;
  v9 = v84;
  v6 = v87;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) != 0 )
    v11 = 0;
  else
    v86 = 0LL;
LABEL_114:
  LOBYTE(v48) = LdrControlFlowGuardEnforced();
  if ( v48 )
    v9 |= 1u;
  RtlSetLowFragHeapGlobalFlags(v9, *(unsigned int *)(*(_QWORD *)(a2 + 32) + 8LL));
  if ( !v11 || LdrpIsSecureProcess || (MEMORY[0x7FFE03A0] & 1) == 0 )
    goto LABEL_150;
  if ( (int)AVrfOpenCurrentUserImageFileOptionsKey(v6, v49, &Handle) < 0 )
  {
    Handle = 0LL;
    goto LABEL_150;
  }
  v50 = Handle;
  v51 = 0LL;
  v52 = RtlInitUnicodeStringEx(&v92, L"GlobalFlag");
  if ( v52 < 0 )
  {
LABEL_147:
    if ( v52 >= 0 )
    {
      *(_DWORD *)(a2 + 188) |= v82 & 0x2000100;
      v86 = Handle;
    }
    goto LABEL_150;
  }
  v53 = v103;
  v54 = NtQueryValueKey(v50, &v92, KeyValuePartialInformation, v103, 0x400u, &v81);
  v52 = v54;
  if ( v54 >= 0 )
  {
LABEL_130:
    v59 = *((_DWORD *)v53 + 1);
    if ( ((v59 - 3) & 0xFFFFFFFB) != 0 )
    {
      if ( v59 == 4 )
      {
        if ( *((_DWORD *)v53 + 2) == 4 )
        {
          v81 = 4;
          v82 = *((_DWORD *)v53 + 3);
        }
        else
        {
          v52 = -1073741820;
        }
        goto LABEL_144;
      }
      if ( v59 != 1 )
      {
LABEL_136:
        v52 = -1073741788;
        goto LABEL_144;
      }
      if ( ((unsigned __int8)&v82 & 3) != 0 )
      {
        v52 = -2147483646;
      }
      else
      {
        v81 = 4;
        v92.Buffer = (wchar_t *)(v53 + 12);
        v92.Length = *((_WORD *)v53 + 4);
        v92.MaximumLength = *((_WORD *)v53 + 4);
        v52 = RtlUnicodeStringToInteger(&v92, 0, &v82);
      }
    }
    else
    {
      if ( v59 != 4 )
        goto LABEL_136;
      v81 = *((_DWORD *)v53 + 2);
      if ( *((_DWORD *)v53 + 2) > 4u )
        v52 = -2147483643;
      else
        memmove(&v82, v53 + 12, *((unsigned int *)v53 + 2));
    }
LABEL_144:
    if ( v51 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v51);
      v10 = v83;
    }
    goto LABEL_147;
  }
  if ( v54 != -2147483643 )
    goto LABEL_147;
  while ( 1 )
  {
    v55 = v81;
    v56 = NtCurrentPeb()->ProcessHeap;
    if ( !v56 )
      break;
    v57 = RtlAllocateHeap(v56, NtdllBaseTag + 1572864, v81);
    v51 = v57;
    if ( !v57 )
      break;
    v53 = v57;
    v58 = NtQueryValueKey(v50, &v92, KeyValuePartialInformation, v57, v55, &v81);
    v52 = v58;
    if ( v58 >= 0 )
    {
      v10 = v83;
      goto LABEL_130;
    }
    if ( v58 != -2147483643 )
    {
      v10 = v83;
      goto LABEL_144;
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v53);
  }
  v10 = v83;
LABEL_150:
  v26 = 0;
  if ( (*(_DWORD *)(a2 + 188) & 0x2000100) == 0 && !(unsigned __int8)LdrpPayloadRestrictionMitigationsEnabled() )
  {
    if ( !v10 && !KeyHandle )
    {
      if ( *(_BYTE *)(a2 + 2) )
      {
        v60 = *(_QWORD *)(a2 + 32);
        v94.Buffer = (wchar_t *)&v104;
        *(_DWORD *)&v94.Length = 0x200000;
        if ( RtlQueryEnvironmentVariable_U(*(PVOID *)(v60 + 128), (PUNICODE_STRING)&stru_18011D3B0, &v94) < 0
          || (v26 = RtlUnicodeStringToInteger(&v94, 0, &Value), v26 < 0)
          || !Value )
        {
          *(_DWORD *)(a2 + 188) |= 0x70u;
        }
      }
    }
    goto LABEL_159;
  }
  v26 = LdrpInitializeApplicationVerifierPackage(v87, a2, v8, v86, v96, v95);
  if ( v26 >= 0 )
  {
LABEL_159:
    if ( (*(_BYTE *)(a2 + 1988) & 1) != 0 )
      *(_DWORD *)(a2 + 1984) |= 1u;
    goto LABEL_161;
  }
  v61 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      8197,
      "LdrpInitializeExecutionOptions",
      0,
      "Initializing the application verifier package failed with status 0x%08lx\n",
      v26);
    v61 = LdrpDebugFlags;
  }
  if ( (v61 & 0x10) != 0 )
    __debugbreak();
LABEL_161:
  if ( v26 >= 0 )
  {
    LdrpQueryIllegalCWDDevices(KeyHandle);
    goto LABEL_172;
  }
LABEL_168:
  v62 = v93;
  if ( *v93 )
  {
    NtClose(*v93);
    *v62 = 0LL;
  }
  v63 = v97;
  if ( *v97 )
  {
    NtClose(*v97);
    *v63 = 0LL;
  }
LABEL_172:
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)v26;
}
