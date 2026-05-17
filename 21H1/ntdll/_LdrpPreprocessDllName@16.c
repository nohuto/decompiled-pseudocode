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

int __fastcall LdrpPreprocessDllName(unsigned __int16 *a1, unsigned __int16 *a2, int a3, int *a4)
{
  unsigned __int16 *v4; // ebx
  int *v6; // ecx
  char v7; // al
  int appended; // esi
  int v9; // eax
  bool v10; // al
  int **v11; // ecx
  int v12; // ebx
  bool v13; // zf
  unsigned int v14; // edx
  unsigned __int16 *v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  unsigned __int16 *v19; // eax
  unsigned int v20; // edx
  unsigned __int16 *v21; // eax
  int v22; // ecx
  unsigned int v23; // ecx
  _WORD *i; // eax
  int v26; // eax
  const WCHAR *NtSystemRoot; // eax
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // eax
  int FullPath; // eax
  const char *v30; // eax
  unsigned int v31; // esi
  struct _PEB *StringRoutine; // ecx
  UNICODE_STRING DestinationString; // [esp+10h] [ebp-28h] BYREF
  _DWORD v34[2]; // [esp+18h] [ebp-20h] BYREF
  _WORD v35[4]; // [esp+20h] [ebp-18h] BYREF
  struct _PEB *v36; // [esp+28h] [ebp-10h]
  int v37; // [esp+2Ch] [ebp-Ch] BYREF
  unsigned __int16 *v38; // [esp+30h] [ebp-8h]
  bool v39; // [esp+34h] [ebp-4h]
  char v40; // [esp+35h] [ebp-3h]
  char v41; // [esp+36h] [ebp-2h] BYREF
  char v42; // [esp+37h] [ebp-1h]

  v4 = a1;
  v38 = a1;
  v39 = RtlWow64EnableFsRedirectionEx(0, &v37) >= 0;
  v6 = a4;
  v7 = 0;
  appended = 0;
  v42 = 0;
  if ( (*a4 & 0x800008) != 0 )
    goto LABEL_17;
  v42 = 0;
  v36 = NtCurrentPeb();
  v40 = 1;
  LdrpLogDllState(5328);
  appended = ApiSetResolveToHost(a3 != 0 ? a3 + 44 : 0, &v41, v35);
  if ( appended >= 0 && v41 )
  {
    if ( v35[0] )
      v9 = 5329;
    else
      v9 = 5330;
  }
  else
  {
    v9 = 5331;
  }
  LdrpLogDllState(v9);
  if ( !v41 )
    goto LABEL_6;
  if ( v35[0] )
  {
    *a2 = 0;
    NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot();
    RtlInitUnicodeString(&DestinationString, NtSystemRoot);
    LdrpAppendUnicodeStringToFilenameBuffer(a2, &DestinationString);
    LdrpAppendUnicodeStringToFilenameBuffer(a2, &SlashSystem32SlashString);
    appended = LdrpAppendUnicodeStringToFilenameBuffer(a2, v35);
    if ( appended >= 0 )
    {
      ProcessParameters = v36->ProcessParameters;
      v10 = ProcessParameters && (ProcessParameters->Flags & 0x1000) != 0;
      v11 = (int **)a2;
      goto LABEL_7;
    }
LABEL_6:
    v10 = v40;
    v11 = (int **)v4;
LABEL_7:
    if ( appended < 0 )
      goto LABEL_80;
    if ( v10 && !LdrpIsSecureProcess )
    {
      v12 = RtlDosApplyFileIsolationRedirection_Ustr(1, v11, (int)&LdrpDefaultExtension, 0, v34, 0, 0, 0, 0);
      if ( v12 >= 0 )
      {
        v42 = 1;
        LdrpGetFullPath(v34, a2);
        LdrpFreeUnicodeString(v34);
      }
      if ( v12 != -1072365560 )
        appended = v12;
      v4 = v38;
    }
    goto LABEL_15;
  }
  appended = -1073740671;
LABEL_15:
  if ( appended < 0 )
    goto LABEL_80;
  v6 = a4;
  v7 = v42;
LABEL_17:
  v13 = *a2 == 0;
  v38 = v4;
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
        a2,
        v30);
      v6 = a4;
    }
    v26 = *v6 | 0x200;
    v13 = v42 == 0;
    *v6 = v26;
    if ( !v13 )
      *v6 = v26 | 4;
    v19 = a2;
    v38 = a2;
    goto LABEL_28;
  }
  v14 = *((_DWORD *)v4 + 1);
  v15 = (unsigned __int16 *)(v14 + *v4 - 2);
  if ( (unsigned int)v15 >= v14 )
  {
    while ( 1 )
    {
      v16 = *v15;
      if ( v16 == 92 || v16 == 47 )
        break;
      if ( (unsigned int)--v15 < v14 )
      {
        v6 = a4;
        goto LABEL_23;
      }
    }
    if ( RtlDetermineDosPathNameType_Ustr(v4) != 5 )
    {
      FullPath = LdrpGetFullPath(v4, a2);
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
    appended = LdrpAppendUnicodeStringToFilenameBuffer(a2, v4);
    goto LABEL_26;
  }
LABEL_23:
  *v6 |= 0x20u;
  appended = 0;
  v17 = *v4;
  if ( (_WORD)v17 )
  {
    v18 = *a2 + 2 + v17;
    if ( v18 <= a2[1] )
    {
LABEL_25:
      appended = 0;
      memcpy((void *)(*((_DWORD *)a2 + 1) + *a2), *((const void **)v4 + 1), *v4);
      *a2 += *v4;
      *(_WORD *)(*((_DWORD *)a2 + 1) + 2 * (*a2 >> 1)) = 0;
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
    if ( *((unsigned __int16 **)a2 + 1) == a2 + 4 )
    {
      StringRoutine = (struct _PEB *)NtdllpAllocateStringRoutine(v31);
      v36 = StringRoutine;
      if ( !StringRoutine )
        goto LABEL_77;
      if ( *a2 )
      {
        memcpy(StringRoutine, *((const void **)a2 + 1), *a2);
        StringRoutine = v36;
      }
    }
    else
    {
      StringRoutine = (struct _PEB *)NtdllpReallocateStringRoutine(v31, *((_DWORD *)a2 + 1));
    }
    if ( StringRoutine )
    {
      *((_DWORD *)a2 + 1) = StringRoutine;
      a2[1] = v31;
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
    LdrStandardizeSystemPath(a2);
    v19 = v38;
  }
  v20 = *((_DWORD *)v19 + 1);
  v21 = (unsigned __int16 *)(v20 + *v19 - 2);
  if ( (unsigned int)v21 < v20 )
  {
LABEL_36:
    appended = LdrpAppendUnicodeStringToFilenameBuffer(a2, &LdrpDefaultExtension);
  }
  else
  {
    while ( 1 )
    {
      v22 = *v21;
      if ( v22 == 46 )
        break;
      if ( v22 != 47 && v22 != 92 && (unsigned int)--v21 >= v20 )
        continue;
      goto LABEL_36;
    }
    v23 = *((_DWORD *)a2 + 1);
    for ( i = (_WORD *)(v23 + *a2 - 2); (unsigned int)i >= v23; *a2 -= 2 )
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
  if ( v39 )
    RtlWow64EnableFsRedirectionEx(v37, &v37);
  return appended;
}
