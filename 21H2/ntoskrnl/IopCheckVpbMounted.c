/*
 * XREFs of IopCheckVpbMounted @ 0x14035E670
 * Callers:
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     IopDecrementDeviceObjectRef @ 0x14035E8E0 (IopDecrementDeviceObjectRef.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     IopMountVolume @ 0x1405DB490 (IopMountVolume.c)
 */

__int64 __fastcall IopCheckVpbMounted(__int64 a1, ULONG_PTR a2, __int64 a3, int *a4)
{
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
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  int v28; // eax
  bool v29; // zf
  void *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v31; // [rsp+68h] [rbp+10h] BYREF

  v31 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v7 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
  v8 = (volatile __int64 *)*((_QWORD *)v7 + 1);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = CurrentPrcb->SchedulerAssist;
  if ( v10 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v21 = v10[6];
      v10[6] = v21 + 1;
      if ( v21 == -1 )
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
      *a4 = -1073741790;
      v12 = 0LL;
    }
    else if ( (int)++*(_DWORD *)(v12 + 28) <= 0 )
    {
      v22 = *(_QWORD *)(v12 + 8);
      if ( v22 )
      {
        IoAddTriageDumpDataBlock(v22, (PVOID)0x150);
        v23 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL);
        if ( v23 )
        {
          IoAddTriageDumpDataBlock(v23, (PVOID)0x150);
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
        v14 = KxWaitForLockChainValid((__int64 *)v13);
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
        v24 = v16[6] - 1;
        v16[6] = v24;
        if ( !v24 )
          KiRemoveSystemWorkPriorityKick(v15);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = v26->SchedulerAssist;
          v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v29 = (v28 & v27[5]) == 0;
          v27[5] &= v28;
          if ( v29 )
            KiRemoveSystemWorkPriorityKick(v26);
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
    v31 = 0LL;
    v18 = IopMountVolume(a2, (__int64)&v31);
    *a4 = v18;
    if ( v18 < 0 || v18 == 192 || v18 == 257 )
      break;
    result = v31;
    if ( v31 )
      return result;
    v19 = KeAcquireQueuedSpinLock(9uLL);
    v12 = *(_QWORD *)(a2 + 56);
    CurrentIrql = v19;
    if ( (*(_BYTE *)(v12 + 4) & 1) != 0 )
      goto LABEL_7;
  }
  IopDecrementDeviceObjectRef(a2);
  result = 0LL;
  if ( *a4 >= 0 )
    *a4 = -1073741806;
  return result;
}
