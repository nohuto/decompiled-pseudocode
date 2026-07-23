/*
 * XREFs of EtwpFindMatchingPmcRegistryGroup @ 0x14093A320
 * Callers:
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x140939650 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x14093B010 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x1403FA920 (ZwCreateKey.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwpGetPmcCpuHierarchyRegistry @ 0x14093A634 (EtwpGetPmcCpuHierarchyRegistry.c)
 */

__int64 __fastcall EtwpFindMatchingPmcRegistryGroup(__int64 a1, int a2, __int64 a3, unsigned int a4, wchar_t *pszDest)
{
  size_t v6; // r12
  char v8; // di
  int v9; // esi
  NTSTATUS v10; // ebx
  unsigned __int64 v11; // rcx
  __int64 result; // rax
  ULONG ResultLength[2]; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE DestinationString[3]; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _DWORD KeyInformation[136]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v18; // [rsp+2C8h] [rbp+1C0h] BYREF
  unsigned int v19; // [rsp+2D0h] [rbp+1C8h]

  v6 = a4;
  KeyHandle = 0LL;
  memset(KeyInformation, 0, 0x218uLL);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength[0] = 0;
  ResultLength[1] = 0;
  v8 = 0;
  memset(DestinationString, 0, sizeof(DestinationString));
  RtlInitUnicodeString(
    (PUNICODE_STRING)&DestinationString[1],
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource");
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwCreateKey(DestinationString, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v9 = -1;
  while ( 1 )
  {
    v10 = ZwEnumerateKey(DestinationString[0], ++v9, KeyBasicInformation, KeyInformation, 0x216u, &ResultLength[1]);
    if ( v10 < 0 || KeyInformation[3] >= 0xFFu )
    {
      if ( v10 == -1073741789 || v10 == -2147483643 )
        v10 = 0;
      goto LABEL_16;
    }
    *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
    RtlStringCbPrintfW(
      pszDest,
      v6,
      L"%ws\\%ws",
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI\\ProfileSource",
      &KeyInformation[4]);
    RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], pszDest);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&DestinationString[1];
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      EtwpGetPmcCpuHierarchyRegistry(KeyHandle, ResultLength, &v18);
      ZwClose(KeyHandle);
      if ( ResultLength[0] == a2 )
      {
        v11 = v18 - *(_QWORD *)a3;
        if ( v18 == *(_QWORD *)a3 )
          v11 = v19 - (unsigned __int64)*(unsigned int *)(a3 + 8);
        if ( !v11 )
          break;
      }
    }
LABEL_16:
    if ( v10 < 0 )
      goto LABEL_10;
  }
  v8 = 1;
LABEL_10:
  ZwClose(DestinationString[0]);
  result = 0LL;
  if ( !v8 )
  {
    memset(pszDest, 0, v6);
    return 3221225473LL;
  }
  return result;
}
