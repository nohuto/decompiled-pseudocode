/*
 * XREFs of _RtlpAssemblyStorageMapResolutionDefaultCallback@12 @ 0x4B2E2BE0
 * Callers:
 *     _RtlpResolveAssemblyStorageMapEntry@20 @ 0x4B2E28E9 (_RtlpResolveAssemblyStorageMapEntry@20.c)
 * Callees:
 *     _RtlGetNtSystemRoot@0 @ 0x4B2C0180 (_RtlGetNtSystemRoot@0.c)
 *     _RtlDoesFileExists_UEx@8 @ 0x4B2E3164 (_RtlDoesFileExists_UEx@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwEnumerateKey@24 @ 0x4B2F2CA0 (_ZwEnumerateKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpGetAssemblyStorageMapRootLocation@12 @ 0x4B33E112 (_RtlpGetAssemblyStorageMapRootLocation@12.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

NTSTATUS __stdcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, int a2, NTSTATUS *a3)
{
  int v3; // eax
  NTSTATUS result; // eax
  size_t v5; // edi
  wchar_t *Buffer; // ecx
  char *v7; // esi
  char *v8; // edi
  __int16 v9; // ax
  int v10; // edx
  int v11; // ecx
  const WCHAR *NtSystemRoot; // eax
  size_t Length; // edx
  unsigned int v14; // ecx
  _DWORD *v15; // edi
  int v16; // eax
  HANDLE v17; // ecx
  UNICODE_STRING DestinationString; // [esp+Ch] [ebp-25Ch] BYREF
  NTSTATUS v19; // [esp+14h] [ebp-254h] BYREF
  size_t v20; // [esp+18h] [ebp-250h]
  _WORD v21[2]; // [esp+1Ch] [ebp-24Ch] BYREF
  char *v22; // [esp+20h] [ebp-248h]
  int v23; // [esp+24h] [ebp-244h] BYREF
  _DWORD v24[6]; // [esp+28h] [ebp-240h] BYREF
  char v25[12]; // [esp+40h] [ebp-228h] BYREF
  unsigned int v26; // [esp+4Ch] [ebp-21Ch]
  char v27; // [esp+50h] [ebp-218h] BYREF

  if ( a1 == 1 )
  {
    v24[0] = 24;
    v24[3] = 64;
    v19 = 0;
    v24[1] = 0;
    v24[2] = &dword_4B281338;
    v24[4] = 0;
    v24[5] = 0;
    v16 = ZwOpenKey(&v19, 8, v24);
    *(_DWORD *)&DestinationString.Length = v16;
    if ( v16 >= 0 || v16 == -1073741772 || v16 == -1073741431 )
    {
      result = v19;
      *(_DWORD *)(a2 + 24) = -1;
      *(_DWORD *)(a2 + 8) = result;
      return result;
    }
    result = DbgPrintEx(51, 0, "SXS: Unable to open registry key %wZ Status = 0x%08lx\n", &dword_4B281338, v16);
    *(_BYTE *)(a2 + 28) = 1;
    goto LABEL_36;
  }
  if ( a1 != 2 )
  {
    result = a1 - 4;
    if ( a1 == 4 && *(_DWORD *)a2 )
      return NtClose(*(HANDLE *)a2);
    return result;
  }
  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    if ( v3 == 1 )
    {
      NtSystemRoot = (const WCHAR *)RtlGetNtSystemRoot();
      RtlInitUnicodeString(&DestinationString, NtSystemRoot);
      Length = DestinationString.Length;
      v14 = *(unsigned __int16 *)(a2 + 14);
      *(_WORD *)(a2 + 12) = 0;
      result = Length + 16;
      if ( Length + 16 <= v14 )
      {
        memcpy(*(void **)(a2 + 16), DestinationString.Buffer, Length);
        v15 = (_DWORD *)(*(_DWORD *)(a2 + 16) + DestinationString.Length);
        *v15++ = *(_DWORD *)L"\\WinSxS\\";
        *v15++ = *(_DWORD *)L"inSxS\\";
        *v15 = *(_DWORD *)L"SxS\\";
        v15[1] = *(_DWORD *)L"S\\";
        result = *(_DWORD *)&DestinationString.Length + 16;
        goto LABEL_10;
      }
      goto LABEL_23;
    }
    v17 = *(HANDLE *)a2;
    result = v3 - 2;
    *(_DWORD *)&DestinationString.Length = v17;
    v23 = 0;
    v20 = result;
    if ( !v17 )
      goto LABEL_33;
    result = ZwEnumerateKey(v17, result, 0, v25, 544, &v23);
    v19 = result;
    if ( result < 0 )
    {
      if ( result != -2147483622 )
      {
        result = DbgPrintEx(
                   51,
                   0,
                   "SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n",
                   v20,
                   result);
        *(_BYTE *)(a2 + 8) = 1;
        if ( !a3 )
          return result;
        result = v19;
        goto LABEL_38;
      }
LABEL_33:
      *(_BYTE *)(a2 + 9) = 1;
      return result;
    }
    result = v26;
    if ( v26 > 0xFFFE )
    {
LABEL_21:
      *(_BYTE *)(a2 + 8) = 1;
      if ( a3 )
        *a3 = -1073741562;
      return result;
    }
    v21[0] = v26;
    v21[1] = v26;
    v22 = &v27;
    result = RtlpGetAssemblyStorageMapRootLocation(a2 + 12);
    *(_DWORD *)&DestinationString.Length = result;
    if ( result >= 0 )
      return result;
    result = DbgPrintEx(
               51,
               0,
               "SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
               v21,
               result);
    *(_BYTE *)(a2 + 8) = 1;
LABEL_36:
    if ( !a3 )
      return result;
    result = *(_DWORD *)&DestinationString.Length;
LABEL_38:
    *a3 = result;
    return result;
  }
  result = (NTSTATUS)NtCurrentPeb()->ProcessParameters;
  v5 = *(unsigned __int16 *)(result + 56);
  v20 = v5;
  if ( v5 + 16 > 0xFFFE )
    goto LABEL_21;
  result = *(unsigned __int16 *)(a2 + 14);
  if ( v5 + 16 > result )
  {
LABEL_23:
    *(_BYTE *)(a2 + 8) = 1;
    if ( a3 )
      *a3 = -1073741789;
    return result;
  }
  Buffer = NtCurrentPeb()->ProcessParameters->ImagePathName.Buffer;
  if ( (NtCurrentPeb()->ProcessParameters->Flags & 1) == 0 )
    Buffer = (wchar_t *)((char *)Buffer + (unsigned int)NtCurrentPeb()->ProcessParameters);
  v7 = *(char **)(a2 + 16);
  memcpy(v7, Buffer, v5);
  v8 = &v7[v5];
  v9 = v20 + 14;
  LOBYTE(v10) = 1;
  *(_DWORD *)v8 = *(_DWORD *)L".Local\\";
  v8 += 4;
  *(_DWORD *)v8 = *(_DWORD *)L"ocal\\";
  v8 += 4;
  *(_DWORD *)v8 = *(_DWORD *)L"al\\";
  *((_DWORD *)v8 + 1) = *(_DWORD *)L"\\";
  v11 = *(_DWORD *)(a2 + 16);
  *(_WORD *)(a2 + 12) = v9;
  result = RtlDoesFileExists_UEx(v11, v10);
  if ( !(_BYTE)result )
  {
    result = 0;
LABEL_10:
    *(_WORD *)(a2 + 12) = result;
  }
  return result;
}
