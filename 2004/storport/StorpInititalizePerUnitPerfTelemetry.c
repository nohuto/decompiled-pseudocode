/*
 * XREFs of StorpInititalizePerUnitPerfTelemetry @ 0x1C0072E18
 * Callers:
 *     StorpInitializeUnitTelemetry @ 0x1C0018F2C (StorpInitializeUnitTelemetry.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0008278 (RaidAllocatePool.c)
 *     memset @ 0x1C001DA00 (memset.c)
 */

__int64 __fastcall StorpInititalizePerUnitPerfTelemetry(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r9
  PVOID Pool; // rax
  PVOID v5; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v7; // r9
  PVOID v8; // rax
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx

  result = 3221225473LL;
  if ( !(_DWORD)Size || !g_RaidNumberProcessors )
    return result;
  v3 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 2248) = 0LL;
  *(_QWORD *)(a1 + 2264) = 0LL;
  Pool = RaidAllocatePool(NonPagedPoolNxCacheAligned, (unsigned int)Size, 0x65546152u, v3);
  *(_QWORD *)(a1 + 2248) = Pool;
  if ( Pool )
  {
    memset(Pool, 0, (unsigned int)Size);
    v5 = RaidAllocatePool(NonPagedPoolNx, HIDWORD(qword_1C0068640), 0x65546152u, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 2264) = v5;
    if ( v5 )
    {
      memset(v5, 0, HIDWORD(qword_1C0068640));
      if ( UseQPCTime )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      v7 = *(_QWORD *)(a1 + 8);
      *(LARGE_INTEGER *)(a1 + 2256) = PerformanceCounter;
      v8 = RaidAllocatePool(NonPagedPoolNx, (unsigned int)dword_1C006865C, 0x65546152u, v7);
      *(_QWORD *)(a1 + 2272) = v8;
      if ( v8 )
        memset(v8, 0, (unsigned int)dword_1C006865C);
      result = 0LL;
      *(_OWORD *)(a1 + 2280) = 0LL;
      *(_QWORD *)(a1 + 2296) = 0LL;
      *(_QWORD *)(a1 + 2304) = 0LL;
      *(_QWORD *)(a1 + 2312) = 0LL;
      *(_QWORD *)(a1 + 3184) = 0LL;
      *(_QWORD *)(a1 + 3192) = 0LL;
      *(_QWORD *)(a1 + 2168) = 0LL;
      *(_QWORD *)(a1 + 2176) = 0LL;
      *(_QWORD *)(a1 + 2184) = 0LL;
      *(_QWORD *)(a1 + 2192) = 0LL;
      *(_QWORD *)(a1 + 2200) = 0LL;
      *(_QWORD *)(a1 + 2208) = 0LL;
      *(_QWORD *)(a1 + 2216) = 0LL;
      *(_QWORD *)(a1 + 2224) = 0LL;
      *(_QWORD *)(a1 + 2232) = 0LL;
      *(_DWORD *)(a1 + 2240) = 0;
      return result;
    }
    v9 = *(void **)(a1 + 2248);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x65546152u);
      *(_QWORD *)(a1 + 2248) = 0LL;
    }
  }
  v10 = *(void **)(a1 + 2264);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x65546152u);
    *(_QWORD *)(a1 + 2264) = 0LL;
  }
  v11 = *(void **)(a1 + 2272);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0x65546152u);
    *(_QWORD *)(a1 + 2272) = 0LL;
  }
  return 3221225495LL;
}
