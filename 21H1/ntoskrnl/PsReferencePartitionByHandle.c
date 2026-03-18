/*
 * XREFs of PsReferencePartitionByHandle @ 0x1406624C4
 * Callers:
 *     EtwpSetPartitionContext @ 0x1405AAE50 (EtwpSetPartitionContext.c)
 *     MiInitializeCreateSectionPacket @ 0x1406301D0 (MiInitializeCreateSectionPacket.c)
 *     MiAllocateVirtualMemoryCommon @ 0x14064D6E4 (MiAllocateVirtualMemoryCommon.c)
 *     NtAllocateVirtualMemory @ 0x14064D860 (NtAllocateVirtualMemory.c)
 *     MmAllocateVirtualMemory @ 0x14064DB20 (MmAllocateVirtualMemory.c)
 *     NtManagePartition @ 0x140662140 (NtManagePartition.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14088FF0C (IopSetFileMemoryPartitionInformation.c)
 *     PspSetJobMemoryPartition @ 0x140904E8C (PspSetJobMemoryPartition.c)
 *     NtCreatePartition @ 0x1409086F0 (NtCreatePartition.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PsReferencePartitionSafe @ 0x1402D4758 (PsReferencePartitionSafe.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall PsReferencePartitionByHandle(ULONG_PTR a1, __int64 a2, char a3, ULONG a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  ULONG v6; // esi
  __int64 result; // rax
  struct _SINGLE_LIST_ENTRY *Next; // r8
  void *v10; // r8
  _QWORD *Tag; // [rsp+20h] [rbp-28h]
  struct _SINGLE_LIST_ENTRY *v12; // [rsp+50h] [rbp+8h] BYREF

  v5 = 0;
  v6 = a4;
  v12 = 0LL;
  LOBYTE(a4) = a3;
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
    LODWORD(Tag) = v6;
    result = ObpReferenceObjectByHandleWithTag(a1, a2, (POBJECT_TYPE *)PsPartitionType, a4, Tag, &v12, 0LL, 0LL);
    if ( (int)result < 0 )
      return result;
    Next = v12;
  }
  if ( PsReferencePartitionSafe((__int64)Next) )
    *a5 = v10;
  else
    v5 = -1073740640;
  if ( a1 <= 0xFFFFFFFFFFFFFFFDuLL )
    ObfDereferenceObjectWithTag(v10, v6);
  return v5;
}
