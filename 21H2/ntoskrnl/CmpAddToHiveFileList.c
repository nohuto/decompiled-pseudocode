/*
 * XREFs of CmpAddToHiveFileList @ 0x1406E36C4
 * Callers:
 *     CmpLoadKeyCommon @ 0x14020AABC (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x140833B80 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x14090D4E8 (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwQueryObject @ 0x14041B960 (ZwQueryObject.c)
 *     ZwCreateKey @ 0x14041BB00 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x14041C360 (ZwSetValueKey.c)
 */

__int64 __fastcall CmpAddToHiveFileList(__int64 a1, __int64 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rdi
  NTSTATUS v6; // ebx
  ULONG v7; // eax
  __int16 *Luid; // rcx
  ULONG DataSize; // eax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  __int16 v13; // [rsp+B8h] [rbp+38h] BYREF
  ULONG ReturnLength; // [rsp+C0h] [rbp+40h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+48h] BYREF

  ReturnLength = 0;
  DestinationString = 0LL;
  v13 = 0;
  memset(&ObjectAttributes, 0, 44);
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
  v6 = ZwQueryObject(*(HANDLE *)(a1 + 1544), ObjectNameInformation, TransientPoolWithTag, 0x200u, &ReturnLength);
  v7 = ReturnLength - 16;
  ReturnLength -= 16;
  if ( v6 >= 0 )
  {
    Luid = (__int16 *)TransientPoolWithTag->Privilege[0].Luid;
    Luid[(unsigned __int64)v7 >> 1] = 0;
    DataSize = ReturnLength + 2;
LABEL_6:
    ReturnLength = DataSize;
    v6 = ZwSetValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(a1 + 1856), 0, 1u, Luid, DataSize);
  }
  CmSiFreeMemory(TransientPoolWithTag);
  return (unsigned int)v6;
}
