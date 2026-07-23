/*
 * XREFs of IommupGetSystemContext @ 0x1403CC184
 * Callers:
 *     IommuGetLibraryContext @ 0x1404D9010 (IommuGetLibraryContext.c)
 *     IommuGetConfiguration @ 0x140A70E20 (IommuGetConfiguration.c)
 *     IommuHvGetConfiguration @ 0x140A8E710 (IommuHvGetConfiguration.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402CDEB0 (KxAcquireSpinLock.c)
 *     HalpMmAllocCtxFree @ 0x140378FB0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 */

PVOID *__fastcall IommupGetSystemContext(unsigned int a1)
{
  PVOID *v2; // rsi
  unsigned __int8 CurrentIrql; // bl
  PVOID *i; // rax
  __int64 v5; // rcx
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  unsigned __int8 v8; // di
  PVOID *v9; // rax
  _QWORD *v10; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v15; // r9
  int v16; // eax
  bool v17; // zf
  _DWORD *v18; // r9
  int v19; // ecx
  __int64 v20; // rcx
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax

  v2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  KxAcquireSpinLock(&IommupSystemContextListLock);
  for ( i = (PVOID *)IommupSystemContextListHead; i != &IommupSystemContextListHead; i = (PVOID *)*i )
  {
    v2 = i;
    if ( *((_DWORD *)i + 4) == a1 )
      break;
  }
  KxReleaseSpinLock(&IommupSystemContextListLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = (unsigned int)CurrentIrql + 1;
        v15 = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v2 && *((_DWORD *)v2 + 4) == a1 )
    return v2;
  v6 = (_DWORD *)HalpMmAllocCtxAlloc(v5, 64LL);
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0x40uLL);
    v7[4] = a1;
    *((_QWORD *)v7 + 5) = v7 + 8;
    *((_QWORD *)v7 + 4) = v7 + 8;
    *((_QWORD *)v7 + 7) = v7 + 12;
    *((_QWORD *)v7 + 6) = v7 + 12;
    *((_QWORD *)v7 + 3) = 0LL;
    v8 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v8 <= 0xFu )
    {
      v18 = KeGetCurrentPrcb()->SchedulerAssist;
      v18[5] |= (-1 << (v8 + 1)) & 0xFFFC;
    }
    KxAcquireSpinLock(&IommupSystemContextListLock);
    v9 = (PVOID *)IommupSystemContextListHead;
    if ( IommupSystemContextListHead == &IommupSystemContextListHead )
    {
LABEL_9:
      if ( HalpHvIommu
        && (!IommupHvSvmEnabled
         || (int)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_140C4A2A8)(a1, (unsigned int)IommupHvMaximumAsids) < 0) )
      {
        KxReleaseSpinLock(&IommupSystemContextListLock);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v21 = KeGetCurrentIrql();
            if ( v21 <= 0xFu && v8 <= 0xFu && v21 >= 2u )
            {
              v22 = KeGetCurrentPrcb();
              v20 = (unsigned int)v8 + 1;
              v23 = v22->SchedulerAssist;
              v24 = ~(unsigned __int16)(-1LL << (v8 + 1));
              v17 = (v24 & v23[5]) == 0;
              v23[5] &= v24;
              if ( v17 )
                KiRemoveSystemWorkPriorityKick(v22);
            }
          }
        }
        __writecr8(v8);
        HalpMmAllocCtxFree(v20, (__int64)v7);
        return 0LL;
      }
      v10 = IommupSystemContextListHead;
      if ( *((PVOID **)IommupSystemContextListHead + 1) != &IommupSystemContextListHead )
        __fastfail(3u);
      *(_QWORD *)v7 = IommupSystemContextListHead;
      v2 = (PVOID *)v7;
      *((_QWORD *)v7 + 1) = &IommupSystemContextListHead;
      v10[1] = v7;
      IommupSystemContextListHead = v7;
      v7 = 0LL;
    }
    else
    {
      while ( 1 )
      {
        v19 = *((_DWORD *)v9 + 4);
        v2 = v9;
        if ( v19 == a1 )
          break;
        v9 = (PVOID *)*v9;
        if ( v9 == &IommupSystemContextListHead )
        {
          if ( v19 == a1 )
            break;
          goto LABEL_9;
        }
      }
    }
    KxReleaseSpinLock(&IommupSystemContextListLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && v8 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (v8 + 1));
          v17 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v26);
        }
      }
    }
    __writecr8(v8);
    if ( v7 )
      HalpMmAllocCtxFree(v8, (__int64)v7);
    return v2;
  }
  return 0LL;
}
