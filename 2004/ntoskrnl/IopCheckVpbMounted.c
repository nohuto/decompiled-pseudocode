/*
 * XREFs of IopCheckVpbMounted @ 0x140290E10
 * Callers:
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     IopDecrementDeviceObjectRef @ 0x140291080 (IopDecrementDeviceObjectRef.c)
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x1403C9218 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     IopMountVolume @ 0x140634C68 (IopMountVolume.c)
 */

__int64 __fastcall IopCheckVpbMounted(__int64 a1, ULONG_PTR a2, __int64 a3, int *SchedulerAssist)
{
  int *v4; // r12
  KIRQL CurrentIrql; // si
  char *v7; // rbx
  volatile __int64 *v8; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v10; // rdx
  ULONG_PTR v11; // rbx
  volatile signed __int64 **v12; // rdi
  __int64 v13; // rax
  struct _KPRCB *v14; // rcx
  _DWORD *v15; // rdx
  __int64 result; // rax
  int v17; // eax
  KIRQL v18; // al
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  _DWORD *v25; // r8
  int v26; // eax
  bool v27; // zf
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v29; // [rsp+68h] [rbp+10h] BYREF

  v4 = SchedulerAssist;
  v29 = 0LL;
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
      v19 = v10[6];
      v10[6] = v19 + 1;
      if ( v19 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(v7, v8);
  }
  else if ( _InterlockedExchange64(v8, (__int64)v7) )
  {
    KxWaitForLockOwnerShip(v7);
  }
  v11 = *(_QWORD *)(a2 + 56);
  if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
  {
LABEL_7:
    if ( (*(_BYTE *)(v11 + 4) & 2) != 0 )
    {
      *v4 = -1073741790;
      v11 = 0LL;
    }
    else if ( (int)++*(_DWORD *)(v11 + 28) <= 0 )
    {
      v20 = *(_QWORD *)(v11 + 8);
      if ( v20 )
      {
        IoAddTriageDumpDataBlock(v20, (PVOID)0x150);
        v21 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL);
        if ( v21 )
        {
          IoAddTriageDumpDataBlock(v21, (PVOID)0x150);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL) + 56LL));
        }
      }
      KeBugCheckEx(0x18u, 0LL, v11, 7uLL, *(unsigned int *)(v11 + 28));
    }
    v12 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v12, retaddr);
    }
    else
    {
      _m_prefetchw(v12);
      v13 = (__int64)*v12;
      if ( !*v12 )
      {
        if ( v12 == (volatile signed __int64 **)_InterlockedCompareExchange64(v12[1], 0LL, (signed __int64)v12) )
          goto LABEL_12;
        v13 = KxWaitForLockChainValid((__int64 *)v12, 0LL, a3, (__int64)SchedulerAssist);
      }
      *v12 = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
    }
LABEL_12:
    v14 = KeGetCurrentPrcb();
    v15 = v14->SchedulerAssist;
    if ( v15 )
    {
      if ( v14->NestingLevel <= 1u )
      {
        v22 = v15[6] - 1;
        v15[6] = v22;
        if ( !v22 )
          KiRemoveSystemWorkPriorityKick(v14);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v23 = KeGetCurrentIrql();
        if ( v23 <= 0xFu && CurrentIrql <= 0xFu && v23 >= 2u )
        {
          v24 = KeGetCurrentPrcb();
          v25 = v24->SchedulerAssist;
          v26 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v27 = (v26 & v25[5]) == 0;
          v25[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v24);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !v11 )
      IopDecrementDeviceObjectRef(a2);
    return v11;
  }
  while ( 1 )
  {
    KeReleaseQueuedSpinLock(9uLL, CurrentIrql);
    v29 = 0LL;
    v17 = IopMountVolume(a2, (__int64)&v29);
    *v4 = v17;
    if ( v17 < 0 || v17 == 192 || v17 == 257 )
      break;
    result = v29;
    if ( v29 )
      return result;
    v18 = KeAcquireQueuedSpinLock(9uLL);
    v11 = *(_QWORD *)(a2 + 56);
    CurrentIrql = v18;
    if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
      goto LABEL_7;
  }
  IopDecrementDeviceObjectRef(a2);
  result = 0LL;
  if ( *v4 >= 0 )
    *v4 = -1073741806;
  return result;
}
