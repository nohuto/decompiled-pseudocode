/*
 * XREFs of ExSaFree @ 0x140390E3C
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x1402D4DE0 (ExCleanupAutoExpandPushLock.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExpSaAllocatorFree @ 0x140390EB4 (ExpSaAllocatorFree.c)
 */

__int64 __fastcall ExSaFree(unsigned int a1)
{
  __int64 v1; // r8
  unsigned int v2; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v1 = (a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v2, v1);
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageGroupDescriptorArray + 8LL * (v2 - 2))
                             + 8 * (v1 ^ (unsigned int)(1 << v2))
                             + 8)
                 + 16LL);
  --CurrentThread->SpecialApcDisable;
  ExpSaAllocatorFree(v4);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
}
