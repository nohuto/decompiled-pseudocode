/*
 * XREFs of VmCreateMemoryRange @ 0x140931630
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     VmpInsertMemoryRange @ 0x1405A1F50 (VmpInsertMemoryRange.c)
 *     VmpAllocateMemoryRanges @ 0x140931D7C (VmpAllocateMemoryRanges.c)
 *     VmpDecodePreallocationRangeHandle @ 0x140931E74 (VmpDecodePreallocationRangeHandle.c)
 *     VmpFreeMemoryRanges @ 0x140931EC8 (VmpFreeMemoryRanges.c)
 *     VmpProcessContextCleanup @ 0x1409322EC (VmpProcessContextCleanup.c)
 *     VmpValidateMemoryRangeParameters @ 0x140932300 (VmpValidateMemoryRangeParameters.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VmCreateMemoryRange(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _RTL_BALANCED_NODE *MemoryRanges; // rdi
  _KPROCESS *Process; // rsi
  signed __int64 v11; // rbx
  PVOID PoolWithTag; // rax
  int inserted; // ebx
  PVOID v14; // rcx
  __int64 v15; // rax
  unsigned __int64 ParentValue; // rcx
  _RTL_BALANCED_NODE *v17; // r14
  unsigned __int64 v18; // r15

  MemoryRanges = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !VmTbFlushEnabled )
    VmTbFlushEnabled = 1;
  v11 = Process[2].Affinity.Bitmap[5];
  if ( !v11 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x63506D56u);
    v11 = (signed __int64)PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, 0x70uLL);
    *(_QWORD *)(v11 + 72) = a4;
    *(_QWORD *)(v11 + 16) = 0LL;
    *(_QWORD *)(v11 + 24) = 0LL;
    *(_QWORD *)(v11 + 32) = 0LL;
    *(_QWORD *)(v11 + 48) = 0LL;
    *(_QWORD *)(v11 + 56) = 0LL;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[2].Affinity.Bitmap[5], v11, 0LL) )
    {
      VmpProcessContextCleanup(v11);
      ExFreePoolWithTag(v14, 0);
      v11 = Process[2].Affinity.Bitmap[5];
    }
  }
  if ( a5 )
    MemoryRanges = (_RTL_BALANCED_NODE *)VmpDecodePreallocationRangeHandle(v11);
  if ( (unsigned int)VmpValidateMemoryRangeParameters(a1, a2, a3, a4) )
  {
    inserted = -1073741811;
  }
  else
  {
    v15 = *(_QWORD *)(v11 + 72);
    if ( v15 == -1 || v15 == a4 )
    {
      if ( !MemoryRanges )
      {
        MemoryRanges = (_RTL_BALANCED_NODE *)VmpAllocateMemoryRanges(1LL);
        if ( !MemoryRanges )
          return (unsigned int)-1073741670;
      }
      ParentValue = MemoryRanges[1].ParentValue;
      v17 = (_RTL_BALANCED_NODE *)(a2 >> 12);
      MemoryRanges[1].Children[0] = v17;
      MemoryRanges[1].Children[1] = (_RTL_BALANCED_NODE *)((char *)v17 + a3 - 1);
      v18 = a1 >> 12;
      *(_QWORD *)(ParentValue + 48) = v18;
      *(_QWORD *)(ParentValue + 56) = v18 + a3 - 1;
      inserted = VmpInsertMemoryRange((PEX_SPIN_LOCK)v11, MemoryRanges, a4);
      if ( inserted >= 0 )
      {
        MemoryRanges = 0LL;
        inserted = 0;
      }
    }
    else
    {
      inserted = -1073740007;
    }
  }
  if ( MemoryRanges )
    VmpFreeMemoryRanges(MemoryRanges);
  return (unsigned int)inserted;
}
