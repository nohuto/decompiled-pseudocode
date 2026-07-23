/*
 * XREFs of MmUpdateSlabRangeProtection @ 0x140A939A8
 * Callers:
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 * Callees:
 *     MiEnumerateSlabAllocators @ 0x140236EDC (MiEnumerateSlabAllocators.c)
 *     MiGetSlabAllocator @ 0x14029959C (MiGetSlabAllocator.c)
 *     MiMakeProtectionMask @ 0x1402BF320 (MiMakeProtectionMask.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiInsertSlabEntry @ 0x14039A21C (MiInsertSlabEntry.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiRemoveSlabEntry @ 0x1405535B0 (MiRemoveSlabEntry.c)
 */

__int64 __fastcall MmUpdateSlabRangeProtection(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4)
{
  __int64 result; // rax
  ULONG_PTR v4; // rsi
  ULONG_PTR v5; // r13
  __int64 v7; // rbp
  __int64 v8; // r14
  char ProtectionMask; // al
  __int64 v10; // r12
  unsigned __int64 v11; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r8
  _DWORD *SchedulerAssist; // r10
  int v15; // eax
  bool v16; // zf
  ULONG_PTR v17; // [rsp+30h] [rbp-38h] BYREF
  __int64 v18; // [rsp+38h] [rbp-30h]

  result = (unsigned int)dword_140C50DC4;
  v4 = BugCheckParameter3;
  v5 = (unsigned int)BugCheckParameter4;
  if ( (dword_140C50DC4 & 8) != 0 && BugCheckParameter3 )
  {
    do
    {
      v18 = 0LL;
      v17 = BugCheckParameter2;
      MiEnumerateSlabAllocators(
        (__int64)&MiSystemPartition,
        (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiUpdateSlabRangeProtectionHelper,
        (__int64)&v17);
      v7 = v18;
      if ( !v18 )
        KeBugCheckEx(0x1Au, 0x3030312uLL, BugCheckParameter2, v4, v5);
      if ( *(_QWORD *)(v18 + 24) != BugCheckParameter2 )
        KeBugCheckEx(0x1Au, 0x3030313uLL, BugCheckParameter2, *(_QWORD *)(v18 + 24), 0LL);
      v8 = *(_QWORD *)(v18 + 40);
      if ( !*(_DWORD *)(v8 + 48) && *(_DWORD *)(v8 + 52) != 2 )
        KeBugCheckEx(0x1Au, 0x3030314uLL, BugCheckParameter2, *(_QWORD *)(v18 + 40), *(int *)(v8 + 48));
      ProtectionMask = MiMakeProtectionMask(v5);
      result = MiGetSlabAllocator((__int64)&MiSystemPartition, 0, ProtectionMask);
      v10 = result;
      if ( result != v8 )
      {
        v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 16));
        MiRemoveSlabEntry((__int64)&MiSystemPartition, (_RTL_RB_TREE *)v8, v7);
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 16));
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
              v16 = (v15 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v15;
              if ( v16 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v11);
        *(_QWORD *)(v7 + 40) = v10;
        result = MiInsertSlabEntry((__int64)&MiSystemPartition, v10, v7);
      }
      BugCheckParameter2 += 512LL;
      v4 -= 512LL;
    }
    while ( v4 );
  }
  return result;
}
