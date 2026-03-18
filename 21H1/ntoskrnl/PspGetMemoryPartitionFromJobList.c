/*
 * XREFs of PspGetMemoryPartitionFromJobList @ 0x140904790
 * Callers:
 *     PspGetMemoryPartitionContext @ 0x14066E8B0 (PspGetMemoryPartitionContext.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 */

__int64 __fastcall PspGetMemoryPartitionFromJobList(__int64 a1, unsigned __int64 a2, PVOID *a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v8; // ebx
  unsigned __int64 i; // rsi
  __int64 v10; // r14
  PVOID v11; // rax
  PVOID v12; // rcx

  *a3 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = 0;
  for ( i = 0LL; i < a2; ++i )
  {
    v10 = *(_QWORD *)(a1 + 8 * i);
    ExAcquireResourceExclusiveLite((PERESOURCE)(v10 + 56), 1u);
    v11 = *(PVOID *)(v10 + 1560);
    if ( v11 == (PVOID)-1LL )
    {
      v8 = -1073740682;
    }
    else
    {
      v12 = *a3;
      if ( v11 )
      {
        if ( v12 )
        {
          if ( v11 != v12 )
            v8 = -1073741637;
        }
        else
        {
          ObfReferenceObjectWithTag(*(PVOID *)(v10 + 1560), 0x624A7350u);
          *a3 = *(PVOID *)(v10 + 1560);
        }
      }
    }
    ExReleaseResourceLite((PERESOURCE)(v10 + 56));
    if ( v8 < 0 )
      break;
  }
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) != 0 )
    v8 = -1073741749;
  if ( v8 < 0 && *a3 )
  {
    ObfDereferenceObjectWithTag(*a3, 0x624A7350u);
    *a3 = 0LL;
  }
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, a2, (__int64)a3, a4);
  return (unsigned int)v8;
}
