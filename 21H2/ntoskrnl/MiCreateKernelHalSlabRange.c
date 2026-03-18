/*
 * XREFs of MiCreateKernelHalSlabRange @ 0x140B04C20
 * Callers:
 *     <none>
 * Callees:
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiConvertEntireLargePageToSmall @ 0x1402C6AA0 (MiConvertEntireLargePageToSmall.c)
 *     MiGetSlabAllocatorTypeByProtection @ 0x1402EB3F8 (MiGetSlabAllocatorTypeByProtection.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiPageToNode @ 0x14057F520 (MiPageToNode.c)
 *     MiComputeDriverProtection @ 0x14082BA10 (MiComputeDriverProtection.c)
 *     MiCreateBootSlabEntries @ 0x140B04E44 (MiCreateBootSlabEntries.c)
 */

__int64 __fastcall MiCreateKernelHalSlabRange(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  int v5; // eax
  __int64 v6; // rcx
  int v7; // r14d
  __int64 SlabAllocatorTypeByProtection; // r12
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r14
  unsigned int v13; // ebx
  __int64 result; // rax
  ULONG_PTR v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v23; // r9
  int v24; // eax
  bool v25; // zf
  unsigned int v26; // eax
  int v27; // [rsp+70h] [rbp+8h] BYREF
  __int64 v28; // [rsp+78h] [rbp+10h] BYREF

  v5 = MiComputeDriverProtection(0, a3);
  v7 = v6 + 1;
  if ( v5 == 24 )
    LOBYTE(v5) = v6 + 1;
  SlabAllocatorTypeByProtection = (int)MiGetSlabAllocatorTypeByProtection(v6, v5, 0);
  v9 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v10 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  while ( v9 < v10 )
  {
    v28 = MI_READ_PTE_LOCK_FREE(v9);
    v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28) >> 12) & 0xFFFFFFFFFFLL;
    v16 = 48 * v15 - 0x220000000000LL;
    if ( _bittest64((const signed __int64 *)(v16 + 40), 0x28u) )
    {
      MiConvertEntireLargePageToSmall(48 * v15 - 0x220000000000LL, v7, 0, 6, 0LL, 0LL, 0LL);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v7) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        v17 = (-1LL << ((unsigned __int8)v7 + CurrentIrql)) & 4;
        v18 = (unsigned int)v17 | SchedulerAssist[5];
        SchedulerAssist[5] = v18;
      }
      v11 = v16 + 24;
      v12 = 512LL;
      do
      {
        v27 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v27, v17, v18, (__int64)SchedulerAssist);
          while ( *(__int64 *)v11 < 0 );
        }
        --*(_WORD *)(v11 + 8);
        _InterlockedAnd64((volatile signed __int64 *)v11, 0x7FFFFFFFFFFFFFFFuLL);
        v11 += 48LL;
        --v12;
      }
      while ( v12 );
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v21 = KeGetCurrentIrql();
          if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v23 = CurrentPrcb->SchedulerAssist;
            v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v25 = (v24 & v23[5]) == 0;
            v23[5] &= v24;
            if ( v25 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
    }
    v13 = *((_DWORD *)MiSearchNumaNodeTable(v15) + 2);
    if ( v13 != *((_DWORD *)MiSearchNumaNodeTable(v15 + 511) + 2) )
    {
      v26 = MiPageToNode(v15 + 511);
      KeBugCheckEx(0x1Au, 0x3030316uLL, v15, v13, v26);
    }
    v7 = 1;
    result = MiCreateBootSlabEntries(
               24512LL * v13 + 23168 + qword_140C54F90 + 168 * SlabAllocatorTypeByProtection,
               v15,
               512LL,
               1LL);
    if ( (int)result < 0 )
      return result;
    v9 += 8LL;
  }
  return 0LL;
}
