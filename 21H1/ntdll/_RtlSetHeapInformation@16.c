/*
 * XREFs of _RtlSetHeapInformation@16 @ 0x4B2ECAF0
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _RtlpExtendedHeapInformationWorkerThread@4 @ 0x4B357D30 (_RtlpExtendedHeapInformationWorkerThread@4.c)
 *     _RtlHeapTrkInitialize@4 @ 0x4B364170 (_RtlHeapTrkInitialize@4.c)
 * Callees:
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpSetRequestedFrontEndHeap@8 @ 0x4B2ECB78 (_RtlpSetRequestedFrontEndHeap@8.c)
 *     _RtlpIsProtectedHeap@4 @ 0x4B2ECC15 (_RtlpIsProtectedHeap@4.c)
 *     _RtlSetHeapDebuggingInformation@8 @ 0x4B357004 (_RtlSetHeapDebuggingInformation@8.c)
 *     _RtlpEnumProcessHeaps@12 @ 0x4B35791E (_RtlpEnumProcessHeaps@12.c)
 *     _RtlpFlushHeap@4 @ 0x4B35D672 (_RtlpFlushHeap@4.c)
 *     _RtlpHpStackTraceConfig@4 @ 0x4B36E268 (_RtlpHpStackTraceConfig@4.c)
 */

int __stdcall RtlSetHeapInformation(_DWORD *a1, int a2, int a3, unsigned int a4)
{
  int result; // eax
  int v5; // ecx
  int *v6; // ecx

  switch ( a2 )
  {
    case -2147483646:
      if ( a3 && a4 == 28 )
      {
        result = RtlSetHeapDebuggingInformation(a1);
LABEL_13:
        if ( result >= 0 )
          return 0;
        return result;
      }
      return -1073741823;
    case 0:
      if ( a4 < 4 )
        return -1073741789;
      if ( *(_DWORD *)a3 == 2 )
      {
        if ( a1[2] == -571548178 )
          return 0;
        if ( (a1[16] & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          return -1073741811;
        result = RtlpSetRequestedFrontEndHeap();
        goto LABEL_13;
      }
      return -1073741823;
    case 1:
      RtlpDisableBreakOnFailureCookie = 0;
      return 0;
    case 3:
      if ( a3 && a4 >= 4 && *(_DWORD *)a3 == 1 && a4 == 8 && !*(_DWORD *)(a3 + 4) )
      {
        if ( a1 )
        {
          RtlEnterCriticalSection((int)&RtlpProcessHeapsListLock);
          if ( !RtlpIsProtectedHeap(a1) )
            RtlpFlushHeap();
          RtlLeaveCriticalSection((int)&RtlpProcessHeapsListLock);
        }
        else
        {
          RtlpEnumProcessHeaps(0);
        }
        return 0;
      }
      return -1073741811;
  }
  if ( a2 != 4 )
  {
    if ( a2 != 5 )
    {
      if ( a2 != 6 )
        return 0;
      if ( a4 >= 0x14 && *(_DWORD *)a3 == 1 && ((*(_DWORD *)(a3 + 4) + 4095) & 0xFFFFF000) == *(_DWORD *)(a3 + 4) )
      {
        if ( a1 )
        {
          if ( a1[2] == -571548178 )
          {
            v5 = 6;
          }
          else
          {
            if ( (a1[17] & 0x1000000) != 0 )
              return 0;
            v5 = 53;
          }
          v6 = &a1[v5];
        }
        else
        {
          v6 = &dword_4B3A432C;
        }
        v6[1] = *(_DWORD *)(a3 + 8);
        v6[3] = *(_DWORD *)(a3 + 16);
        *v6 = *(_DWORD *)(a3 + 4);
        v6[2] = *(_DWORD *)(a3 + 12);
        return 0;
      }
      return -1073741811;
    }
    if ( !a3 || a4 < 8 || *(_WORD *)a3 != 1 || (*(_WORD *)(a3 + 2) & 0xFFFE) != 0 )
      return -1073741811;
    result = RtlpHpStackTraceConfig(a3);
    goto LABEL_13;
  }
  if ( (RtlpHpHeapFeatures & 1) == 0 )
    return -1073741811;
  result = RtlRunOnceExecuteOnce((int)&RtlpHpTagInitVar, RtlpHpTagRunOnceInit, (int)&RtlpHpTagContext, 0);
  if ( result >= 0 )
  {
    RtlpHpHeapFeatures |= 2u;
    return 0;
  }
  return result;
}
