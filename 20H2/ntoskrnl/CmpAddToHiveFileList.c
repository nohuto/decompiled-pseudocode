/*
 * XREFs of CmpAddToHiveFileList @ 0x1406DF078
 * Callers:
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x14079D1F0 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x14087F5C8 (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x140A58954 (CmInitSystem1.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140204C50 (CmpAllocateTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     ZwQueryObject @ 0x1403F8370 (ZwQueryObject.c)
 *     ZwCreateKey @ 0x1403F8510 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1403F8D70 (ZwSetValueKey.c)
 */

__int64 __fastcall CmpAddToHiveFileList(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rdi
  NTSTATUS v6; // ebx
  ULONG v7; // edx
  __int16 *Luid; // rcx
  ULONG DataSize; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  __int16 v13; // [rsp+B8h] [rbp+38h] BYREF
  ULONG ReturnLength; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+48h] BYREF

  DestinationString = 0LL;
  ReturnLength = 0;
  v13 = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  if ( !CmpHiveFileListHandle )
  {
    RtlInitUnicodeString(&DestinationString, L"\\registry\\machine\\system\\currentcontrolset\\control\\hivelist");
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL);
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( _InterlockedCompareExchange64(
           (volatile signed __int64 *)&CmpHiveFileListHandle,
           (signed __int64)KeyHandle,
           0LL) )
    {
      ZwClose(KeyHandle);
    }
  }
  TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, 0x202uLL, 0x62714D43u, a4);
  if ( !TransientPoolWithTag )
    return (unsigned int)-1073741801;
  if ( (*(_DWORD *)(a1 + 160) & 1) != 0 )
  {
    Luid = &v13;
    DataSize = 2;
    goto LABEL_6;
  }
  v6 = ZwQueryObject(*(HANDLE *)(a1 + 1536), ObjectNameInformation, TransientPoolWithTag, 0x200u, &ReturnLength);
  v7 = ReturnLength - 16;
  ReturnLength -= 16;
  if ( v6 >= 0 )
  {
    Luid = (__int16 *)TransientPoolWithTag->Privilege[0].Luid;
    Luid[(unsigned __int64)v7 >> 1] = 0;
    DataSize = ReturnLength + 2;
LABEL_6:
    ReturnLength = DataSize;
    v6 = ZwSetValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(a1 + 1848), 0, 1u, Luid, DataSize);
  }
  CmSiFreeMemory(TransientPoolWithTag);
  return (unsigned int)v6;
}
