/*
 * XREFs of DpiFdoGetDeviceFileObject @ 0x1C0389628
 * Callers:
 *     DpiIndirectCbSendMessage @ 0x1C03929B0 (DpiIndirectCbSendMessage.c)
 * Callees:
 *     <none>
 */

void *__fastcall DpiFdoGetDeviceFileObject(__int64 a1)
{
  __int64 v1; // rsi
  void *v3; // rdi

  v1 = a1 + 1168;
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 1168);
  v3 = *(void **)(a1 + 1232);
  *(_QWORD *)(a1 + 1224) = KeGetCurrentThread();
  if ( v3 )
    ObfReferenceObject(v3);
  *(_QWORD *)(a1 + 1224) = 0LL;
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v1);
  return v3;
}
