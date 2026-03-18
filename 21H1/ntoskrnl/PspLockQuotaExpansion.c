/*
 * XREFs of PspLockQuotaExpansion @ 0x14030F680
 * Callers:
 *     PspReturnResourceQuota @ 0x14030F328 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x14030F3A8 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x1403C7834 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x14057B7BC (PspExpandLimit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PspLockQuotaExpansion(__int64 a1, KIRQL *a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( *(_DWORD *)a1 )
  {
    *a2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 16));
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    *a2 = 0;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  }
}
