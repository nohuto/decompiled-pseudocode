/*
 * XREFs of _RtlpHpStackTraceRemoveStack@8 @ 0x4B36E701
 * Callers:
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     _RtlpFreeHeapInternal@20 @ 0x4B30705A (_RtlpFreeHeapInternal@20.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlpHpStackTraceAllocRemove@8 @ 0x4B36E197 (_RtlpHpStackTraceAllocRemove@8.c)
 *     _RtlpHpStackTraceHeapGetContext@12 @ 0x4B36E4D5 (_RtlpHpStackTraceHeapGetContext@12.c)
 *     _RtlStackDbStackRemove@8 @ 0x4B38A807 (_RtlStackDbStackRemove@8.c)
 */

int __usercall RtlpHpStackTraceRemoveStack@<eax>(int a1@<edx>, int a2@<ecx>, int a3@<ebp>)
{
  int v5; // eax
  int v7[4]; // [esp-4h] [ebp-10h] BYREF
  int retaddr; // [esp+Ch] [ebp+0h]

  v7[1] = a3;
  v7[2] = retaddr;
  v7[0] = a2;
  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
  if ( (dword_4B3A6834 & 1) != 0 && (dword_4B3A6834 & 2) != 0 && RtlpHpStackTraceHeapGetContext(a2, 0, v7) >= 0 )
  {
    v5 = RtlpHpStackTraceAllocRemove(v7[0], a1);
    if ( v5 )
      RtlStackDbStackRemove(&dword_4B3A6838, v5);
  }
  return RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
