/*
 * XREFs of HalpReadWriteWheaPhysicalMemory @ 0x1404D7A70
 * Callers:
 *     HalpReadWheaPhysicalMemory @ 0x1404D7A50 (HalpReadWheaPhysicalMemory.c)
 *     HalpWriteWheaPhysicalMemory @ 0x1404D7D30 (HalpWriteWheaPhysicalMemory.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     HalpRemapVirtualAddress64 @ 0x1402300C8 (HalpRemapVirtualAddress64.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall HalpReadWriteWheaPhysicalMemory(char a1, __int64 a2, unsigned int a3, char *a4)
{
  char *v4; // r14
  unsigned int v5; // esi
  __int64 v6; // rbx
  int v7; // eax
  unsigned int Number; // ecx
  unsigned __int64 v9; // r12
  KSPIN_LOCK *v10; // rbp
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v13; // r15
  unsigned int v14; // ecx
  const void *v15; // rdx
  void *v16; // rcx
  unsigned __int8 v17; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf
  char v24; // [rsp+68h] [rbp+10h]

  v4 = a4;
  v5 = a3;
  v6 = a2;
  if ( !a2 )
    return 3221225485LL;
  if ( a3 > 8 )
    return 3221225485LL;
  v7 = 278;
  if ( !_bittest(&v7, a3) || !a4 )
    return 3221225485LL;
  Number = KeGetPcr()->Prcb.Number;
  if ( HalpProcessorInMceHandler == Number )
  {
    v9 = HalpWheaMappingMceReservation;
    v10 = &HalpWheaMappingMceLock;
  }
  else if ( HalpProcessorInNmiHandler == Number )
  {
    v9 = HalpWheaMappingNmiReservation;
    v10 = (KSPIN_LOCK *)&HalpWheaMappingNmiLock;
  }
  else
  {
    v9 = HalpWheaMappingReservation;
    v10 = (KSPIN_LOCK *)&HalpWheaMappingLock;
  }
  v24 = 0;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 0xFu )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    v24 = 1;
  }
  KxAcquireSpinLock(v10);
  for ( ; v5; v5 -= v13 )
  {
    HalpRemapVirtualAddress64(v9, v6, 1);
    v13 = v5;
    v14 = 4096 - (v6 & 0xFFF);
    if ( v5 >= v14 )
      v13 = v14;
    if ( a1 )
    {
      v15 = (const void *)(v9 + (v6 & 0xFFF));
      v16 = v4;
    }
    else
    {
      v15 = v4;
      v16 = (void *)(v9 + (v6 & 0xFFF));
    }
    memmove(v16, v15, (unsigned int)v13);
    v6 += v13;
    v4 += v13;
  }
  KxReleaseSpinLock(v10);
  if ( v24 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v17 = KeGetCurrentIrql();
        if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = CurrentPrcb->SchedulerAssist;
          v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v21 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v21 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  return 0LL;
}
