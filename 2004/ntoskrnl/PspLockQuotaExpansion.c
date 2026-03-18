/*
 * XREFs of PspLockQuotaExpansion @ 0x14034CD50
 * Callers:
 *     PspReturnResourceQuota @ 0x14034C9F8 (PspReturnResourceQuota.c)
 *     PspExpandQuota @ 0x14034CA78 (PspExpandQuota.c)
 *     PspInsertExpansionEntry @ 0x1403C8644 (PspInsertExpansionEntry.c)
 *     PspExpandLimit @ 0x14057BDFC (PspExpandLimit.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D79F0 (KeAcquireSpinLockRaiseToDpc.c)
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
