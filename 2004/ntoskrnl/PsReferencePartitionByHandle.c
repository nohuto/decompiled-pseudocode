/*
 * XREFs of PsReferencePartitionByHandle @ 0x14061CDA4
 * Callers:
 *     EtwpSetPartitionContext @ 0x1405AB540 (EtwpSetPartitionContext.c)
 *     MiInitializeCreateSectionPacket @ 0x1405FB190 (MiInitializeCreateSectionPacket.c)
 *     NtManagePartition @ 0x14061CA20 (NtManagePartition.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1406B66C4 (MiAllocateVirtualMemoryCommon.c)
 *     NtAllocateVirtualMemory @ 0x1406B6840 (NtAllocateVirtualMemory.c)
 *     MmAllocateVirtualMemory @ 0x1406B6B00 (MmAllocateVirtualMemory.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14089122C (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x14090616C (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x1409099A0 (NtCreatePartition.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePartitionSafe @ 0x14026ADB8 (PsReferencePartitionSafe.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PsReferencePartitionByHandle(ULONG_PTR a1, int a2, char a3, ULONG Tag, _QWORD *a5)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  struct _SINGLE_LIST_ENTRY *Next; // r8
  void *v10; // r8
  struct _SINGLE_LIST_ENTRY *v11; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v11 = 0LL;
  if ( a1 == -1LL )
  {
    Next = KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next;
  }
  else if ( a1 == -2LL )
  {
    Next = (struct _SINGLE_LIST_ENTRY *)PspSystemPartition;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(a1, a2, (__int64)PsPartitionType, a3, Tag, &v11, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    Next = v11;
  }
  if ( PsReferencePartitionSafe((__int64)Next) )
    *a5 = v10;
  else
    v5 = -1073740640;
  if ( a1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ObfDereferenceObjectWithTag(v10, Tag);
  return v5;
}
