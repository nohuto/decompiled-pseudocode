/*
 * XREFs of KiSetClockInterval @ 0x140292BBC
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x140292A10 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x140520994 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x140293068 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402930E4 (KiSetClockIntervalToMinimumRequested.c)
 *     RtlRbInsertNodeEx @ 0x140340480 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x140340AE0 (RtlRbRemoveNode.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rdx

  v4 = a3;
  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode(&KiClockIntervalRequests, a3, a3, a4);
  *(_DWORD *)(v4 + 28) = a1;
  v7 = KiClockIntervalRequests;
  if ( (qword_140CEC388 & 1) != 0 && KiClockIntervalRequests )
    v7 = (unsigned __int64)&KiClockIntervalRequests ^ KiClockIntervalRequests;
  LOBYTE(a3) = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( a1 < *(_DWORD *)(v7 + 28) )
      {
        v8 = *(_QWORD *)v7;
        if ( (qword_140CEC388 & 1) != 0 )
        {
          if ( !v8 )
            break;
          v8 ^= v7;
        }
        if ( !v8 )
          break;
      }
      else
      {
        v8 = *(_QWORD *)(v7 + 8);
        if ( (qword_140CEC388 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_18;
          v8 ^= v7;
        }
        if ( !v8 )
        {
LABEL_18:
          LOBYTE(a3) = 1;
          break;
        }
      }
      v7 = v8;
    }
  }
  RtlRbInsertNodeEx(&KiClockIntervalRequests, v7, a3, v4);
  *(_BYTE *)(v4 + 24) = 1;
  v9 = KiSetClockIntervalToMinimumRequested();
  if ( a2 )
    KePseudoHrTimeIncrement = a1;
  v11 = *(unsigned int *)(v4 + 32);
  if ( (_DWORD)v11 )
  {
    LOBYTE(v10) = 1;
    PoTraceSystemTimerResolutionKernel(a1, v11, v10);
  }
  return v9;
}
