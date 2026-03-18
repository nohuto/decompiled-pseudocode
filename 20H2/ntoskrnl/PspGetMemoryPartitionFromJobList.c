/*
 * XREFs of PspGetMemoryPartitionFromJobList @ 0x14090B690
 * Callers:
 *     PspGetMemoryPartitionContext @ 0x140690758 (PspGetMemoryPartitionContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 */

__int64 __fastcall PspGetMemoryPartitionFromJobList(__int64 a1, unsigned __int64 a2, PVOID *a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v7; // ebx
  unsigned __int64 i; // rsi
  __int64 v9; // r14
  PVOID v10; // rax
  PVOID v11; // rcx

  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = 0;
  for ( i = 0LL; i < a2; ++i )
  {
    v9 = *(_QWORD *)(a1 + 8 * i);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v9 + 56), 1u);
    v10 = *(PVOID *)(v9 + 1560);
    if ( v10 == (PVOID)-1LL )
    {
      v7 = -1073740682;
    }
    else
    {
      v11 = *a3;
      if ( v10 )
      {
        if ( v11 )
        {
          if ( v10 != v11 )
            v7 = -1073741637;
        }
        else
        {
          ObfReferenceObjectWithTag(*(PVOID *)(v9 + 1560), 0x624A7350u);
          *a3 = *(PVOID *)(v9 + 1560);
        }
      }
    }
    ExReleaseResourceLite((PERESOURCE)(v9 + 56));
    if ( v7 < 0 )
      break;
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    v7 = -1073741749;
  if ( v7 < 0 && *a3 )
  {
    ObfDereferenceObjectWithTag(*a3, 0x624A7350u);
    *a3 = 0LL;
  }
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return (unsigned int)v7;
}
