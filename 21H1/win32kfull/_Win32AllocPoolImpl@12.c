/*
 * XREFs of _Win32AllocPoolImpl@12 @ 0x83070
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x249945 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBa.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x2499AB (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCB.c)
 */

char *__stdcall Win32AllocPoolImpl(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  SIZE_T v3; // esi
  unsigned int v5; // ebx
  int v6; // ecx
  char v7; // bl
  char *PoolWithTag; // esi
  PVOID BackTrace[20]; // [esp+18h] [ebp-50h] BYREF

  v3 = NumberOfBytes;
  if ( (Tag & *(_DWORD *)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 40)) != Tag )
    return (char *)ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
  v5 = *(_DWORD *)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 44);
  v6 = 0;
  if ( !v5 )
    return (char *)ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
  while ( *(_DWORD *)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 4 * v6) != Tag )
  {
    if ( ++v6 >= v5 )
      return (char *)ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
  }
  v7 = 0;
  if ( NumberOfBytes < 0x1000 || (NumberOfBytes & 0xFFF) != 0 )
  {
    v7 = 1;
    v3 = NumberOfBytes + 8;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, v3, Tag);
  if ( PoolWithTag )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0);
    if ( v7 && ((unsigned __int16)PoolWithTag & 0xFFFu) + 8 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              PoolWithTag,
                              (struct NSInstrumentation::CBackTrace *)BackTrace) )
        return PoolWithTag + 8;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 (char)PoolWithTag,
                                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      return PoolWithTag;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  return 0;
}
