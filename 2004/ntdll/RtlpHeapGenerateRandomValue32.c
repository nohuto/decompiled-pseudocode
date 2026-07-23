/*
 * XREFs of RtlpHeapGenerateRandomValue32 @ 0x18000A448
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x180003FA4 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x18000A068 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpSubSegmentInitialize @ 0x18000A090 (RtlpSubSegmentInitialize.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18002B650 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhSlotAllocate @ 0x18002C2B0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpAllocateHeap @ 0x18002D160 (RtlpAllocateHeap.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x18010EC10 (RtlpHpSegMgrApplyLargePagePolicy.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18000A530 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceComplete @ 0x180043AA0 (RtlRunOnceComplete.c)
 *     NtQueryInformationProcess @ 0x18009D130 (NtQueryInformationProcess.c)
 *     RtlReportCriticalFailure @ 0x1800FF0CC (RtlReportCriticalFailure.c)
 *     RtlpInitRandomExVector @ 0x180102370 (RtlpInitRandomExVector.c)
 */

__int64 RtlpHeapGenerateRandomValue32()
{
  NTSTATUS v0; // eax
  __int32 v1; // r8d
  int v2; // ecx
  unsigned int v5; // r8d
  char v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+10h]

  if ( !dword_18016B208
    && NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_18016B208, 4u, 0LL) < 0 )
  {
    dword_18016B208 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  }
  v0 = RtlRunOnceBeginInitialize(&RtlpRandomExInit, 0, 0LL);
  if ( v0 < 0 )
  {
    v7 = 0;
  }
  else
  {
    if ( v0 != 259 )
      goto LABEL_4;
    if ( RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
    {
      v0 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
      if ( v0 >= 0 )
        goto LABEL_4;
      v7 = 1;
    }
    else
    {
      v0 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
      if ( v0 >= 0 )
        goto LABEL_4;
      v7 = 2;
    }
  }
  RtlReportCriticalFailure((unsigned int)v0, &v7, 1LL);
LABEL_4:
  dword_18016B208 = (2147483629 * (unsigned __int64)(unsigned int)dword_18016B208 + 2147483587) % 0x7FFFFFFF;
  v1 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_18016B208);
  if ( MEMORY[0x7FFE0290] )
  {
    v2 = 0;
    while ( 1 )
    {
      __asm { rdrand  edx }
      v8 = _EDX;
      if ( _CF )
        break;
      if ( (unsigned int)++v2 >= 0xA )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    _EDX = 0;
  }
  v5 = _EDX ^ v1;
  _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v5);
  return v5;
}
