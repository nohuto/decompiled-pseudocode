/*
 * XREFs of EtwpLogMemInfoTimerCallback @ 0x14062F040
 * Callers:
 *     <none>
 * Callees:
 *     MmQuerySystemMemoryInformation @ 0x140257E80 (MmQuerySystemMemoryInformation.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwpLogMemInfo @ 0x14062EED8 (EtwpLogMemInfo.c)
 *     EtwpLogMemNodeInfo @ 0x14062F0B8 (EtwpLogMemNodeInfo.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x14062F5B0 (EtwpQueuePerfMemInfoWorkItem.c)
 */

__int64 EtwpLogMemInfoTimerCallback()
{
  __int64 result; // rax
  _OWORD v1[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v1, 0, sizeof(v1));
  result = MmQuerySystemMemoryInformation(v1);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x80000) != 0 )
  {
    EtwpLogMemInfo(0LL, (__int64)v1);
    result = EtwpLogMemNodeInfo();
  }
  if ( (DWORD1(PerfGlobalGroupMask) & 0x800000) != 0 )
    return EtwpQueuePerfMemInfoWorkItem(*(_QWORD *)&v1[0]);
  return result;
}
