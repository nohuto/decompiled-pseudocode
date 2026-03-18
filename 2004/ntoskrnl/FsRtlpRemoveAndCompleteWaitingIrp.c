/*
 * XREFs of FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404EB81C
 * Callers:
 *     FsRtlpOplockBreakByCacheFlags @ 0x1402922F0 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestShareableOplock @ 0x140296DF0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpReleaseIrpsWaitingForRH @ 0x1403323CC (FsRtlpReleaseIrpsWaitingForRH.c)
 *     FsRtlpOplockCleanup @ 0x1403325B4 (FsRtlpOplockCleanup.c)
 *     FsRtlpOplockBreakToII @ 0x14035345C (FsRtlpOplockBreakToII.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036A630 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpOplockBreakToNone @ 0x14036ADB8 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403740A0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039079C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1404EB094 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404EB3A8 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1404EB8C0 (FsRtlpWaitOnIrp.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x140888D6C (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
