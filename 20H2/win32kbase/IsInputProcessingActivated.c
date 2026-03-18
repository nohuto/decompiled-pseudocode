/*
 * XREFs of IsInputProcessingActivated @ 0x1C00A6AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool IsInputProcessingActivated()
{
  CInputThread *v0; // rdi
  bool v1; // bl

  v0 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v0, 0LL);
  v1 = *((_DWORD *)v0 + 4) == 2;
  ExReleasePushLockSharedEx(v0, 0LL);
  KeLeaveCriticalRegion();
  return v1;
}
