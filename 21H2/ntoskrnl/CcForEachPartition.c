/*
 * XREFs of CcForEachPartition @ 0x140363C8C
 * Callers:
 *     CcGetDirtyPages @ 0x14024AC10 (CcGetDirtyPages.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140389F20 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcNotifyWriteBehind @ 0x14038A808 (CcNotifyWriteBehind.c)
 *     CcCoalescingCallBack @ 0x140538900 (CcCoalescingCallBack.c)
 *     CcIsThereDirtyData @ 0x14053A950 (CcIsThereDirtyData.c)
 *     MiFlushAllFilesystemPages @ 0x14058DCA8 (MiFlushAllFilesystemPages.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x1406DBDA0 (CcTelemetryPeriodicTimerCallback.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     CcDereferencePartition @ 0x140276728 (CcDereferencePartition.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     PsGetNextPartitionUnsafe @ 0x140363D98 (PsGetNextPartitionUnsafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     CcForEachPrivateVolumeCacheMap @ 0x14053C3E4 (CcForEachPrivateVolumeCacheMap.c)
 */

LONG_PTR __fastcall CcForEachPartition(
        __int64 (__fastcall *a1)(__int64, _QWORD, __int64),
        __int64 a2,
        char a3,
        char a4)
{
  __int64 v4; // rbx
  char v5; // di
  void *i; // rcx
  LONG_PTR result; // rax
  _QWORD *v12; // rsi
  KIRQL v13; // al
  __int64 v14; // rcx
  unsigned __int64 v15; // rbp
  char v16; // al
  char v17; // bp
  signed __int64 v18; // rax
  unsigned __int64 j; // rcx
  signed __int64 v20; // rtt
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  bool v25; // zf

  v4 = 0LL;
  v5 = 0;
  for ( i = 0LL; ; i = v12 )
  {
    result = PsGetNextPartitionUnsafe(i);
    v12 = (_QWORD *)result;
    if ( !result )
      break;
    v13 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v14 = v12[1];
    v15 = v13;
    if ( v14 )
    {
      v4 = v12[1];
      if ( *(_BYTE *)(v14 + 1230) >= 2u )
      {
        if ( a3 )
        {
          _m_prefetchw((const void *)(v14 + 1232));
          v18 = *(_QWORD *)(v14 + 1232);
          for ( j = v18 + 1; j > 1; j = v18 + 1 )
          {
            v20 = v18;
            v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 1232), j, v18);
            if ( v20 == v18 )
              goto LABEL_6;
          }
          if ( j != 1 )
            __fastfail(0xEu);
          v5 = 0;
        }
      }
      else
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 1232)) <= 1 )
          __fastfail(0xEu);
LABEL_6:
        v5 = 1;
      }
    }
    KxReleaseSpinLock(&CcGlobalPartitionLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v25 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v15);
    if ( v5 )
    {
      v16 = CcEnablePerVolumeLazyWriter != 1 || a4 ? a1(v4, 0LL, a2) : CcForEachPrivateVolumeCacheMap(v4, a1, a2);
      v17 = v16;
      CcDereferencePartition(v4);
      v5 = 0;
      if ( !v17 )
        return ObfDereferenceObjectWithTag(v12, 0x6E457350u);
    }
  }
  return result;
}
