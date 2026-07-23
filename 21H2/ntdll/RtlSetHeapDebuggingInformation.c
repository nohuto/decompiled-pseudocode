/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x1800F2C68
 * Callers:
 *     RtlSetHeapInformation @ 0x180074DE0 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x1800FDB00 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x1800752CC (RtlpEnumProcessHeaps.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800F4AB0 (RtlpSetHeapDebuggingInformation.c)
 */

__int64 __fastcall RtlSetHeapDebuggingInformation(_DWORD *HeapHandle, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx

  if ( HeapHandle )
  {
    if ( (HeapHandle[29] & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
      v4 = 7LL;
      if ( HeapHandle[4] != -571548178 )
        v4 = 52LL;
      if ( LOWORD(HeapHandle[v4]) == 0xFFFF )
        v5 = -1073741811;
      else
        v5 = RtlpSetHeapDebuggingInformation(HeapHandle);
      RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
      return v5;
    }
  }
  else
  {
    dword_18016ADCC = *(_DWORD *)(a2 + 12);
    xmmword_18016ADE0 = *(_OWORD *)(a2 + 32);
    *((_QWORD *)&xmmword_18016ADD0 + 1) = *(_QWORD *)(a2 + 24);
    LODWORD(xmmword_18016ADD0) = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpSetHeapDebuggingInformation, a2, 0);
    return 0LL;
  }
}
