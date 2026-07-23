/*
 * XREFs of KeFlushIoBuffers @ 0x1402FB650
 * Callers:
 *     HalpDmaFlushDriverMdl @ 0x1404B213C (HalpDmaFlushDriverMdl.c)
 *     HalFlushDmaBuffer @ 0x1404BEFD0 (HalFlushDmaBuffer.c)
 *     HalpDmaFlushBuffer @ 0x1404C21FC (HalpDmaFlushBuffer.c)
 *     HalpDmaFlushBufferWithEmergencyResources @ 0x1404C2430 (HalpDmaFlushBufferWithEmergencyResources.c)
 *     HalpDmaSyncMapBuffersWithEmergencyResources @ 0x1404C320C (HalpDmaSyncMapBuffersWithEmergencyResources.c)
 *     HalpFlushMapBuffers @ 0x1404C375C (HalpFlushMapBuffers.c)
 *     ViMapDoubleBuffer @ 0x1409CC074 (ViMapDoubleBuffer.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     EtwGetKernelTraceTimestamp @ 0x1402EE940 (EtwGetKernelTraceTimestamp.c)
 *     KeInvalidateAllCaches @ 0x1403A18E0 (KeInvalidateAllCaches.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiFlushRangeAllCaches @ 0x1405140B0 (KiFlushRangeAllCaches.c)
 *     EtwTraceCpuCacheFlush @ 0x1405A1A04 (EtwTraceCpuCacheFlush.c)
 */

char __fastcall KeFlushIoBuffers(ULONG_PTR BugCheckParameter4, char a2, char a3, __int64 a4)
{
  PVOID v4; // rax
  unsigned __int8 CurrentIrql; // r15
  __int64 v9; // r12
  char v10; // si
  void *v11; // rbx
  _OWORD v13[2]; // [rsp+30h] [rbp-58h] BYREF

  LOBYTE(v4) = KiSystemFullyCoherent;
  memset(v13, 0, sizeof(v13));
  if ( !KiSystemFullyCoherent )
  {
    CurrentIrql = KeGetCurrentIrql();
    v9 = *(unsigned int *)(BugCheckParameter4 + 40);
    if ( a3 || a2 )
    {
      v10 = 1;
      if ( (*(_BYTE *)(BugCheckParameter4 + 10) & 5) != 0 )
      {
        v11 = *(void **)(BugCheckParameter4 + 24);
      }
      else
      {
        v4 = MmMapLockedPagesSpecifyCache((PMDL)BugCheckParameter4, 0, MmCached, 0LL, 0, 0x40000020u);
        v11 = v4;
      }
      if ( !v11 && CurrentIrql == 15 )
        KeBugCheckEx(0x55u, 0x86uLL, 0xBADuLL, 0LL, 0LL);
      if ( (xmmword_140CFC490 & 0x4000000) != 0 )
        LOBYTE(v4) = EtwGetKernelTraceTimestamp((LARGE_INTEGER *)v13, 0x84000000).LowPart;
      else
        v10 = 0;
      if ( v11 )
      {
        LOBYTE(v4) = KiFlushRangeAllCaches(BugCheckParameter4, v11, v9, a3);
      }
      else if ( a3 )
      {
        LOBYTE(v4) = KeInvalidateAllCaches();
      }
      if ( v10 )
      {
        LOBYTE(a4) = a2 == 0;
        LOBYTE(v4) = EtwTraceCpuCacheFlush(v13, v11, v9, a4);
      }
    }
  }
  return (char)v4;
}
