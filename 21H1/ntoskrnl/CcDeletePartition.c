/*
 * XREFs of CcDeletePartition @ 0x1404E65B0
 * Callers:
 *     CcGetPartitionWithCreate @ 0x14030A8F0 (CcGetPartitionWithCreate.c)
 *     CcCreatePartition @ 0x1403BD8B8 (CcCreatePartition.c)
 *     CcExitPartition @ 0x1404E6A84 (CcExitPartition.c)
 * Callees:
 *     CcDereferencePartition @ 0x1402317CC (CcDereferencePartition.c)
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeFlushQueuedDpcs @ 0x1403267C0 (KeFlushQueuedDpcs.c)
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ZwWaitForSingleObject @ 0x1403F23B0 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     CcUninitializePartitionVacbs @ 0x1404E6D54 (CcUninitializePartitionVacbs.c)
 *     CcUninitializeAsyncRead @ 0x1404E6FB8 (CcUninitializeAsyncRead.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeletePartition(char *P)
{
  void *v2; // rcx
  KIRQL v3; // al
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  __int64 **v11; // rdi
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 **v14; // rdi
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 **v17; // rdi
  __int64 *v18; // rcx
  __int64 v19; // rax
  void *v20; // rcx

  KeSetEvent((PRKEVENT)(P + 976), 0, 0);
  CcDereferencePartition((__int64)P);
  v2 = (void *)*((_QWORD *)P + 128);
  if ( v2 )
  {
    ZwWaitForSingleObject(v2, 0, 0LL);
    ZwClose(*((HANDLE *)P + 128));
    *((_QWORD *)P + 128) = 0LL;
  }
  if ( !KeCancelTimer((PKTIMER)(P + 568)) )
    KeFlushQueuedDpcs();
  if ( P[965] )
  {
    v3 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v4 = *((_QWORD *)P + 1);
    v5 = v3;
    --CcPartitionCount;
    *(_QWORD *)(v4 + 8) = 0LL;
    KxReleaseSpinLock(&CcGlobalPartitionLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
          v10 = (v9 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v5);
  }
  v11 = (__int64 **)(P + 208);
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 == (__int64 *)v11 )
      break;
    v13 = *v12;
    if ( (__int64 **)v12[1] != v11 || *(__int64 **)(v13 + 8) != v12 )
LABEL_29:
      __fastfail(3u);
    *v11 = (__int64 *)v13;
    *(_QWORD *)(v13 + 8) = v11;
    ExFreePoolWithTag(v12, 0x71576343u);
  }
  v14 = (__int64 **)(P + 304);
  while ( 1 )
  {
    v15 = *v14;
    if ( *v14 == (__int64 *)v14 )
      break;
    v16 = *v15;
    if ( (__int64 **)v15[1] != v14 || *(__int64 **)(v16 + 8) != v15 )
      goto LABEL_29;
    *v14 = (__int64 *)v16;
    *(_QWORD *)(v16 + 8) = v14;
    ExFreePoolWithTag(v15, 0x71576343u);
  }
  v17 = (__int64 **)(P + 328);
  while ( 1 )
  {
    v18 = *v17;
    if ( *v17 == (__int64 *)v17 )
      break;
    v19 = *v18;
    if ( (__int64 **)v18[1] != v17 || *(__int64 **)(v19 + 8) != v18 )
      goto LABEL_29;
    *v17 = (__int64 *)v19;
    *(_QWORD *)(v19 + 8) = v17;
    ExFreePoolWithTag(v18, 0x71576343u);
  }
  v20 = (void *)*((_QWORD *)P + 90);
  if ( v20 )
  {
    ExFreePoolWithTag(v20, 0x70546343u);
    *((_QWORD *)P + 90) = 0LL;
  }
  CcUninitializePartitionVacbs(P);
  CcUninitializeAsyncRead(P);
  DbgPrintEx(0x7Fu, 2u, "CcDeletePartition: Partition Deleted=%p, PartitionObject=%p \n", P, *((const void **)P + 1));
  ExFreePoolWithTag(P, 0x72506343u);
}
