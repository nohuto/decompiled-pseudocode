/*
 * XREFs of ExpSaInitialize @ 0x1403CA4CC
 * Callers:
 *     ExpInitSystemPhase1 @ 0x140A3DEBC (ExpInitSystemPhase1.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402696D0 (KeQueryMaximumProcessorCountEx.c)
 *     KeGetPrcb @ 0x1402CD730 (KeGetPrcb.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x140346ED0 (ExpAllocatePoolWithTagFromNode.c)
 *     ExpSaAllocatorInitialize @ 0x1403CA650 (ExpSaAllocatorInitialize.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char ExpSaInitialize()
{
  char v0; // bl
  PVOID PoolWithTag; // rax
  ULONG MaximumProcessorCount; // eax
  SIZE_T v3; // rdi
  ULONG v4; // ebp
  PVOID v5; // rax
  unsigned int v6; // r14d
  unsigned int v7; // edi
  __int64 v8; // rsi
  struct _KPRCB *v9; // rax
  __int64 Prcb; // rdx
  PVOID v11; // rax
  PVOID v12; // rax
  void *PoolWithTagFromNode; // rcx

  v0 = 0;
  ExSaPageGroupDescriptorArray = 0LL;
  ExSaPageArrays = 0LL;
  ExSaNonPagedSlotAllocator = 0LL;
  ExSaPagedSlotAllocator = 0LL;
  ExSaPageGroupDescriptorArrayLock = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x61537845u);
  ExSaPageGroupDescriptorArray = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x80uLL);
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    v3 = 8LL * MaximumProcessorCount;
    v4 = MaximumProcessorCount;
    v5 = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x61537845u);
    ExSaPageArrays = (__int64)v5;
    if ( v5 )
    {
      memset(v5, 0, v3);
      v6 = KeNumberProcessors_0;
      v7 = 0;
      if ( v4 )
      {
        v8 = 0LL;
        while ( 1 )
        {
          v9 = v7 >= v6 ? KeGetCurrentPrcb() : (struct _KPRCB *)KeGetPrcb(v7);
          PoolWithTagFromNode = (void *)ExpAllocatePoolWithTagFromNode(
                                          NonPagedPoolNx,
                                          0x80uLL,
                                          0x61537845u,
                                          v9->ParentNode->Affinity.Reserved[0] | 0x80000000,
                                          0);
          *(_QWORD *)(v8 + ExSaPageArrays) = PoolWithTagFromNode;
          if ( !PoolWithTagFromNode )
            break;
          memset(PoolWithTagFromNode, 0, 0x80uLL);
          Prcb = KeGetPrcb(v7);
          if ( Prcb )
            *(_QWORD *)(Prcb + 33584) = *(_QWORD *)(v8 + ExSaPageArrays);
          ++v7;
          v8 += 8LL;
          if ( v7 >= v4 )
            goto LABEL_10;
        }
      }
      else
      {
LABEL_10:
        v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x61537845u);
        ExSaNonPagedSlotAllocator = (__int64)v11;
        if ( v11 )
        {
          ExpSaAllocatorInitialize(v11, 0LL);
          v12 = ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x61537845u);
          ExSaPagedSlotAllocator = (ULONG_PTR)v12;
          if ( v12 )
          {
            ExpSaAllocatorInitialize(v12, 1LL);
            return 1;
          }
        }
      }
    }
  }
  return v0;
}
