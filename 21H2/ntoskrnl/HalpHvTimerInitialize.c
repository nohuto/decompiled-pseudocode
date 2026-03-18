/*
 * XREFs of HalpHvTimerInitialize @ 0x14039E230
 * Callers:
 *     <none>
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     HalpHvTimerAcknowledgeInterrupt @ 0x14039E270 (HalpHvTimerAcknowledgeInterrupt.c)
 *     HalSocRequestApi @ 0x1403B38C8 (HalSocRequestApi.c)
 *     HalMapIoSpace @ 0x1403BE7F0 (HalMapIoSpace.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpHvTimerInitialize(LARGE_INTEGER *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  PVOID v6; // rax
  __int64 MaximumProcessorCount; // rdi
  LARGE_INTEGER v8; // rax
  PVOID v9; // rax
  LARGE_INTEGER *v10; // rcx
  LARGE_INTEGER *v11; // rbx
  __int64 v12; // r8
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
    MaximumProcessorCount = (unsigned int)HalQueryMaximumProcessorCount();
    v8.QuadPart = ((__int64 (__fastcall *)(__int64, __int64))HalpHvPhysicalMemoryApi)(-1LL, MaximumProcessorCount);
    if ( v8.QuadPart )
    {
      a1[2] = v8;
      v9 = HalMapIoSpace(v8, (unsigned __int64)(unsigned int)MaximumProcessorCount << 12, MmCached);
      v10 = a1 + 1;
      a1[1].QuadPart = (LONGLONG)v9;
      if ( v9 )
      {
        if ( (unsigned int)MaximumProcessorCount > 1 )
        {
          v11 = a1 + 4;
          v12 = (unsigned int)(MaximumProcessorCount - 1);
          do
          {
            v11[1].QuadPart = v10[1].QuadPart + 4096;
            QuadPart = v10->QuadPart;
            v10 += 3;
            v11->QuadPart = QuadPart + 4096;
            v11 += 3;
            --v12;
          }
          while ( v12 );
        }
        return 0LL;
      }
    }
    return 3221225626LL;
  }
  return result;
}
