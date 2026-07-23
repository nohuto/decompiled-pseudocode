/*
 * XREFs of HalpHvTimerInitialize @ 0x140390D10
 * Callers:
 *     <none>
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14037AE50 (HalQueryMaximumProcessorCount.c)
 *     HalpHvTimerAcknowledgeInterrupt @ 0x140390D50 (HalpHvTimerAcknowledgeInterrupt.c)
 *     HalSocRequestApi @ 0x1403A21EC (HalSocRequestApi.c)
 *     HalMapIoSpace @ 0x1403AD060 (HalMapIoSpace.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpHvTimerInitialize(LARGE_INTEGER *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  PVOID v6; // rax
  __int64 v7; // rcx
  __int64 MaximumProcessorCount; // rdi
  LARGE_INTEGER v9; // rax
  PVOID v10; // rax
  LARGE_INTEGER *v11; // rcx
  LARGE_INTEGER *v12; // rbx
  __int64 v13; // r8
  LONGLONG QuadPart; // rax

  LODWORD(v1) = KeGetPcr()->Prcb.Number;
  v3 = 3 * v1;
  if ( a1[3 * v1 + 1].QuadPart )
  {
    HalpHvTimerAcknowledgeInterrupt();
    return 0LL;
  }
  if ( HalpHvCpuManager )
  {
    v5 = __readmsr(0x40000083u) & 0xFFFFFFFFFFFFF000uLL;
    a1[v3 + 2].QuadPart = v5;
    v6 = HalMapIoSpace((LARGE_INTEGER)v5, 0x1000uLL, MmCached);
    a1[v3 + 1].QuadPart = (LONGLONG)v6;
    if ( v6 )
      return 0LL;
    return 3221225626LL;
  }
  result = HalSocRequestApi((int)a1, 0, 4, 8, &HalpHvPhysicalMemoryApi);
  if ( (int)result >= 0 )
  {
    MaximumProcessorCount = (unsigned int)HalQueryMaximumProcessorCount(v7);
    v9.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))HalpHvPhysicalMemoryApi)(-1LL, MaximumProcessorCount);
    if ( v9.QuadPart )
    {
      a1[2] = v9;
      v10 = HalMapIoSpace(v9, (unsigned __int64)(unsigned int)MaximumProcessorCount << 12, MmCached);
      v11 = a1 + 1;
      a1[1].QuadPart = (LONGLONG)v10;
      if ( v10 )
      {
        if ( (unsigned int)MaximumProcessorCount > 1 )
        {
          v12 = a1 + 4;
          v13 = (unsigned int)(MaximumProcessorCount - 1);
          do
          {
            v12[1].QuadPart = v11[1].QuadPart + 4096;
            QuadPart = v11->QuadPart;
            v11 += 3;
            v12->QuadPart = QuadPart + 4096;
            v12 += 3;
            --v13;
          }
          while ( v13 );
        }
        return 0LL;
      }
    }
    return 3221225626LL;
  }
  return result;
}
