/*
 * XREFs of _Win32AllocPoolWithQuotaImpl@12 @ 0x8D904
 * Callers:
 *     <none>
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x249945 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBa.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCBackTrace@1@@Z @ 0x2499AB (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AAE_NPAXPAVCB.c)
 */

char *__stdcall Win32AllocPoolWithQuotaImpl(int a1, SIZE_T NumberOfBytes, ULONG Tag)
{
  int v3; // edx
  SIZE_T v4; // esi
  int v5; // ebx
  int v7; // eax
  char *PoolWithQuotaTag; // esi
  char v9; // [esp+13h] [ebp-5Dh]
  unsigned int v10; // [esp+14h] [ebp-5Ch]
  PVOID BackTrace[20]; // [esp+20h] [ebp-50h] BYREF

  v3 = a1;
  v4 = NumberOfBytes;
  if ( (Tag & *(_DWORD *)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 40)) != Tag )
    return (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(v3 | 8), NumberOfBytes, Tag);
  v5 = 0;
  v10 = *(_DWORD *)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 44);
  v3 = a1;
  v7 = 0;
  if ( !v10 )
    return (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(v3 | 8), NumberOfBytes, Tag);
  while ( *(_DWORD *)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 4 * v7) != Tag )
  {
    if ( ++v7 >= v10 )
      return (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(v3 | 8), NumberOfBytes, Tag);
  }
  v9 = 0;
  if ( NumberOfBytes < 0x1000 || (NumberOfBytes & 0xFFF) != 0 )
  {
    v9 = 1;
    v4 = NumberOfBytes + 8;
  }
  PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)(a1 | 8), v4, Tag);
  if ( PoolWithQuotaTag )
  {
    memset(BackTrace, 0, sizeof(BackTrace));
    RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0);
    if ( v9 && ((unsigned __int16)PoolWithQuotaTag & 0xFFFu) + 8 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              PoolWithQuotaTag,
                              (struct NSInstrumentation::CBackTrace *)BackTrace) )
        return PoolWithQuotaTag + 8;
    }
    else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                 (char)PoolWithQuotaTag,
                                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
    {
      return PoolWithQuotaTag;
    }
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  }
  return (char *)v5;
}
