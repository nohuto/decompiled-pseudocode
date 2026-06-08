/*
 * XREFs of InitEnergyCountersOnCurrentProcessor @ 0x1C001EA50
 * Callers:
 *     <none>
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0001B10 (GetDevExtFromIndex.c)
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C000EA60 (GetCpuIdInfo.c)
 *     InitCoreProcessorSetAffinity @ 0x1C001E9AC (InitCoreProcessorSetAffinity.c)
 *     IsEnergyMsrSupported @ 0x1C001EBE0 (IsEnergyMsrSupported.c)
 */

__int64 InitEnergyCountersOnCurrentProcessor()
{
  unsigned int Number; // ebp
  LARGE_INTEGER *v1; // rdi
  int inited; // ebx
  unsigned __int64 v3; // rax
  char v4; // si
  __int64 DevExtFromIndex; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int64 v7; // rax
  void *v8; // rax
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v10 = 0LL;
  v1 = *(LARGE_INTEGER **)(GetDevExtFromIndex(Number) + 360);
  v11 = 0LL;
  GetCpuIdInfo(0x80000000, &v10);
  if ( (unsigned int)v10 >= 7
    && (GetCpuIdInfo(0x80000007, &v11), (WORD6(v11) & 0x4000) != 0)
    && (unsigned __int8)IsEnergyMsrSupported() )
  {
    inited = InitCoreProcessorSetAffinity();
    if ( inited >= 0 )
    {
      v3 = __readmsr(0xC001029A);
      v4 = 1;
      v1->LowPart = 1;
      v1[2].QuadPart = (unsigned int)v3;
      v1[4].QuadPart = (unsigned int)v3;
      v1[3].QuadPart = (unsigned int)v3;
      DevExtFromIndex = GetDevExtFromIndex(KeGetPcr()->Prcb.Number);
      if ( RtlNumberOfSetBitsUlongPtr(*(_QWORD *)(DevExtFromIndex + 1200)) <= 1 )
      {
        v4 = 0;
      }
      else
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v1[14] = PerformanceCounter;
        v1[16] = PerformanceCounter;
        v1[15] = PerformanceCounter;
      }
      if ( !Number )
      {
        v7 = __readmsr(0xC0010299);
        WPP_MAIN_CB.Queue.Wcb.WaitQueueEntry.SortKey = ((unsigned int)v7 >> 8) & 0x1F;
        if ( v4 )
        {
          qword_1C0013AD8[0] = (__int64)SnapEnergyCountersAndTimestamp;
          v8 = ComputeHyperThreadedProcessorEnergyUsingMsr;
        }
        else
        {
          qword_1C0013AD8[0] = (__int64)SnapEnergyCounters;
          v8 = ComputeProcessorEnergyUsingMsr;
        }
        qword_1C0013AD0[0] = (__int64)v8;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)inited;
}
