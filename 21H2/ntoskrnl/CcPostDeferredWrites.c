/*
 * XREFs of CcPostDeferredWrites @ 0x14053A100
 * Callers:
 *     CcNotifyOfMappedWriteComplete @ 0x1402590D8 (CcNotifyOfMappedWriteComplete.c)
 *     CcLazyWriteScan @ 0x140275670 (CcLazyWriteScan.c)
 *     CcFlushCachePriv @ 0x140283030 (CcFlushCachePriv.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x14039EA50 (CcDeductDirtyPagesFromExternalCache.c)
 *     CcLazyWriteScanVolume @ 0x140538E4C (CcLazyWriteScanVolume.c)
 *     CcDeferWrite @ 0x140539E20 (CcDeferWrite.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 *     CcPostDeferredWritesOnVolumeHelper @ 0x14053D3E0 (CcPostDeferredWritesOnVolumeHelper.c)
 *     CcReapPrivateVolumeCachemap @ 0x14053D880 (CcReapPrivateVolumeCachemap.c)
 *     CcExitPartition @ 0x14053E098 (CcExitPartition.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     CcDereferencePartition @ 0x140276728 (CcDereferencePartition.c)
 *     CcCanIWriteStreamEx @ 0x1402844A0 (CcCanIWriteStreamEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcPostDeferredWrites(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  KSPIN_LOCK *v3; // r13
  __int64 v4; // r12
  _QWORD *v7; // r12
  _QWORD *v8; // rdi
  KIRQL v9; // al
  _QWORD *v10; // rsi
  unsigned __int64 v11; // r14
  unsigned int v12; // r9d
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v18; // zf
  struct _KEVENT *v19; // rcx
  signed __int64 v20; // rax
  bool v21; // cc
  signed __int64 v22; // rax
  unsigned int v23; // [rsp+70h] [rbp+8h]

  v2 = 0;
  v3 = (KSPIN_LOCK *)(a1 + 1152);
  v4 = a1;
  v23 = 0;
  if ( CcEnablePerVolumeLazyWriter == 1 )
    v4 = a2;
  v7 = (_QWORD *)(v4 + 1104);
  while ( 1 )
  {
    v8 = 0LL;
    v9 = KeAcquireSpinLockRaiseToDpc(v3);
    v10 = (_QWORD *)*v7;
    v11 = v9;
    while ( v10 != v7 )
    {
      v8 = v10 - 3;
      if ( *(_BYTE *)(a1 + 1230) > 1u )
        goto LABEL_12;
      v12 = *((_DWORD *)v8 + 4);
      v2 += v12;
      if ( CcCanIWriteStreamEx(a1, a2, v8[1], v12, v23, 2, 0LL)
        && (!*((_BYTE *)v8 + 88)
         || MEMORY[0xFFFFF78000000320] >= (__int64)((unsigned int)(10000 * CcSoftThrottleDelay)
                                                  / (unsigned __int64)(unsigned int)KeMaximumIncrement
                                                  + v8[12])) )
      {
        v23 = v2;
LABEL_12:
        v13 = *v10;
        v14 = (_QWORD *)v8[4];
        if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v14 != v10 )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        break;
      }
      v10 = (_QWORD *)*v10;
      v8 = 0LL;
      v2 = v23;
    }
    KxReleaseSpinLock(v3);
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v18 = ((unsigned int)result & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= result;
          if ( v18 )
            result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
    if ( !v8 )
      return result;
    v19 = (struct _KEVENT *)v8[5];
    if ( v19 )
      goto LABEL_24;
    ((void (__fastcall *)(_QWORD, _QWORD))v8[6])(v8[7], v8[8]);
    ExFreePoolWithTag(v8, 0x77446343u);
    CcDereferencePartition(a1);
    if ( a2 )
    {
      v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
      v21 = v20 <= 1;
      v22 = v20 - 1;
      if ( v21 )
      {
        if ( v22 )
          __fastfail(0xEu);
        v19 = (struct _KEVENT *)(a2 + 1200);
LABEL_24:
        KeSetEvent(v19, 0, 0);
        continue;
      }
    }
  }
}
