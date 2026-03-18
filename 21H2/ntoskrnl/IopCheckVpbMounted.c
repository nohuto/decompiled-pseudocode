/*
 * XREFs of IopCheckVpbMounted @ 0x1402A7910
 * Callers:
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140282C20 (KxWaitForLockChainValid.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     IopDecrementDeviceObjectRef @ 0x1402A7190 (IopDecrementDeviceObjectRef.c)
 *     KxWaitForLockOwnerShip @ 0x140311C70 (KxWaitForLockOwnerShip.c)
 *     IoAddTriageDumpDataBlock @ 0x1403D99B4 (IoAddTriageDumpDataBlock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045A10C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056E6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     IopMountVolume @ 0x14068E624 (IopMountVolume.c)
 */

__int64 __fastcall IopCheckVpbMounted(__int64 a1, ULONG_PTR a2, __int64 a3, int *a4)
{
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
  _DWORD *SchedulerAssist; // r9
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
      *a4 = -1073741790;
      v11 = 0LL;
    }
    else if ( (int)++*(_DWORD *)(v11 + 28) <= 0 )
    {
      v21 = *(_QWORD *)(v11 + 8);
      if ( v21 )
      {
        IoAddTriageDumpDataBlock(v21, (PVOID)0x150);
        v22 = *(_QWORD *)(*(_QWORD *)(v11 + 8) + 8LL);
        if ( v22 )
        {
          IoAddTriageDumpDataBlock(v22, (PVOID)0x150);
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
        v13 = KxWaitForLockChainValid((__int64 *)v12);
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
        v23 = v15[6] - 1;
        v15[6] = v23;
        if ( !v23 )
          KiRemoveSystemWorkPriorityKick(v14);
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
    if ( !v11 )
      IopDecrementDeviceObjectRef(a2, 0);
    return v11;
  }
  while ( 1 )
  {
    KeReleaseQueuedSpinLock(9uLL, CurrentIrql);
    v30 = 0LL;
    v18 = IopMountVolume(a2, (__int64)&v30);
    *a4 = v18;
    if ( v18 < 0 || v18 == 192 || v18 == 257 )
      break;
    result = v30;
    if ( v30 )
      return result;
    v19 = KeAcquireQueuedSpinLock(9uLL);
    v11 = *(_QWORD *)(a2 + 56);
    CurrentIrql = v19;
    if ( (*(_BYTE *)(v11 + 4) & 1) != 0 )
      goto LABEL_7;
  }
  IopDecrementDeviceObjectRef(a2, 0);
  result = 0LL;
  if ( *a4 >= 0 )
    *a4 = -1073741806;
  return result;
}
