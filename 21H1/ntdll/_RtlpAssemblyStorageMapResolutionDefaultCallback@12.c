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

int __stdcall RtlpAssemblyStorageMapResolutionDefaultCallback(int a1, int a2, int *a3)
{
  int v3; // eax
  int result; // eax
  int v5; // edi
  wchar_t *Buffer; // ecx
  char *v7; // esi
  char *v8; // edi
  __int16 v9; // ax
  const WCHAR *v10; // ecx
  const WCHAR *NtSystemRoot; // eax
  int Length; // edx
  unsigned int v13; // ecx
  _DWORD *v14; // edi
  NTSTATUS v15; // eax
  HANDLE v16; // ecx
  size_t v17; // [esp-4h] [ebp-26Ch]
  _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-25Ch] BYREF
  HANDLE KeyHandle; // [esp+14h] [ebp-254h] BYREF
  int v20; // [esp+18h] [ebp-250h]
  int v21; // [esp+1Ch] [ebp-24Ch] BYREF
  char *v22; // [esp+20h] [ebp-248h]
  ULONG ResultLength; // [esp+24h] [ebp-244h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+28h] [ebp-240h] BYREF
  char KeyInformation[12]; // [esp+40h] [ebp-228h] BYREF
  unsigned int v26; // [esp+4Ch] [ebp-21Ch]
  char v27; // [esp+50h] [ebp-218h] BYREF

  if ( a1 == 1 )
  {
    ObjectAttributes.Length = 24;
    ObjectAttributes.Attributes = 64;
    KeyHandle = 0;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&dword_4B281338;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    v15 = ZwOpenKey(&KeyHandle, 8u, &ObjectAttributes);
    *(_DWORD *)&DestinationString.Length = v15;
    if ( v15 >= 0 || v15 == -1073741772 || v15 == -1073741431 )
    {
      result = (int)KeyHandle;
      *(_DWORD *)(a2 + 24) = -1;
      *(_DWORD *)(a2 + 8) = result;
      return result;
    }
    result = DbgPrintEx(51, 0, (int)"SXS: Unable to open registry key %wZ Status = 0x%08lx\n", (int)&dword_4B281338);
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
      NtSystemRoot = RtlGetNtSystemRoot();
      RtlInitUnicodeString(&DestinationString, NtSystemRoot);
      Length = DestinationString.Length;
      v13 = *(unsigned __int16 *)(a2 + 14);
      *(_WORD *)(a2 + 12) = 0;
      result = Length + 16;
      if ( Length + 16 <= v13 )
      {
        LODWORD(v17) = Length;
        memcpy(*(void **)(a2 + 16), DestinationString.Buffer, v17);
        v14 = (_DWORD *)(*(_DWORD *)(a2 + 16) + DestinationString.Length);
        *v14++ = *(_DWORD *)L"\\WinSxS\\";
        *v14++ = *(_DWORD *)L"inSxS\\";
        *v14 = *(_DWORD *)L"SxS\\";
        v14[1] = *(_DWORD *)L"S\\";
        result = *(_DWORD *)&DestinationString.Length + 16;
        goto LABEL_10;
      }
      goto LABEL_23;
    }
    v16 = *(HANDLE *)a2;
    result = v3 - 2;
    *(_DWORD *)&DestinationString.Length = v16;
    ResultLength = 0;
    v20 = result;
    if ( !v16 )
      goto LABEL_33;
    result = ZwEnumerateKey(v16, result, KeyBasicInformation, KeyInformation, 0x220u, &ResultLength);
    KeyHandle = (HANDLE)result;
    if ( result < 0 )
    {
      if ( result != -2147483622 )
      {
        result = DbgPrintEx(51, 0, (int)"SXS: Unable to enumerate assembly storage subkey #%lu Status = 0x%08lx\n", v20);
        *(_BYTE *)(a2 + 8) = 1;
        if ( !a3 )
          return result;
        result = (int)KeyHandle;
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
    LOWORD(v21) = v26;
    HIWORD(v21) = v26;
    v22 = &v27;
    result = RtlpGetAssemblyStorageMapRootLocation(*(_DWORD *)&DestinationString.Length, &v21, a2 + 12);
    *(_DWORD *)&DestinationString.Length = result;
    if ( result >= 0 )
      return result;
    result = DbgPrintEx(
               51,
               0,
               (int)"SXS: Attempt to get storage location from subkey %wZ failed; Status = 0x%08lx\n",
               (int)&v21);
    *(_BYTE *)(a2 + 8) = 1;
LABEL_36:
    if ( !a3 )
      return result;
    result = *(_DWORD *)&DestinationString.Length;
LABEL_38:
    *a3 = result;
    return result;
  }
  result = (int)NtCurrentPeb()->ProcessParameters;
  v5 = *(unsigned __int16 *)(result + 56);
  v20 = v5;
  if ( (unsigned int)(v5 + 16) > 0xFFFE )
    goto LABEL_21;
  result = *(unsigned __int16 *)(a2 + 14);
  if ( v5 + 16 > (unsigned int)result )
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
  LODWORD(v17) = v5;
  memcpy(v7, Buffer, v17);
  v8 = &v7[v5];
  v9 = v20 + 14;
  *(_DWORD *)v8 = *(_DWORD *)L".Local\\";
  v8 += 4;
  *(_DWORD *)v8 = *(_DWORD *)L"ocal\\";
  v8 += 4;
  *(_DWORD *)v8 = *(_DWORD *)L"al\\";
  *((_DWORD *)v8 + 1) = *(_DWORD *)L"\\";
  v10 = *(const WCHAR **)(a2 + 16);
  *(_WORD *)(a2 + 12) = v9;
  result = RtlDoesFileExists_UEx(v10);
  if ( !(_BYTE)result )
  {
    result = 0;
LABEL_10:
    *(_WORD *)(a2 + 12) = result;
  }
  return result;
}
