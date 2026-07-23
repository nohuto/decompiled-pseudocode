/*
 * XREFs of IopCancelIrpsInFileObjectList @ 0x14023912C
 * Callers:
 *     IopRevokeFileObjectForProcess @ 0x140507924 (IopRevokeFileObjectForProcess.c)
 *     NtCancelIoFile @ 0x1405FCA40 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x1405FCBF0 (NtCancelIoFileEx.c)
 *     IopCleanupProcessResources @ 0x1405FCD04 (IopCleanupProcessResources.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     IopCheckListForCancelableIrp @ 0x1402392C8 (IopCheckListForCancelableIrp.c)
 *     IoCancelIrp @ 0x1402394D0 (IoCancelIrp.c)
 *     IopInterlockedAdd @ 0x140242EBC (IopInterlockedAdd.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopCancelIrpsInFileObjectList(__int64 a1, int a2, int a3, int a4, char a5, char a6)
{
  KSPIN_LOCK *v6; // rbp
  int v8; // ebx
  __int64 Flink; // r12
  KIRQL v10; // di
  _QWORD *v11; // r13
  __int64 v12; // rsi
  char v14; // al
  PIRP v15; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  bool v20; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  int v25; // ebx
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // edx
  unsigned int v30; // [rsp+30h] [rbp-68h]
  PIRP Irp; // [rsp+38h] [rbp-60h] BYREF
  LARGE_INTEGER Interval; // [rsp+40h] [rbp-58h] BYREF
  __int64 v33; // [rsp+48h] [rbp-50h]
  int v34; // [rsp+A0h] [rbp+8h]

  v34 = 1;
  v6 = (KSPIN_LOCK *)(a1 + 184);
  Irp = 0LL;
  v33 = 0LL;
  v30 = 0;
  v8 = a4;
  Interval.QuadPart = -10000LL;
  Flink = 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  if ( a6 )
    *(_DWORD *)(a1 + 80) |= 0x400u;
  v11 = (_QWORD *)(a1 + 192);
  while ( 1 )
  {
    v12 = Flink;
    if ( (_QWORD *)*v11 == v11 )
      break;
    v14 = IopCheckListForCancelableIrp((int)a1 + 192, a2, a3, v8, Flink, (__int64)&Irp);
    v15 = Irp;
    Flink = 0LL;
    if ( !Irp )
    {
      if ( !a5 )
        break;
      if ( v14 )
      {
        if ( !v12 )
          break;
      }
      else
      {
        v33 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 88LL);
        KxReleaseSpinLock(v6);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v24 = ~(unsigned __int16)(-1LL << (v10 + 1));
              v20 = (v24 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v24;
              if ( v20 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v10);
        KeDelayExecutionThread(0, 0, &Interval);
        v25 = v34;
        if ( v34 < 100 )
        {
          v34 *= 2;
          Interval.QuadPart = -20000 * v25;
        }
        v10 = KeAcquireSpinLockRaiseToDpc(v6);
      }
      goto LABEL_39;
    }
    if ( !Irp->Cancel )
    {
      v30 = 1;
      Irp->Cancel = 1;
      KxReleaseSpinLock(v6);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && v10 <= 0xFu && v16 >= 2u )
          {
            v17 = KeGetCurrentPrcb();
            v18 = v17->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (v10 + 1));
            v20 = (v19 & v18[5]) == 0;
            v18[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick(v17);
            v15 = Irp;
          }
        }
      }
      __writecr8(v10);
      IoCancelIrp(v15);
      v10 = KeAcquireSpinLockRaiseToDpc(v6);
    }
    if ( (v15->Flags & 0x2000) != 0 )
      Flink = (__int64)v15->ThreadListEntry.Flink;
    if ( !(unsigned int)IopInterlockedAdd(&v15->Overlay, 0xFFFFFFFFLL) )
      IoFreeIrp(v15);
    v8 = a4;
    if ( (_QWORD *)Flink == v11 )
    {
      if ( !a5 )
        break;
      Flink = 0LL;
LABEL_39:
      v8 = a4;
    }
  }
  KxReleaseSpinLock(v6);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v26 = KeGetCurrentIrql();
      if ( v26 <= 0xFu && v10 <= 0xFu && v26 >= 2u )
      {
        v27 = KeGetCurrentPrcb();
        v28 = v27->SchedulerAssist;
        v29 = ~(unsigned __int16)(-1LL << (v10 + 1));
        v20 = (v29 & v28[5]) == 0;
        v28[5] &= v29;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v27);
      }
    }
  }
  __writecr8(v10);
  return v30;
}
