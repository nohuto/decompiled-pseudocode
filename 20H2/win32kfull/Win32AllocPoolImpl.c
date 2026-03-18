/*
 * XREFs of Win32AllocPoolImpl @ 0x1C00E5CF0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C015F880 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02DC194 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02DC234 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

char *__fastcall Win32AllocPoolImpl(POOL_TYPE a1, SIZE_T a2, ULONG a3)
{
  PVOID DeviceContext; // rbx
  __int64 v5; // rax
  char v6; // si
  char *PoolWithTag; // rdi
  PVOID BackTrace[21]; // [rsp+20h] [rbp-A8h] BYREF

  DeviceContext = WPP_MAIN_CB.Queue.Wcb.DeviceContext;
  if ( (a3 & *((_DWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 10)) != a3 )
    return (char *)ExAllocatePoolWithTag(a1, a2, a3);
  v5 = 0LL;
  if ( !*((_DWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 11) )
    return (char *)ExAllocatePoolWithTag(a1, a2, a3);
  while ( *((_DWORD *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + v5) != a3 )
  {
    if ( ++v5 >= (unsigned __int64)*((unsigned int *)WPP_MAIN_CB.Queue.Wcb.DeviceContext + 11) )
      return (char *)ExAllocatePoolWithTag(a1, a2, a3);
  }
  v6 = 0;
  if ( a2 < 0x1000 || (a2 & 0xFFF) != 0 )
  {
    v6 = 1;
    a2 += 16LL;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(a1, a2, a3);
  if ( PoolWithTag )
  {
    memset(BackTrace, 0, 0xA0uLL);
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
    if ( v6 && (unsigned __int64)((unsigned __int16)PoolWithTag & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              DeviceContext,
                              PoolWithTag,
                              BackTrace) )
        return PoolWithTag + 16;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 DeviceContext,
                                 PoolWithTag,
                                 BackTrace) )
    {
      return PoolWithTag;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return 0LL;
}
