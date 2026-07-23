/*
 * XREFs of _RtlSetHeapDebuggingInformation@8 @ 0x4B357004
 * Callers:
 *     _RtlSetHeapInformation@16 @ 0x4B2ECAF0 (_RtlSetHeapInformation@16.c)
 *     _RtlHeapTrkInitialize@4 @ 0x4B364170 (_RtlHeapTrkInitialize@4.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlpIsProtectedHeap@4 @ 0x4B2ECC15 (_RtlpIsProtectedHeap@4.c)
 *     _RtlpEnumProcessHeaps@12 @ 0x4B35791E (_RtlpEnumProcessHeaps@12.c)
 *     _RtlpSetHeapDebuggingInformation@8 @ 0x4B359790 (_RtlpSetHeapDebuggingInformation@8.c)
 */

int __fastcall RtlSetHeapDebuggingInformation(_DWORD *a1, _DWORD *a2)
{
  int v5; // esi

  if ( a1 )
  {
    if ( (a1[17] & 0x1000000) != 0 )
    {
      return -1073741822;
    }
    else
    {
      RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
      if ( RtlpIsProtectedHeap(a1) )
        v5 = -1073741811;
      else
        v5 = RtlpSetHeapDebuggingInformation(a1, a2);
      RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
      return v5;
    }
  }
  else
  {
    dword_4B3A4888 = a2[2];
    dword_4B3A4898 = a2[6];
    dword_4B3A4894 = a2[5];
    dword_4B3A4890 = a2[4];
    dword_4B3A488C = a2[3];
    RtlpEnumProcessHeaps(0);
    return 0;
  }
}
