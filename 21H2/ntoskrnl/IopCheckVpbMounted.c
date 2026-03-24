/*
 * XREFs of IopCheckVpbMounted @ 0x140353920
 * Callers:
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     KeReleaseQueuedSpinLock @ 0x140310BD0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140310C70 (KeAcquireQueuedSpinLock.c)
 *     IopDecrementDeviceObjectRef @ 0x140353B90 (IopDecrementDeviceObjectRef.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC828 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 *     IopMountVolume @ 0x1406E5720 (IopMountVolume.c)
 */

__int64 __fastcall IopCheckVpbMounted(__int64 a1, ULONG_PTR a2, __int64 a3, int *SchedulerAssist)
{
  int *v4; // r12
  KIRQL CurrentIrql; // si
  char *v7; // rbx
  volatile __int64 *v8; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v10; // rdx
  _QWORD *v11; // rdx
  ULONG_PTR v12; // rbx
  volatile signed __int64 **v13; // rdi
  __int64 v14; // rax
  struct _KPRCB *v15; // rcx
  _DWORD *v16; // rdx
  __int64 result; // rax
  int v18; // eax
  KIRQL v19; // al
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r9
  _DWORD *v26; // r8
  int v27; // eax
  bool v28; // zf
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v30; // [rsp+68h] [rbp+10h] BYREF

  v4 = SchedulerAssist;
  v30 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = (int *)KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (-1 << (CurrentIrql + 1)) & 4 | (unsigned int)SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v7 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  v8 = (volatile __int64 *)*((_QWORD *)v7 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = CurrentPrcb->SchedulerAssist;
  if ( v10 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v20 = v10[6];
      v10[6] = v20 + 1;
      if ( v20 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v7, v8);
  }
  else
  {
    v11 = (_QWORD *)_InterlockedExchange64(v8, (__int64)v7);
    if ( v11 )
      KxWaitForLockOwnerShip((__int64)v7, v11);
  }
  v12 = *(_QWORD *)(a2 + 56);
  if ( (*(_BYTE *)(v12 + 4) & 1) != 0 )
  {
LABEL_7:
    if ( (*(_BYTE *)(v12 + 4) & 2) != 0 )
    {
      *v4 = -1073741790;
      v12 = 0LL;
    }
    else if ( (int)++*(_DWORD *)(v12 + 28) <= 0 )
    {
      v21 = *(_QWORD *)(v12 + 8);
      if ( v21 )
      {
        IoAddTriageDumpDataBlock(v21, (PVOID)0x150);
        v22 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL);
        if ( v22 )
        {
          IoAddTriageDumpDataBlock(v22, (PVOID)0x150);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 56LL));
        }
      }
      KeBugCheckEx(0x18u, 0LL, v12, 7uLL, *(unsigned int *)(v12 + 28));
    }
    v13 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v13, retaddr);
    }
    else
    {
      _m_prefetchw(v13);
      v14 = (__int64)*v13;
      if ( !*v13 )
      {
        if ( v13 == (volatile signed __int64 **)_InterlockedCompareExchange64(v13[1], 0LL, (signed __int64)v13) )
          goto LABEL_12;
        v14 = KxWaitForLockChainValid((__int64 *)v13, 0LL, a3, (__int64)SchedulerAssist);
      }
      *v13 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v14 + 8), 1uLL);
    }
LABEL_12:
    v15 = KeGetCurrentPrcb();
    v16 = v15->SchedulerAssist;
    if ( v16 )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v23 = v16[6] - 1;
        v16[6] = v23;
        if ( !v23 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v24 = KeGetCurrentIrql();
        if ( v24 <= 0xFu && CurrentIrql <= 0xFu && v24 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          v27 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v28 = (v27 & v26[5]) == 0;
          v26[5] &= v27;
          if ( v28 )
            KiRemoveSystemWorkPriorityKick(v25);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !v12 )
      IopDecrementDeviceObjectRef(a2);
    return v12;
  }
  while ( 1 )
  {
    KeReleaseQueuedSpinLock(9uLL, CurrentIrql);
    v30 = 0LL;
    v18 = IopMountVolume(a2, (__int64)&v30);
    *v4 = v18;
    if ( v18 < 0 || v18 == 192 || v18 == 257 )
      break;
    result = v30;
    if ( v30 )
      return result;
    v19 = KeAcquireQueuedSpinLock(9uLL);
    v12 = *(_QWORD *)(a2 + 56);
    CurrentIrql = v19;
    if ( (*(_BYTE *)(v12 + 4) & 1) != 0 )
      goto LABEL_7;
  }
  IopDecrementDeviceObjectRef(a2);
  result = 0LL;
  if ( *v4 >= 0 )
    *v4 = -1073741806;
  return result;
}
