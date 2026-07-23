/*
 * XREFs of _RtlpSetRequestedFrontEndHeap@8 @ 0x4B2ECB78
 * Callers:
 *     _RtlSetHeapInformation@16 @ 0x4B2ECAF0 (_RtlSetHeapInformation@16.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpSetRequestedFrontEndHeap@8 @ 0x4B2ECB78 (_RtlpSetRequestedFrontEndHeap@8.c)
 *     _RtlpIsProtectedHeap@4 @ 0x4B2ECC15 (_RtlpIsProtectedHeap@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __thiscall RtlpSetRequestedFrontEndHeap(int this)
{
  int v2; // ebx
  char v4; // [esp+1Bh] [ebp-19h]

  v2 = 0;
  v4 = 0;
  RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  if ( RtlpIsProtectedHeap(this) )
  {
    v2 = -1073741811;
  }
  else
  {
    RtlEnterCriticalSection(*(PRTL_CRITICAL_SECTION *)(this + 200));
    v4 = 1;
    if ( !*(_BYTE *)(this + 235) )
    {
      *(_BYTE *)(this + 235) = 2;
      RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(this + 200));
      v4 = 0;
    }
  }
  if ( v4 )
    RtlLeaveCriticalSection(*(PRTL_CRITICAL_SECTION *)(this + 200));
  RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  return v2;
}
