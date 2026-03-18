/*
 * XREFs of IopInterlockedInsertHeadList @ 0x1403C2088
 * Callers:
 *     IoRegisterLastChanceShutdownNotification @ 0x1407AC090 (IoRegisterLastChanceShutdownNotification.c)
 *     IoRegisterShutdownNotification @ 0x1407AC110 (IoRegisterShutdownNotification.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall IopInterlockedInsertHeadList(__int64 *a1, _QWORD *a2)
{
  KIRQL v4; // al
  __int64 v5; // rcx

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = *a1;
  if ( *(__int64 **)(*a1 + 8) != a1 )
    __fastfail(3u);
  *a2 = v5;
  a2[1] = a1;
  *(_QWORD *)(v5 + 8) = a2;
  *a1 = (__int64)a2;
  KeReleaseQueuedSpinLock(0xAuLL, v4);
}
