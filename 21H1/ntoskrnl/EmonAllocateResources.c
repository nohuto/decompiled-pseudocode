/*
 * XREFs of EmonAllocateResources @ 0x1404CDD98
 * Callers:
 *     EmonReserveProfileResources @ 0x1404CF190 (EmonReserveProfileResources.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1402771F0 (KeEnumerateNextProcessor.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxFree @ 0x1403764C0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x140379D08 (HalpMmAllocCtxAlloc.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x14039EE54 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EmonMarkCountersReserved @ 0x1404CE2B4 (EmonMarkCountersReserved.c)
 *     EmonReleaseProfileResourcesInternal @ 0x1404CEDC0 (EmonReleaseProfileResourcesInternal.c)
 */

__int64 __fastcall EmonAllocateResources(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int32 v9; // r14d
  int v10; // ebx
  int v11; // eax
  size_t v12; // rbp
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rbp
  _QWORD *v22; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v26; // eax
  bool v27; // zf
  __int64 v28; // rcx
  unsigned __int16 *v30[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v31; // [rsp+30h] [rbp-38h]
  int v32; // [rsp+32h] [rbp-36h]
  __int16 v33; // [rsp+36h] [rbp-32h]
  unsigned int v34; // [rsp+88h] [rbp+20h] BYREF

  v32 = 0;
  v33 = 0;
  v34 = 0;
  v9 = 1;
  v10 = 0;
  *a5 = -1LL;
  if ( a4 )
  {
    v9 = _InterlockedExchange(&EmonPebsInUse, 1);
    if ( v9 )
    {
      v10 = -1073741670;
LABEL_34:
      if ( a4 && !v9 )
      {
        EmonPebsEntrySizeInUse = 0;
        EmonPebsInUse = 0;
      }
      return (unsigned int)v10;
    }
    v11 = EmonPebsEntrySize;
    if ( *(_DWORD *)(a4 + 8) )
      v11 = *(_DWORD *)(a4 + 8);
    EmonPebsEntrySizeInUse = v11;
  }
  v12 = 8 * (unsigned int)HalpQueryMaximumRegisteredProcessorCount() + 40;
  v14 = (_QWORD *)HalpMmAllocCtxAlloc(v13, v12);
  v15 = v14;
  if ( !v14 )
  {
    v10 = -1073741801;
    goto LABEL_34;
  }
  memset(v14, 0, v12);
  v15[2] = a2;
  if ( a4 )
    v15[3] = *(_QWORD *)a4;
  v30[1] = *(unsigned __int16 **)(a3 + 8);
  v31 = 0;
  v30[0] = (unsigned __int16 *)a3;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v34, v30) )
  {
    v10 = EmonMarkCountersReserved(v34, a1);
    if ( v10 < 0 )
      goto LABEL_33;
    v16 = v34;
    v15[v34 + 4] = a1;
    if ( a4 )
    {
      v17 = EmonDsManagementAreas + 160 * v16;
      if ( EmonPebs64Bit )
      {
        v18 = *(_QWORD *)(v17 + 32);
        v19 = *(_QWORD *)(v17 + 48);
      }
      else
      {
        v18 = *(unsigned int *)(v17 + 16);
        v19 = *(unsigned int *)(v17 + 24);
      }
      v20 = v18 + (unsigned int)(EmonPebsEntrySizeInUse * *(_DWORD *)(a4 + 12));
      if ( v20 >= v19 )
      {
        v10 = -1073741811;
LABEL_33:
        EmonReleaseProfileResourcesInternal(v15);
        HalpMmAllocCtxFree(v28, (__int64)v15);
        goto LABEL_34;
      }
      if ( !EmonPebs64Bit )
        v20 = (unsigned int)v20;
      *(_QWORD *)(v17 + 56) = v20;
      v10 = 0;
    }
  }
  v21 = KeAcquireSpinLockRaiseToDpc(&EmonReservedResourcesLock);
  v22 = (_QWORD *)qword_140C48FB8;
  if ( *(__int64 **)qword_140C48FB8 != &EmonReservedResourcesList )
    __fastfail(3u);
  *v15 = &EmonReservedResourcesList;
  v15[1] = v22;
  *v22 = v15;
  qword_140C48FB8 = (__int64)v15;
  KxReleaseSpinLock(&EmonReservedResourcesLock);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v21 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v26 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v21 + 1));
        v27 = (v26 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v26;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v21);
  *a5 = v15;
  return (unsigned int)v10;
}
