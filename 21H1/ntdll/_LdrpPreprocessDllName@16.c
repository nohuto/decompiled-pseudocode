/*
 * XREFs of _LdrpPreprocessDllName@16 @ 0x4B2CB090
 * Callers:
 *     _LdrpLoadDll@16 @ 0x4B2A6B05 (_LdrpLoadDll@16.c)
 *     _LdrGetDllHandleEx@20 @ 0x4B2CABE0 (_LdrGetDllHandleEx@20.c)
 *     _LdrLoadDll@16 @ 0x4B2CDD70 (_LdrLoadDll@16.c)
 *     _LdrpLoadForwardedDll@24 @ 0x4B2CE9C0 (_LdrpLoadForwardedDll@24.c)
 *     _LdrpFindLoadedDll@12 @ 0x4B2E9CFC (_LdrpFindLoadedDll@12.c)
 *     _LdrpAddRedirectedFunction@12 @ 0x4B333F08 (_LdrpAddRedirectedFunction@12.c)
 * Callees:
 *     _LdrStandardizeSystemPath@4 @ 0x4B2BFCB0 (_LdrStandardizeSystemPath@4.c)
 *     _RtlGetNtSystemRoot@0 @ 0x4B2C0180 (_RtlGetNtSystemRoot@0.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 *     _RtlWow64EnableFsRedirectionEx@8 @ 0x4B2CC460 (_RtlWow64EnableFsRedirectionEx@8.c)
 *     _LdrpAppendUnicodeStringToFilenameBuffer@8 @ 0x4B2CC7A7 (_LdrpAppendUnicodeStringToFilenameBuffer@8.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _ApiSetResolveToHost@20 @ 0x4B2D012C (_ApiSetResolveToHost@20.c)
 *     _LdrpGetFullPath@8 @ 0x4B2D2394 (_LdrpGetFullPath@8.c)
 *     _LdrpFreeUnicodeString@4 @ 0x4B2DE399 (_LdrpFreeUnicodeString@4.c)
 *     _RtlDetermineDosPathNameType_Ustr@4 @ 0x4B2E42FE (_RtlDetermineDosPathNameType_Ustr@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _NtdllpReallocateStringRoutine@8 @ 0x4B333B47 (_NtdllpReallocateStringRoutine@8.c)
 */

int __fastcall LdrpPreprocessDllName(PUNICODE_STRING OriginalName, PUNICODE_STRING SystemPath, int a3, int *a4)
{
  PUNICODE_STRING v4; // ebx
  int *v6; // ecx
  char v7; // al
  int appended; // esi
  int v9; // eax
  bool v10; // al
  _UNICODE_STRING *v11; // ecx
  NTSTATUS v12; // ebx
  bool v13; // zf
  wchar_t *Buffer; // edx
  wchar_t *v15; // eax
  int v16; // ecx
  int Length; // eax
  unsigned int v18; // ecx
  PUNICODE_STRING v19; // eax
  wchar_t *v20; // edx
  wchar_t *v21; // eax
  int v22; // ecx
  wchar_t *v23; // ecx
  wchar_t *i; // eax
  int v26; // eax
  const WCHAR *NtSystemRoot; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // eax
  int FullPath; // eax
  const char *v30; // eax
  unsigned int v31; // esi
  struct _PEB *StringRoutine; // ecx
  SIZE_T v33; // [esp-8h] [ebp-40h]
  size_t v34; // [esp-4h] [ebp-3Ch]
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-28h] BYREF
  _UNICODE_STRING DynamicString; // [esp+18h] [ebp-20h] BYREF
  _WORD v37[4]; // [esp+20h] [ebp-18h] BYREF
  struct _PEB *v38; // [esp+28h] [ebp-10h]
  PVOID OldFsRedirectionLevel; // [esp+2Ch] [ebp-Ch] BYREF
  PUNICODE_STRING v40; // [esp+30h] [ebp-8h]
  bool v41; // [esp+34h] [ebp-4h]
  char v42; // [esp+35h] [ebp-3h]
  char v43; // [esp+36h] [ebp-2h] BYREF
  char v44; // [esp+37h] [ebp-1h]

  v4 = OriginalName;
  v40 = OriginalName;
  v41 = RtlWow64EnableFsRedirectionEx(0, &OldFsRedirectionLevel) >= 0;
  v6 = a4;
  v7 = 0;
  appended = 0;
  v44 = 0;
  if ( (*a4 & 0x800008) != 0 )
    goto LABEL_17;
  v44 = 0;
  v38 = NtCurrentPeb();
  v42 = 1;
  LdrpLogDllState(5328);
  appended = ApiSetResolveToHost(a3 != 0 ? a3 + 44 : 0, &v43, v37);
  if ( appended >= 0 && v43 )
  {
    if ( v37[0] )
      v9 = 5329;
    else
      v9 = 5330;
  }
  else
  {
    v9 = 5331;
  }
  LdrpLogDllState(v9);
  if ( !v43 )
    goto LABEL_6;
  if ( v37[0] )
  {
    SystemPath->Length = 0;
    NtSystemRoot = RtlGetNtSystemRoot();
    RtlInitUnicodeString(&DestinationString, NtSystemRoot);
    LdrpAppendUnicodeStringToFilenameBuffer(SystemPath, &DestinationString);
    LdrpAppendUnicodeStringToFilenameBuffer(SystemPath, &SlashSystem32SlashString);
    appended = LdrpAppendUnicodeStringToFilenameBuffer(SystemPath, v37);
    if ( appended >= 0 )
    {
      ProcessParameters = v38->ProcessParameters;
      v10 = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
      v11 = SystemPath;
      goto LABEL_7;
    }
LABEL_6:
    v10 = v42;
    v11 = v4;
LABEL_7:
    if ( appended < 0 )
      goto LABEL_80;
    if ( v10 && !LdrpIsSecureProcess )
    {
      v12 = RtlDosApplyFileIsolationRedirection_Ustr(
              1u,
              v11,
              (PUNICODE_STRING)&LdrpDefaultExtension,
              0,
              &DynamicString,
              0,
              0,
              0,
              0);
      if ( v12 >= 0 )
      {
        v44 = 1;
        LdrpGetFullPath(&DynamicString, SystemPath);
        LdrpFreeUnicodeString(&DynamicString);
      }
      if ( v12 != -1072365560 )
        appended = v12;
      v4 = v40;
    }
    goto LABEL_15;
  }
  appended = -1073740671;
LABEL_15:
  if ( appended < 0 )
    goto LABEL_80;
  v6 = a4;
  v7 = v44;
LABEL_17:
  v13 = SystemPath->Length == 0;
  v40 = v4;
  if ( !v13 )
  {
    if ( (ShowSnaps & 5) != 0 )
    {
      v13 = v7 == 0;
      v30 = "SxS";
      if ( v13 )
        v30 = "API set";
      LdrpLogDbgPrint(
        "minkernel\\ntdll\\ldrutil.c",
        2680,
        "LdrpPreprocessDllName",
        2,
        "DLL %wZ was redirected to %wZ by %s\n",
        v4,
        SystemPath,
        v30);
      v6 = a4;
    }
    v26 = *v6 | 0x200;
    v13 = v44 == 0;
    *v6 = v26;
    if ( !v13 )
      *v6 = v26 | 4;
    v19 = SystemPath;
    v40 = SystemPath;
    goto LABEL_28;
  }
  Buffer = v4->Buffer;
  v15 = (wchar_t *)((char *)Buffer + v4->Length - 2);
  if ( v15 >= Buffer )
  {
    while ( 1 )
    {
      v16 = *v15;
      if ( v16 == 92 || v16 == 47 )
        break;
      if ( --v15 < Buffer )
      {
        v6 = a4;
        goto LABEL_23;
      }
    }
    if ( RtlDetermineDosPathNameType_Ustr(v4) != 5 )
    {
      FullPath = LdrpGetFullPath(v4, SystemPath);
      v6 = a4;
      appended = FullPath;
      v19 = v4;
      if ( appended >= 0 )
      {
        *a4 |= 0x600u;
        goto LABEL_28;
      }
LABEL_80:
      if ( (ShowSnaps & 3) != 0 )
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrutil.c",
          2738,
          "LdrpPreprocessDllName",
          0,
          "LdrpPreprocessDllName for DLL %wZ failed with status 0x%08lx\n",
          v4,
          appended);
      if ( (ShowSnaps & 0x10) != 0 )
        __debugbreak();
      goto LABEL_41;
    }
    appended = LdrpAppendUnicodeStringToFilenameBuffer(SystemPath, v4);
    goto LABEL_26;
  }
LABEL_23:
  *v6 |= 0x20u;
  appended = 0;
  Length = v4->Length;
  if ( (_WORD)Length )
  {
    v18 = SystemPath->Length + 2 + Length;
    if ( v18 <= SystemPath->MaximumLength )
    {
LABEL_25:
      appended = 0;
      LODWORD(v34) = v4->Length;
      memcpy((char *)SystemPath->Buffer + SystemPath->Length, v4->Buffer, v34);
      SystemPath->Length += v4->Length;
      SystemPath->Buffer[SystemPath->Length >> 1] = 0;
LABEL_26:
      v6 = a4;
      goto LABEL_27;
    }
    if ( v18 > 0xFFFE )
    {
      appended = -1073741562;
      goto LABEL_26;
    }
    v31 = (v18 + 63) & 0xFFFFFFC0;
    if ( v31 > 0xFFFE )
      v31 = 65534;
    if ( (PUNICODE_STRING)SystemPath->Buffer == &SystemPath[1] )
    {
      StringRoutine = (struct _PEB *)NtdllpAllocateStringRoutine(v31);
      v38 = StringRoutine;
      if ( !StringRoutine )
        goto LABEL_77;
      if ( SystemPath->Length )
      {
        LODWORD(v34) = SystemPath->Length;
        memcpy(StringRoutine, SystemPath->Buffer, v34);
        StringRoutine = v38;
      }
    }
    else
    {
      HIDWORD(v33) = SystemPath->Buffer;
      LODWORD(v33) = v31;
      StringRoutine = (struct _PEB *)NtdllpReallocateStringRoutine(v33);
    }
    if ( StringRoutine )
    {
      SystemPath->Buffer = (wchar_t *)&StringRoutine->InheritedAddressSpace;
      SystemPath->MaximumLength = v31;
      goto LABEL_25;
    }
LABEL_77:
    appended = -1073741801;
    goto LABEL_26;
  }
LABEL_27:
  v19 = v4;
LABEL_28:
  if ( appended < 0 )
    goto LABEL_80;
  if ( (*v6 & 0x200) != 0 )
  {
    LdrStandardizeSystemPath(SystemPath);
    v19 = v40;
  }
  v20 = v19->Buffer;
  v21 = (wchar_t *)((char *)v20 + v19->Length - 2);
  if ( v21 < v20 )
  {
LABEL_36:
    appended = LdrpAppendUnicodeStringToFilenameBuffer(SystemPath, &LdrpDefaultExtension);
  }
  else
  {
    while ( 1 )
    {
      v22 = *v21;
      if ( v22 == 46 )
        break;
      if ( v22 != 47 && v22 != 92 && --v21 >= v20 )
        continue;
      goto LABEL_36;
    }
    v23 = SystemPath->Buffer;
    for ( i = (wchar_t *)((char *)v23 + SystemPath->Length - 2); i >= v23; SystemPath->Length -= 2 )
    {
      if ( *i != 46 )
        break;
      --i;
    }
    i[1] = 0;
  }
  if ( appended < 0 )
    goto LABEL_80;
LABEL_41:
  if ( v41 )
    RtlWow64EnableFsRedirectionEx(OldFsRedirectionLevel, &OldFsRedirectionLevel);
  return appended;
}
