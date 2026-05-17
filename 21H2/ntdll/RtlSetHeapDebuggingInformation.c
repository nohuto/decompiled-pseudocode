/*
 * XREFs of RtlSetHeapDebuggingInformation @ 0x1800F2CA8
 * Callers:
 *     RtlSetHeapInformation @ 0x180074DE0 (RtlSetHeapInformation.c)
 *     RtlHeapTrkInitialize @ 0x1800FDB40 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpEnumProcessHeaps @ 0x1800752CC (RtlpEnumProcessHeaps.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1800F4AF0 (RtlpSetHeapDebuggingInformation.c)
 */

__int64 __fastcall RtlSetHeapDebuggingInformation(__int64 a1, __int64 a2)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  unsigned int v8; // ebx

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
      return 3221225474LL;
    }
    else
    {
      RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
      v7 = 28LL;
      if ( *(_DWORD *)(a1 + 16) != -571548178 )
        v7 = 208LL;
      if ( *(_WORD *)(v7 + a1) == 0xFFFF )
        v8 = -1073741811;
      else
        v8 = RtlpSetHeapDebuggingInformation(a1, a2);
      RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock, v5, v6);
      return v8;
    }
  }
  else
  {
    dword_18016ADCC = *(_DWORD *)(a2 + 12);
    xmmword_18016ADE0 = *(_OWORD *)(a2 + 32);
    *((_QWORD *)&xmmword_18016ADD0 + 1) = *(_QWORD *)(a2 + 24);
    LODWORD(xmmword_18016ADD0) = *(_DWORD *)(a2 + 16);
    RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpSetHeapDebuggingInformation, a2, 0LL);
    return 0LL;
  }
}
