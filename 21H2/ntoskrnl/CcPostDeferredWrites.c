/*
 * XREFs of CcPostDeferredWrites @ 0x1404EA2F0
 * Callers:
 *     CcFlushCachePriv @ 0x14022CBA0 (CcFlushCachePriv.c)
 *     CcNotifyOfMappedWriteComplete @ 0x1402D0220 (CcNotifyOfMappedWriteComplete.c)
 *     CcLazyWriteScan @ 0x1402F5894 (CcLazyWriteScan.c)
 *     CcCanIWrite @ 0x1403131D0 (CcCanIWrite.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x140392340 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcDeferWrite @ 0x1404EA040 (CcDeferWrite.c)
 *     CcUnpinRepinnedBcb @ 0x1404EA760 (CcUnpinRepinnedBcb.c)
 *     CcExitPartition @ 0x1404EC154 (CcExitPartition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140229C70 (KxReleaseSpinLock.c)
 *     CcDereferencePartition @ 0x1402F6D2C (CcDereferencePartition.c)
 *     CcCanIWriteStreamEx @ 0x1403134D0 (CcCanIWriteStreamEx.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140358230 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcPostDeferredWrites(__int64 a1)
{
  _QWORD *v2; // r15
  unsigned int v3; // r13d
  KSPIN_LOCK *v4; // r12
  _QWORD *v5; // rdi
  KIRQL v6; // al
  _QWORD *v7; // rsi
  unsigned __int64 v8; // r14
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf
  struct _KEVENT *v17; // rcx

  v2 = (_QWORD *)(a1 + 784);
  v3 = 0;
  v4 = (KSPIN_LOCK *)(a1 + 832);
  while ( 2 )
  {
    v5 = 0LL;
    v6 = KeAcquireSpinLockRaiseToDpc(v4);
    v7 = (_QWORD *)*v2;
    v8 = v6;
    while ( v7 != v2 )
    {
      v5 = v7 - 3;
      if ( *(_BYTE *)(a1 + 966) > 1u )
        goto LABEL_11;
      v9 = *((_DWORD *)v5 + 4);
      v10 = v9 + v3;
      if ( CcCanIWriteStreamEx((unsigned __int64 *)a1, v5[1], v9, v3, 2, 0LL)
        && (!*((_BYTE *)v5 + 80)
         || MEMORY[0xFFFFF78000000320] >= (__int64)((unsigned int)(10000 * CcSoftThrottleDelay)
                                                  / (unsigned __int64)(unsigned int)KeMaximumIncrement
                                                  + v5[11])) )
      {
        v3 = v10;
LABEL_11:
        v11 = *v7;
        v12 = (_QWORD *)v5[4];
        if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v12 != v7 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        break;
      }
      v7 = (_QWORD *)*v7;
      v5 = 0LL;
    }
    KxReleaseSpinLock(v4);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v8 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v16 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v16 )
            result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    if ( v5 )
    {
      v17 = (struct _KEVENT *)v5[5];
      if ( v17 )
      {
        KeSetEvent(v17, 0, 0);
      }
      else
      {
        ((void (__fastcall *)(_QWORD, _QWORD))v5[6])(v5[7], v5[8]);
        ExFreePoolWithTag(v5, 0x77446343u);
        CcDereferencePartition(a1);
      }
      continue;
    }
    return result;
  }
}
