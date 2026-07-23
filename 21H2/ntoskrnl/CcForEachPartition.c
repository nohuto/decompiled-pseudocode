/*
 * XREFs of CcForEachPartition @ 0x140303960
 * Callers:
 *     CcGetDirtyPages @ 0x140303B10 (CcGetDirtyPages.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140381D10 (CcWaitForCurrentLazyWriterActivity.c)
 *     CcNotifyWriteBehind @ 0x1403847C0 (CcNotifyWriteBehind.c)
 *     CcCoalescingCallBack @ 0x1404E98D0 (CcCoalescingCallBack.c)
 *     CcIsThereDirtyData @ 0x1404EAC10 (CcIsThereDirtyData.c)
 *     MiFlushAllFilesystemPages @ 0x140535808 (MiFlushAllFilesystemPages.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     CcDereferencePartition @ 0x140301A7C (CcDereferencePartition.c)
 *     PsGetNextPartitionUnsafe @ 0x140303A58 (PsGetNextPartitionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

LONG_PTR __fastcall CcForEachPartition(__int64 (__fastcall *a1)(__int64, __int64), __int64 a2, char a3)
{
  __int64 v3; // rdi
  char v4; // si
  void *i; // rcx
  LONG_PTR result; // rax
  _QWORD *v10; // rbp
  KIRQL v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  char v14; // bl
  signed __int64 v15; // rax
  unsigned __int64 j; // rcx
  signed __int64 v17; // rtt
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  bool v22; // zf

  v3 = 0LL;
  v4 = 0;
  for ( i = 0LL; ; i = v10 )
  {
    result = PsGetNextPartitionUnsafe(i);
    v10 = (_QWORD *)result;
    if ( !result )
      break;
    v11 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    v12 = v10[1];
    v13 = v11;
    if ( v12 )
    {
      v3 = v10[1];
      if ( *(_BYTE *)(v12 + 966) >= 2u )
      {
        if ( a3 )
        {
          _m_prefetchw((const void *)(v12 + 968));
          v15 = *(_QWORD *)(v12 + 968);
          for ( j = v15 + 1; j > 1; j = v15 + 1 )
          {
            v17 = v15;
            v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 968), j, v15);
            if ( v17 == v15 )
              goto LABEL_6;
          }
          if ( j != 1 )
            __fastfail(0xEu);
          v4 = 0;
        }
      }
      else
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v12 + 968)) <= 1 )
          __fastfail(0xEu);
LABEL_6:
        v4 = 1;
      }
    }
    KxReleaseSpinLock(&CcGlobalPartitionLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v22 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v13);
    if ( v4 )
    {
      v14 = a1(v3, a2);
      CcDereferencePartition(v3);
      v4 = 0;
      if ( !v14 )
        return ObfDereferenceObjectWithTag(v10, 0x6E457350u);
    }
  }
  return result;
}
