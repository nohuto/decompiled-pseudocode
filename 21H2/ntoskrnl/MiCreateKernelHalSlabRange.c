/*
 * XREFs of MiCreateKernelHalSlabRange @ 0x140A506A0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSlabAllocator @ 0x14029959C (MiGetSlabAllocator.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiConvertEntireLargePageToSmall @ 0x1403F5C28 (MiConvertEntireLargePageToSmall.c)
 *     MiLockPageAtDpc @ 0x14054FB5C (MiLockPageAtDpc.c)
 *     MiComputeDriverProtection @ 0x1407A1B90 (MiComputeDriverProtection.c)
 *     MiCreateBootSlabEntries @ 0x140A508C0 (MiCreateBootSlabEntries.c)
 */

__int64 __fastcall MiCreateKernelHalSlabRange(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v5; // eax
  int v6; // ecx
  __int64 v7; // r13
  __int64 SlabAllocator; // r12
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // r14
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // di
  __int64 v18; // rbp
  unsigned __int8 v19; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v21; // r9
  int v22; // eax
  bool v23; // zf
  __int64 result; // rax
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v5 = MiComputeDriverProtection(0, a3);
  v7 = (unsigned int)(v6 + 1);
  if ( v5 == 24 )
    LOBYTE(v5) = v6 + 1;
  SlabAllocator = MiGetSlabAllocator((__int64)&MiSystemPartition, v6 + 1, v5);
  v9 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v10 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  if ( v9 >= v10 )
    return 0LL;
  v11 = (unsigned int)(v7 + 1);
  while ( 1 )
  {
    v25 = MI_READ_PTE_LOCK_FREE(v9);
    v12 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v25) >> 12) & 0xFFFFFFFFFLL;
    v13 = 48 * v12 - 0x58000000000LL;
    if ( (*(_QWORD *)(v13 + 40) & 0x1000000000LL) != 0 )
    {
      MiConvertEntireLargePageToSmall(48 * v12 - 0x58000000000LL, v7, 0LL, 6LL, 0LL, 0LL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(v11);
      if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v7) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v14 = (-1LL << ((unsigned __int8)v7 + CurrentIrql)) & 4;
        v15 = (unsigned int)v14 | SchedulerAssist[5];
        SchedulerAssist[5] = v15;
      }
      v18 = 512LL;
      do
      {
        MiLockPageAtDpc(v13, v14, v15, (__int64)SchedulerAssist);
        --*(_WORD *)(v13 + 32);
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v13 += 48LL;
        v18 -= v7;
      }
      while ( v18 );
      v11 = 2LL;
      if ( KiIrqlFlags )
      {
        if ( ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v7) != 0 )
        {
          v19 = KeGetCurrentIrql();
          if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = CurrentPrcb->SchedulerAssist;
            v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + CurrentIrql));
            v23 = (v22 & v21[5]) == 0;
            v21[5] &= v22;
            if ( v23 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    result = MiCreateBootSlabEntries(SlabAllocator, v12, 512LL, (unsigned int)v7);
    if ( (int)result < 0 )
      break;
    v9 += 8LL;
    if ( v9 >= v10 )
      return 0LL;
  }
  return result;
}
