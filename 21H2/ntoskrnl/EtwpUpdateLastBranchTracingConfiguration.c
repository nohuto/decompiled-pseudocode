/*
 * XREFs of EtwpUpdateLastBranchTracingConfiguration @ 0x140948300
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140938730 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     EtwpAllocateLbrData @ 0x140948234 (EtwpAllocateLbrData.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x140948280 (EtwpReferenceLastBranchLookasideList.c)
 */

__int64 __fastcall EtwpUpdateLastBranchTracingConfiguration(__int64 a1, __int64 a2)
{
  int LbrData; // ebx
  unsigned int v4; // esi

  if ( EtwpLastBranchSupportedOptions )
  {
    v4 = *(_DWORD *)(a2 + 16);
    if ( (~EtwpLastBranchSupportedOptions & v4) != 0 || (v4 & 3) == 3 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 832) & 0x8000) != 0 )
        return 3221226243LL;
      if ( *(_QWORD *)(a1 + 1008) || (LbrData = EtwpAllocateLbrData(a1), LbrData >= 0) )
      {
        if ( **(_DWORD **)(a1 + 1008) )
        {
          return (unsigned int)-1073741053;
        }
        else
        {
          LbrData = ((__int64 (__fastcall *)(_QWORD))off_140C009B0[0])(v4);
          if ( LbrData >= 0 )
          {
            EtwpReferenceLastBranchLookasideList();
            *(_DWORD *)(*(_QWORD *)(a1 + 1008) + 4LL) = v4;
            _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x8000u);
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)LbrData;
}
