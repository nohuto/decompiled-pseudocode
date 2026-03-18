/*
 * XREFs of FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404EF0AC
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140208D40 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockCleanup @ 0x14020B158 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14020B770 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x140322558 (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockBreakToII @ 0x140323E3C (FsRtlpOplockBreakToII.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036C610 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x14036CD98 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374940 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140392C5C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404EE924 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404EEC38 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404EF150 (FsRtlpWaitOnIrp.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14088E8BC (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpRemoveAndCompleteWaitingIrp(_QWORD *P)
{
  _QWORD **v2; // rcx
  PVOID *v3; // rax
  __int64 v4; // rdi

  v2 = (_QWORD **)*P;
  if ( v2[1] != P || (v3 = (PVOID *)P[1], *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  v4 = P[2];
  if ( v4 )
  {
    *(_BYTE *)(v4 + 69) = KeAcquireQueuedSpinLock(7uLL);
    _InterlockedExchange64((volatile __int64 *)(v4 + 104), 0LL);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v4 + 69));
    *(_QWORD *)(v4 + 56) = *((unsigned int *)P + 12);
    *(_DWORD *)(v4 + 48) = *(_BYTE *)(v4 + 68) != 0 ? 0xC0000120 : 0;
  }
  ((void (__fastcall *)(_QWORD, __int64))P[3])(P[4], v4);
  ExFreePoolWithTag(P, 0);
}
