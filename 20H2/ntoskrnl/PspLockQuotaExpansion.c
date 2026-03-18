/*
 * XREFs of PspLockQuotaExpansion @ 0x14031DAB0
 * Callers:
 *     PspReturnResourceQuota @ 0x14031D758 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x14031D7D8 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x1403CB284 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x14057F82C (PspExpandLimit.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
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
