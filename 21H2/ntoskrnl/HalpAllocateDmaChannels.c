/*
 * XREFs of HalpAllocateDmaChannels @ 0x1404CE4CC
 * Callers:
 *     HalpAllocateDmaResourcesInternal @ 0x1404CA81C (HalpAllocateDmaResourcesInternal.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall HalpAllocateDmaChannels(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  KSPIN_LOCK *v8; // r14
  unsigned __int8 v9; // al
  struct _KPRCB *v10; // r10
  _DWORD *v11; // r9
  int v12; // edx
  bool v13; // zf
  __int64 v15; // rdi
  __int64 *v16; // rbp
  __int64 **v17; // rax
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax

  v2 = *(_QWORD *)(a1 + 360);
  v3 = 5LL * *(unsigned int *)(a1 + 372);
  v4 = *(unsigned __int8 *)(v2 + 176);
  v5 = *(_QWORD *)(v2 + 56) + 32 * v3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v4 - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1LL << (CurrentIrql + 1)) & ((1LL << ((unsigned __int8)v4 + 1)) - 1) & 0xFFFFFFFC;
  }
  v8 = (KSPIN_LOCK *)(v2 + 168);
  KxAcquireSpinLock(v8);
  if ( *(_BYTE *)(v5 + 5) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 344) + 20LL) & 1) == 0 )
    {
      v15 = v5 + 144;
      v16 = (__int64 *)(a1 + 200);
      v17 = *(__int64 ***)(v15 + 8);
      if ( *v17 != (__int64 *)v15 )
        __fastfail(3u);
      *v16 = v15;
      v16[1] = (__int64)v17;
      *v17 = v16;
      *(_QWORD *)(v15 + 8) = v16;
    }
    KxReleaseSpinLock(v8);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v18 = KeGetCurrentIrql();
        if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v20 = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v21 & v20[5]) == 0;
          v20[5] &= v21;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 0;
  }
  else
  {
    *(_BYTE *)(v5 + 5) = 1;
    *(_DWORD *)(a1 + 384) = 1;
    *(_QWORD *)(v5 + 24) = a1;
    KxReleaseSpinLock(v8);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v9 = KeGetCurrentIrql();
        if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
        {
          v10 = KeGetCurrentPrcb();
          v11 = v10->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v13 = (v12 & v11[5]) == 0;
          v11[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)v10);
        }
      }
    }
    __writecr8(CurrentIrql);
    return 1;
  }
}
