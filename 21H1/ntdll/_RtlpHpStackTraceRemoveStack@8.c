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

void __usercall RtlpHpStackTraceRemoveStack(int a1@<edx>, _DWORD *a2@<ecx>, void *a3@<ebp>)
{
  int v5; // eax
  PVOID v6[4]; // [esp-4h] [ebp-10h] BYREF
  void *retaddr; // [esp+Ch] [ebp+0h]

  v6[1] = a3;
  v6[2] = retaddr;
  v6[0] = a2;
  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
  if ( (dword_4B3A6834 & 1) != 0 && (dword_4B3A6834 & 2) != 0 && RtlpHpStackTraceHeapGetContext(a2, 0, v6) >= 0 )
  {
    v5 = RtlpHpStackTraceAllocRemove((_RTL_SRWLOCK *)v6[0], a1);
    if ( v5 )
      RtlStackDbStackRemove(&dword_4B3A6838, v5);
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
