/*
 * XREFs of IopLiveDumpAllocateFromVMMemoryPartition @ 0x140893370
 * Callers:
 *     IopLiveDumpAllocateDumpBuffers @ 0x140892CB4 (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402D5F54 (_tlgKeywordOn.c)
 *     MmFreePagesFromMdl @ 0x14031FCB0 (MmFreePagesFromMdl.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140342750 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwOpenPartition @ 0x1403F47F0 (ZwOpenPartition.c)
 *     IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure @ 0x140502F3C (IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure.c)
 *     IopLiveDumpTraceOpenVMMemoryPartitionFailure @ 0x1405041B0 (IopLiveDumpTraceOpenVMMemoryPartitionFailure.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

PVOID __fastcall IopLiveDumpAllocateFromVMMemoryPartition(__int64 a1, __int64 a2, __int64 *a3)
{
  int v3; // eax
  PVOID v4; // r12
  __int64 PartitionNodePagesForMdl; // r15
  HANDLE *v7; // rdi
  NTSTATUS v8; // r13d
  HANDLE v9; // rcx
  unsigned int v10; // esi
  int v11; // eax
  int v12; // eax
  bool v14; // [rsp+40h] [rbp-89h] BYREF
  PVOID Object; // [rsp+48h] [rbp-81h] BYREF
  int v16[2]; // [rsp+50h] [rbp-79h]
  __int64 *v17; // [rsp+58h] [rbp-71h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-69h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20[2]; // [rsp+A0h] [rbp-29h] BYREF
  bool *v21; // [rsp+C0h] [rbp-9h]
  int v22; // [rsp+C8h] [rbp-1h]
  int v23; // [rsp+CCh] [rbp+3h]
  PVOID *p_Object; // [rsp+D0h] [rbp+7h]
  int v25; // [rsp+D8h] [rbp+Fh]
  int v26; // [rsp+DCh] [rbp+13h]

  v3 = *(_DWORD *)(a1 + 80);
  v4 = 0LL;
  v17 = a3;
  PartitionNodePagesForMdl = 0LL;
  *(_QWORD *)v16 = a2;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString = 0LL;
  if ( (v3 & 0xC) != 0 )
    return 0LL;
  v7 = (HANDLE *)(a1 + 992);
  if ( *(_QWORD *)(a1 + 992) )
    goto LABEL_5;
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\MemoryPartitionHyperV");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = ZwOpenPartition(v7, 2u, &ObjectAttributes);
  if ( v8 < 0 )
    goto LABEL_14;
  v9 = *v7;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(v9, 2u, PsPartitionType, 0, &Object, 0LL);
  *(_QWORD *)(a1 + 1000) = Object;
  if ( v8 >= 0 )
  {
LABEL_5:
    v10 = BufferChunkSizeInBytes;
    PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(
                                 0,
                                 -1,
                                 (unsigned int)BufferChunkSizeInBytes,
                                 *(unsigned __int64 *)v16,
                                 1,
                                 0,
                                 101,
                                 *(ULONG_PTR ***)(a1 + 1000));
    if ( PartitionNodePagesForMdl
      || (PartitionNodePagesForMdl = MmAllocatePartitionNodePagesForMdlEx(
                                       0,
                                       -1,
                                       v10,
                                       *(unsigned __int64 *)v16,
                                       1,
                                       0,
                                       37,
                                       *(ULONG_PTR ***)(a1 + 1000))) != 0 )
    {
      if ( (*(_BYTE *)(PartitionNodePagesForMdl + 10) & 5) != 0 )
        v4 = *(PVOID *)(PartitionNodePagesForMdl + 24);
      else
        v4 = MmMapLockedPagesSpecifyCache((PMDL)PartitionNodePagesForMdl, 0, MmCached, 0LL, 0, 0x40000020u);
    }
    else
    {
      *(_DWORD *)(a1 + 80) |= 8u;
      IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure();
      if ( (unsigned int)dword_140C04458 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_140C04458, 0x200000000000LL) )
        {
          v11 = *(_DWORD *)(a1 + 80);
          v23 = 0;
          v26 = 0;
          v22 = 1;
          v14 = (v11 & 8) != 0;
          v21 = &v14;
          p_Object = &Object;
          LODWORD(Object) = -1073741801;
          v25 = 4;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C04458,
            (unsigned __int8 *)&dword_14002355C,
            (const GUID *)(a1 + 864),
            (const GUID *)(a1 + 848),
            4u,
            v20);
        }
      }
    }
  }
  else
  {
LABEL_14:
    *(_DWORD *)(a1 + 80) |= 4u;
    IopLiveDumpTraceOpenVMMemoryPartitionFailure(a1, v8);
    if ( (unsigned int)dword_140C04458 > 5 && tlgKeywordOn((__int64)&dword_140C04458, 0x200000000000LL) )
    {
      v12 = *(_DWORD *)(a1 + 80);
      v23 = 0;
      v26 = 0;
      v22 = 1;
      v14 = (v12 & 4) != 0;
      v21 = &v14;
      p_Object = &Object;
      LODWORD(Object) = v8;
      v25 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C04458,
        (unsigned __int8 *)byte_1400234B5,
        (const GUID *)(a1 + 864),
        (const GUID *)(a1 + 848),
        4u,
        v20);
    }
  }
  if ( PartitionNodePagesForMdl )
  {
    if ( !v4 )
    {
      MmFreePagesFromMdl((PMDL)PartitionNodePagesForMdl);
      ExFreePoolWithTag((PVOID)PartitionNodePagesForMdl, 0);
      return 0LL;
    }
    *v17 = PartitionNodePagesForMdl;
  }
  return v4;
}
