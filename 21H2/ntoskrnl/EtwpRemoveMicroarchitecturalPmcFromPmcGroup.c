/*
 * XREFs of EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093AD78
 * Callers:
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x14093B010 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcsncmp @ 0x1403D41B0 (wcsncmp.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1403FA840 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     ZwDeleteKey @ 0x1403FC000 (ZwDeleteKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpRemoveMicroarchitecturalPmcFromPmcGroup(PCWSTR SourceString, wchar_t *Str1, size_t MaxCount)
{
  size_t v3; // r12
  __int64 v6; // rax
  SIZE_T v7; // r14
  wchar_t *PoolWithTag; // rdi
  NTSTATUS v10; // ebx
  int v11; // esi
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v17[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v18; // [rsp+A8h] [rbp-58h]
  _DWORD KeyInformation[136]; // [rsp+B0h] [rbp-50h] BYREF

  v3 = (unsigned int)MaxCount;
  v18 = 0LL;
  memset(v17, 0, sizeof(v17));
  memset(KeyInformation, 0, 0x218uLL);
  DestinationString = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  v6 = -1LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  Handle = 0LL;
  ResultLength = 0;
  do
    ++v6;
  while ( SourceString[v6] );
  v7 = 2LL * (unsigned int)(v6 + v3 + 2);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v7, 0x50777445u);
  if ( !PoolWithTag )
    return 3221225495LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v10 < 0 )
    goto LABEL_21;
  v11 = -1;
  while ( 1 )
  {
    v10 = ZwEnumerateKey(KeyHandle, ++v11, KeyBasicInformation, KeyInformation, 0x216u, &ResultLength);
    if ( v10 < 0 || KeyInformation[3] != 2 * v3 )
    {
      if ( v10 == -1073741789 || v10 == -2147483643 )
        v10 = 0;
      goto LABEL_15;
    }
    *((_WORD *)&KeyInformation[4] + v3) = 0;
    if ( !wcsncmp(Str1, (const wchar_t *)&KeyInformation[4], v3) )
      break;
LABEL_15:
    if ( v10 < 0 )
      goto LABEL_16;
  }
  RtlStringCbPrintfW(PoolWithTag, v7, L"%ws\\%ws", SourceString, &KeyInformation[4]);
  RtlInitUnicodeString(&DestinationString, PoolWithTag);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwOpenKey(&Handle, 0xF003Fu, &ObjectAttributes);
  if ( v10 < 0 )
    goto LABEL_20;
  ZwDeleteKey(Handle);
  ZwClose(Handle);
LABEL_16:
  if ( v10 >= 0 )
  {
    v10 = ZwQueryKey(KeyHandle, KeyCachedInformation, v17, 0x28u, &ResultLength);
    if ( v10 >= 0 && !HIDWORD(v17[0]) )
      ZwDeleteKey(KeyHandle);
  }
LABEL_20:
  ZwClose(KeyHandle);
LABEL_21:
  ExFreePoolWithTag(PoolWithTag, 0x50777445u);
  return (unsigned int)v10;
}
