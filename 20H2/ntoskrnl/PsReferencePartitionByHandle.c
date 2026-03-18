/*
 * XREFs of PsReferencePartitionByHandle @ 0x140660764
 * Callers:
 *     EtwpSetPartitionContext @ 0x1405AF0A0 (EtwpSetPartitionContext.c)
 *     NtManagePartition @ 0x1406603E0 (NtManagePartition.c)
 *     MmAllocateVirtualMemory @ 0x14067C130 (MmAllocateVirtualMemory.c)
 *     NtAllocateVirtualMemory @ 0x14067D390 (NtAllocateVirtualMemory.c)
 *     MiInitializeCreateSectionPacket @ 0x14067F6F0 (MiInitializeCreateSectionPacket.c)
 *     MiAllocateVirtualMemoryCommon @ 0x14069A68C (MiAllocateVirtualMemoryCommon.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140896D1C (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x14090BD8C (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x14090F5C0 (NtCreatePartition.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePartitionSafe @ 0x1402636B0 (PsReferencePartitionSafe.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
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
