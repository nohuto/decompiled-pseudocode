/*
 * XREFs of ExSaFree @ 0x140393E6C
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x140262F60 (ExCleanupAutoExpandPushLock.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     ExpSaAllocatorFree @ 0x140393EE4 (ExpSaAllocatorFree.c)
 */

__int64 __fastcall ExSaFree(unsigned int a1)
{
  __int64 v1; // r8
  unsigned int v2; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // rcx

  v1 = (a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v2, v1);
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageGroupDescriptorArray + 8LL * (v2 - 2))
                             + 8 * (v1 ^ (unsigned int)(1 << v2))
                             + 8)
                 + 16LL);
  --CurrentThread->SpecialApcDisable;
  ExpSaAllocatorFree(v4);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
