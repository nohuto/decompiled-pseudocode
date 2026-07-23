/*
 * XREFs of PopDequeueQuerySetIrp @ 0x14039829C
 * Callers:
 *     PopRequestCompletion @ 0x14037A450 (PopRequestCompletion.c)
 *     PopSystemIrpCompletion @ 0x140998040 (PopSystemIrpCompletion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PopDeepSleepClearDisengageReason @ 0x14026F810 (PopDeepSleepClearDisengageReason.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCallDriver @ 0x14035C710 (IofCallDriver.c)
 *     PopDiagTraceIrpStart @ 0x14036E594 (PopDiagTraceIrpStart.c)
 *     PopDiagTraceIrpFinish @ 0x14037A6C4 (PopDiagTraceIrpFinish.c)
 *     PopEnableIrpWatchdog @ 0x14039865C (PopEnableIrpWatchdog.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PopIrpWatchdogBugcheck @ 0x1405653D8 (PopIrpWatchdogBugcheck.c)
 */

__int64 __fastcall PopDequeueQuerySetIrp(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  unsigned __int64 OldIrql; // rbx
  __int64 *v11; // rdi
  __int64 result; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  __int64 ***v15; // rcx
  _QWORD *v16; // rax
  __int64 *v17; // rax
  IRP *v18; // rdi
  struct _DEVICE_OBJECT *DeviceObject; // rbx
  __int64 *i; // rdx
  __int64 *v21; // r9
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 *v25; // rax
  __int64 ***v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  bool v33; // zf
  __int64 *v34; // [rsp+20h] [rbp-40h] BYREF
  __int64 **v35; // [rsp+28h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v37; // [rsp+48h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  PopDiagTraceIrpFinish(a1);
  v2 = *(char *)(a1 + 66);
  memset(&v37, 0, sizeof(v37));
  v3 = *(_QWORD *)(a1 + 72 * v2 + 200);
  if ( *(_BYTE *)(v3 + 196) && !KeCancelTimer((PKTIMER)(v3 + 56)) )
  {
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &v37);
    PopIrpWatchdogBugcheck(v3);
  }
  v35 = &v34;
  v34 = (__int64 *)&v34;
  v4 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v5 = *(_QWORD *)(v4 + 24);
  if ( v5 )
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 312) + 40LL);
  else
    v6 = 0LL;
  v7 = 264LL;
  if ( *(_DWORD *)(v4 + 188) != 1 )
    v7 = 280LL;
  v8 = (_QWORD *)(v6 + v7);
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  *v8 = 0LL;
  if ( a1 != PopInrushIrp )
    goto LABEL_8;
  PopInrushIrp = 0LL;
  for ( i = (__int64 *)PopInrushIrpList; ; i = (__int64 *)*i )
  {
    if ( i == &PopInrushIrpList )
      goto LABEL_8;
    v21 = i - 21;
    v22 = *(_QWORD *)(i[9 * *((char *)i - 102) + 4] + 24);
    v23 = v22 ? *(_QWORD *)(*(_QWORD *)(v22 + 312) + 40LL) : 0LL;
    if ( !*(_QWORD *)(v23 + 264) && *(__int64 **)(v23 + 272) == v21 )
      break;
  }
  v24 = *i;
  v25 = (__int64 *)i[1];
  if ( *(__int64 **)(*i + 8) != i )
    goto LABEL_24;
  if ( (__int64 *)*v25 != i )
    goto LABEL_24;
  *v25 = v24;
  *(_QWORD *)(v24 + 8) = v25;
  v26 = (__int64 ***)(v21 + 15);
  *(_QWORD *)(v23 + 264) = v21;
  *(_QWORD *)(v23 + 272) = v21[15];
  v27 = v35;
  PopInrushIrp = (__int64)(i - 21);
  if ( *v35 != (__int64 *)&v34 )
    goto LABEL_24;
  v21[16] = (__int64)v35;
  *v26 = &v34;
  *v27 = v26;
  v35 = (__int64 **)(v21 + 15);
  if ( !*v8 )
  {
LABEL_8:
    v9 = (_QWORD *)v8[1];
    if ( !v9 )
      goto LABEL_9;
    v13 = v9 + 21;
    v14 = (_QWORD *)v9[21];
    if ( v14 != v9 + 21 )
    {
      if ( PopInrushIrp )
      {
        v9 = 0LL;
      }
      else
      {
        v28 = (_QWORD *)v9[22];
        PopInrushIrp = v8[1];
        if ( (_QWORD *)v14[1] != v13 || (_QWORD *)*v28 != v13 )
          goto LABEL_24;
        *v28 = v14;
        v14[1] = v28;
      }
    }
    if ( !v9 )
      goto LABEL_9;
    *v8 = v9;
    v15 = (__int64 ***)(v9 + 15);
    v8[1] = v9[15];
    v16 = v35;
    if ( *v35 == (__int64 *)&v34 )
    {
      v15[1] = v35;
      *v15 = &v34;
      *v16 = v15;
      v35 = (__int64 **)v15;
      goto LABEL_9;
    }
LABEL_24:
    __fastfail(3u);
  }
LABEL_9:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v32 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v33 = (v32 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v32;
        if ( v33 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  while ( 1 )
  {
    v11 = v34;
    result = (__int64)&v34;
    if ( v34 == (__int64 *)&v34 )
      break;
    v17 = (__int64 *)*v34;
    if ( (__int64 **)v34[1] != &v34 || (__int64 *)v17[1] != v34 )
      goto LABEL_24;
    v34 = (__int64 *)*v34;
    v17[1] = (__int64)&v34;
    v18 = (IRP *)(v11 - 15);
    DeviceObject = v18->Tail.Overlay.CurrentStackLocation[-1].DeviceObject;
    PopDiagTraceIrpStart((__int64)&v34, (__int64)v18);
    PopEnableIrpWatchdog(v18);
    IofCallDriver(DeviceObject, v18);
  }
  if ( *(_BYTE *)(v4 + 184) == 2 && *(_DWORD *)(v4 + 188) == 1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(&PopPendingSetPowerDeviceIrps, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return PopDeepSleepClearDisengageReason(2u);
  }
  return result;
}
