/*
 * XREFs of _RtlpHpStackTraceAddStack@8 @ 0x4B36DDE3
 * Callers:
 *     _RtlpReAllocateHeapInternal@24 @ 0x4B2C2710 (_RtlpReAllocateHeapInternal@24.c)
 *     _RtlpAllocateHeapInternal@16 @ 0x4B2C5D90 (_RtlpAllocateHeapInternal@16.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 *     _RtlpHpStackTraceAllocAdd@12 @ 0x4B36DEC6 (_RtlpHpStackTraceAllocAdd@12.c)
 *     _RtlpHpStackTraceHeapGetContext@12 @ 0x4B36E4D5 (_RtlpHpStackTraceHeapGetContext@12.c)
 *     _RtlpHpMetadataAlloc@20 @ 0x4B379349 (_RtlpHpMetadataAlloc@20.c)
 *     _RtlpHpMetadataFree@12 @ 0x4B379479 (_RtlpHpMetadataFree@12.c)
 *     _RtlStackDbStackAdd@12 @ 0x4B38A376 (_RtlStackDbStackAdd@12.c)
 *     _RtlStackDbStackRemove@8 @ 0x4B38A807 (_RtlStackDbStackRemove@8.c)
 */

void __usercall RtlpHpStackTraceAddStack(int a1@<edx>, int a2@<ecx>, int a3@<ebp>)
{
  PVOID *v3; // esi
  PVOID *v4; // eax
  USHORT v5; // ax
  int v6; // eax
  int v7; // eax
  _DWORD v8[5]; // [esp-8h] [ebp-14h] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v8[2] = a3;
  v8[3] = retaddr;
  v8[0] = a2;
  v8[1] = a1;
  v3 = 0;
  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
  if ( (dword_4B3A6834 & 1) != 0 && (dword_4B3A6834 & 2) != 0 && (int)RtlpHpStackTraceHeapGetContext(v8) >= 0 )
  {
    v4 = (PVOID *)RtlpHpMetadataAlloc(0, RtlpHpEnvHandle, dword_4B3A446C);
    v3 = v4;
    if ( v4 )
    {
      v5 = RtlCaptureStackBackTrace(1u, 0xC0u, v4, 0);
      if ( v5 )
      {
        v6 = RtlStackDbStackAdd(v5);
        if ( v6 )
        {
          v7 = RtlpHpStackTraceAllocAdd(v6) == 0 ? v6 : 0;
          if ( v7 )
            RtlStackDbStackRemove(&dword_4B3A6838, v7);
        }
      }
    }
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
  if ( v3 )
    RtlpHpMetadataFree(RtlpHpEnvHandle, dword_4B3A446C);
}
