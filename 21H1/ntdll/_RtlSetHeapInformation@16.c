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

NTSTATUS __cdecl RtlSetHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength)
{
  NTSTATUS result; // eax
  int v5; // ecx
  int *v6; // ecx

  switch ( HeapInformationClass )
  {
    case -2147483646:
      if ( HeapInformation && (_DWORD)HeapInformationLength == 28 )
      {
        result = RtlSetHeapDebuggingInformation(HeapHandle);
LABEL_13:
        if ( result >= 0 )
          return 0;
        return result;
      }
      return -1073741823;
    case 0:
      if ( (unsigned int)HeapInformationLength < 4 )
        return -1073741789;
      if ( *(_DWORD *)HeapInformation == 2 )
      {
        if ( *((_DWORD *)HeapHandle + 2) == -571548178 )
          return 0;
        if ( (*((_DWORD *)HeapHandle + 16) & 0x75010F63) != 2 || (NtCurrentPeb()->NtGlobalFlag & 0x800) != 0 )
          return -1073741811;
        result = RtlpSetRequestedFrontEndHeap();
        goto LABEL_13;
      }
      return -1073741823;
    case 1:
      RtlpDisableBreakOnFailureCookie = 0;
      return 0;
    case 3:
      if ( HeapInformation
        && (unsigned int)HeapInformationLength >= 4
        && *(_DWORD *)HeapInformation == 1
        && (_DWORD)HeapInformationLength == 8
        && !*((_DWORD *)HeapInformation + 1) )
      {
        if ( HeapHandle )
        {
          RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
          if ( !RtlpIsProtectedHeap(HeapHandle) )
            RtlpFlushHeap();
          RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
        }
        else
        {
          RtlpEnumProcessHeaps(0);
        }
        return 0;
      }
      return -1073741811;
  }
  if ( HeapInformationClass != 4 )
  {
    if ( HeapInformationClass != 5 )
    {
      if ( HeapInformationClass != 6 )
        return 0;
      if ( (unsigned int)HeapInformationLength >= 0x14
        && *(_DWORD *)HeapInformation == 1
        && ((*((_DWORD *)HeapInformation + 1) + 4095) & 0xFFFFF000) == *((_DWORD *)HeapInformation + 1) )
      {
        if ( HeapHandle )
        {
          if ( *((_DWORD *)HeapHandle + 2) == -571548178 )
          {
            v5 = 24;
          }
          else
          {
            if ( (*((_DWORD *)HeapHandle + 17) & 0x1000000) != 0 )
              return 0;
            v5 = 212;
          }
          v6 = (int *)((char *)HeapHandle + v5);
        }
        else
        {
          v6 = &dword_4B3A432C;
        }
        v6[1] = *((_DWORD *)HeapInformation + 2);
        v6[3] = *((_DWORD *)HeapInformation + 4);
        *v6 = *((_DWORD *)HeapInformation + 1);
        v6[2] = *((_DWORD *)HeapInformation + 3);
        return 0;
      }
      return -1073741811;
    }
    if ( !HeapInformation
      || (unsigned int)HeapInformationLength < 8
      || *(_WORD *)HeapInformation != 1
      || (*((_WORD *)HeapInformation + 1) & 0xFFFE) != 0 )
    {
      return -1073741811;
    }
    result = RtlpHpStackTraceConfig(HeapInformation);
    goto LABEL_13;
  }
  if ( (RtlpHpHeapFeatures & 1) == 0 )
    return -1073741811;
  result = RtlRunOnceExecuteOnce(&RtlpHpTagInitVar, RtlpHpTagRunOnceInit, &RtlpHpTagContext, 0);
  if ( result >= 0 )
  {
    RtlpHpHeapFeatures |= 2u;
    return 0;
  }
  return result;
}
