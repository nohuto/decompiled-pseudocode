/*
 * XREFs of IsInputThread @ 0x1C0082F20
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00533CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsInputThread()
{
  CInputThread *v0; // rdi
  bool v1; // bl

  v0 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v0, 0LL);
  v1 = (unsigned int)PsGetCurrentThreadId() == *((_DWORD *)v0 + 10);
  ExReleasePushLockSharedEx(v0, 0LL);
  KeLeaveCriticalRegion();
  return v1;
}
