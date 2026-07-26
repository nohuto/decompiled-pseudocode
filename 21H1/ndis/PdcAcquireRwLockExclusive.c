/*
 * XREFs of PdcAcquireRwLockExclusive @ 0x1C0129484
 * Callers:
 *     PdcTaskClientRequest @ 0x1C0129300 (PdcTaskClientRequest.c)
 *     PdcTaskClientUnregister @ 0x1C01293F8 (PdcTaskClientUnregister.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PdcAcquireRwLockExclusive(__int64 a1)
{
  struct _KTHREAD *result; // rax

  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(a1, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
