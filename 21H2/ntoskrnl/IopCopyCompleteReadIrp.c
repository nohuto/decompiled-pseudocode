/*
 * XREFs of IopCopyCompleteReadIrp @ 0x1403F1580
 * Callers:
 *     <none>
 * Callees:
 *     IopFreeIrpExtension @ 0x14020D178 (IopFreeIrpExtension.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeInitializeApc @ 0x140266E00 (KeInitializeApc.c)
 *     KeAreAllApcsDisabled @ 0x14027C1F0 (KeAreAllApcsDisabled.c)
 *     KeInsertQueueApc @ 0x14027E260 (KeInsertQueueApc.c)
 *     IopDropIrp @ 0x14029A794 (IopDropIrp.c)
 *     KeReleaseSpinLock @ 0x1402CE500 (KeReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopUnlockAndFreeMdl @ 0x1403F1110 (IopUnlockAndFreeMdl.c)
 *     IopCopyCompleteReadRequest @ 0x1403F1900 (IopCopyCompleteReadRequest.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 */

char __fastcall IopCopyCompleteReadIrp(__int64 *a1, ULONG_PTR a2, int a3)
{
  __int64 v3; // rbp
  char v4; // di
  int v6; // eax
  struct _MDL *v7; // rcx
  __int64 v8; // r12
  char v9; // r15
  __int64 v10; // r14
  __int64 v11; // rsi
  KIRQL v12; // al
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  KIRQL v19; // al
  __int64 v20; // rcx
  KIRQL v21; // r13
  __int64 *v22; // rdx
  __int64 **v23; // rax
  __int64 v24; // r9
  __int64 v25; // r14
  unsigned int v26; // r8d
  unsigned int v27; // ecx
  unsigned int v28; // ebx
  __int64 v29; // rcx
  int v31; // [rsp+40h] [rbp-58h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+10h] BYREF
  int v34; // [rsp+B0h] [rbp+18h]
  char v35; // [rsp+B8h] [rbp+20h]

  v34 = a3;
  BugCheckParameter2 = a2;
  v3 = *a1;
  v4 = 0;
  v6 = *(_DWORD *)(*a1 + 48);
  v7 = *(struct _MDL **)(*a1 + 8);
  v8 = *(unsigned int *)(v3 + 56);
  v9 = *(_BYTE *)(v3 + 68);
  v10 = *(_QWORD *)(v3 + 152);
  v11 = *(_QWORD *)(v3 + 112);
  v31 = v6;
  v35 = *(_BYTE *)(v3 + 65);
  if ( v7 )
  {
    IopUnlockAndFreeMdl(v7);
    *(_QWORD *)(v3 + 8) = 0LL;
  }
  if ( v10 )
  {
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 1416));
    KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 1416), v12);
  }
  if ( (struct _KTHREAD *)v10 != KeGetCurrentThread()
    || KeAreAllApcsDisabled()
    || KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    if ( !v9 )
    {
      KeInitializeApc(
        v3 + 120,
        v10,
        *(char *)(v3 + 70),
        (__int64)IopCopyCompleteReadRequest,
        (__int64)IopCopyAbortCopyReadRequest,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(v3 + 120, BugCheckParameter2, 0LL, a3);
      goto LABEL_29;
    }
LABEL_18:
    v19 = KeAcquireQueuedSpinLock(0xBuLL);
    v20 = IopDeadIrps;
    v21 = v19;
    if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
    {
LABEL_21:
      if ( v10 )
      {
        KeInitializeApc(
          v3 + 120,
          v10,
          *(char *)(v3 + 70),
          (__int64)IopCopyCompleteReadRequest,
          (__int64)IopCopyAbortCopyReadRequest,
          0LL,
          0,
          0LL);
        KeInsertQueueApc(v3 + 120, BugCheckParameter2, 0LL, v34);
        KeReleaseQueuedSpinLock(0xBuLL, v21);
        goto LABEL_29;
      }
    }
    else
    {
      while ( 1 )
      {
        v22 = *(__int64 **)v20;
        if ( v20 - 32 == v3 )
          break;
        v20 = *(_QWORD *)v20;
        if ( v22 == &IopDeadIrps )
          goto LABEL_21;
      }
      v23 = *(__int64 ***)(v20 + 8);
      if ( v22[1] != v20 || *v23 != (__int64 *)v20 )
        __fastfail(3u);
      *v23 = v22;
      v22[1] = (__int64)v23;
      *(_QWORD *)(v20 - 32 + 40) = v20;
      *(_QWORD *)v20 = v20;
      HalPutDmaAdapter((PADAPTER_OBJECT)v10);
    }
    KeReleaseQueuedSpinLock(0xBuLL, v21);
    IopDropIrp((PIRP)v3, BugCheckParameter2);
    goto LABEL_29;
  }
  if ( v9 )
    goto LABEL_18;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  IopCopyCompleteReadRequest(v3 + 120, 0LL, 0LL, &BugCheckParameter2, 0LL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
LABEL_29:
  if ( v31 < 0 || v9 )
  {
    *(_DWORD *)(*(_QWORD *)(v11 - 40) + 48LL) = v31;
    *(_BYTE *)(*(_QWORD *)(v11 - 40) + 65LL) = v35;
    v29 = *(_QWORD *)(v11 - 40);
    *a1 = v29;
    IopFreeIrpExtension(v29, 9, 1);
  }
  else
  {
    v24 = *(_QWORD *)(v11 - 40);
    v25 = *(_QWORD *)(v24 + 184);
    if ( (*(_DWORD *)(*(_QWORD *)(v11 - 24) + 80LL) & 8) != 0 )
    {
      v26 = *(_DWORD *)(v25 - 64);
      v27 = *(unsigned __int16 *)(*(_QWORD *)(v11 - 32) + 304LL);
      if ( !(_WORD)v27 )
        v27 = 4096;
      v28 = v27 + v26 - 1 - (v27 + v26 - 1) % v27;
      if ( v28 >= v26 )
        v28 = *(_DWORD *)(v25 - 64);
      if ( (unsigned int)v8 < v28 )
        memset((void *)(*(_QWORD *)(v24 + 112) + v8), 0, v28 - (unsigned int)v8);
    }
    else
    {
      v28 = v8;
    }
    *(_DWORD *)(v25 - 64) = v28;
    *(_QWORD *)(v11 - 56) = IopQueueCopyWrite;
    *(_QWORD *)(v11 - 48) = v11 - 40;
    *(_QWORD *)(v11 - 72) = 0LL;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v11 - 72), CriticalWorkQueue);
    return 1;
  }
  return v4;
}
