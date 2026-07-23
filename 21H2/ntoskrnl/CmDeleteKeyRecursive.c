/*
 * XREFs of CmDeleteKeyRecursive @ 0x140876EF0
 * Callers:
 *     CmDeleteKeyRecursive @ 0x140876EF0 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140877D78 (CmpMoveBiosAliasTable.c)
 *     CmpCreateHardwareProfiles @ 0x140A59540 (CmpCreateHardwareProfiles.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x1403D83E0 (wcscpy_s.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     ZwDeleteKey @ 0x1403FC000 (ZwDeleteKey.c)
 *     CmDeleteKeyRecursive @ 0x140876EF0 (CmDeleteKeyRecursive.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __fastcall CmDeleteKeyRecursive(void *a1, const WCHAR *a2, __int64 a3, __int64 a4, ULONG ResultLength)
{
  NTSTATUS result; // eax
  __int64 v8; // rdx
  wchar_t *PoolWithTag; // rax
  wchar_t *v10; // r14
  __int64 v11; // rdx
  NTSTATUS v12; // ebx
  NTSTATUS v13; // edi
  ULONG Length; // [rsp+20h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ResultLength = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    do
    {
      v12 = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, (PVOID)a3, 0xFEu, &ResultLength);
      if ( v12 < 0 )
        break;
      v8 = -1LL;
      *(_WORD *)(a3 + 2 * ((unsigned __int64)*(unsigned int *)(a3 + 12) >> 1) + 16) = 0;
      do
        ++v8;
      while ( *(_WORD *)(a3 + 2 * v8 + 16) );
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v8 + 2, 0x20204D43u);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v12 = -1073741670;
        break;
      }
      v11 = -1LL;
      do
        ++v11;
      while ( *(_WORD *)(a3 + 2 * v11 + 16) );
      wcscpy_s(PoolWithTag, v11 + 1, (const wchar_t *)(a3 + 16));
      LOBYTE(Length) = 1;
      v12 = CmDeleteKeyRecursive((int)KeyHandle, (int)v10, a3, 256, Length);
      ExFreePoolWithTag(v10, 0);
    }
    while ( v12 >= 0 );
    v13 = 0;
    if ( v12 != -2147483622 )
      v13 = v12;
    if ( v13 >= 0 )
      v13 = ZwDeleteKey(KeyHandle);
    ZwClose(KeyHandle);
    return v13;
  }
  return result;
}
