/*
 * XREFs of IopGetFsRegistrationInProgress @ 0x140500D48
 * Callers:
 *     IoEnumerateRegisteredFiltersList @ 0x140758340 (IoEnumerateRegisteredFiltersList.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1407B3FE0 (IoRegisterFsRegistrationChangeMountAware.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 */

char IopGetFsRegistrationInProgress()
{
  KIRQL v0; // al
  char v1; // bl

  v0 = KeAcquireQueuedSpinLock(0xAuLL);
  v1 = IopFsRegistrationInProgress;
  KeReleaseQueuedSpinLock(0xAuLL, v0);
  return v1;
}
