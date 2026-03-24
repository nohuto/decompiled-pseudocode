/*
 * XREFs of CiReleaseProcessLock @ 0x1C000BC90
 * Callers:
 *     CiThreadReferenceTaskIndex @ 0x1C0001D30 (CiThreadReferenceTaskIndex.c)
 *     CiProcessSuspend @ 0x1C00048B4 (CiProcessSuspend.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CiReleaseProcessLock(__int64 a1)
{
  __int64 v1; // rcx

  v1 = a1 + 16;
  *(_QWORD *)(v1 + 8) = 0LL;
  return ExReleasePushLockExclusiveEx(v1, 0LL);
}
