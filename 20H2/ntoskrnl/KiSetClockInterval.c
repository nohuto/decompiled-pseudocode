/*
 * XREFs of KiSetClockInterval @ 0x14031CA6C
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x14031C8C0 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14051EEB4 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140216290 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x140216FB0 (RtlRbInsertNodeEx.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x140266620 (KiSetClockIntervalToMinimumRequested.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140318F4C (PoTraceSystemTimerResolutionKernel.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, unsigned __int64 a3)
{
  __int64 v6; // rdx
  bool v7; // r8
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // esi
  int v12; // edx

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode((unsigned __int64 *)&KiClockIntervalRequests, a3);
  *(_DWORD *)(a3 + 28) = a1;
  v6 = KiClockIntervalRequests;
  if ( (qword_140CEC088 & 1) != 0 && KiClockIntervalRequests )
    v6 = (unsigned __int64)&KiClockIntervalRequests ^ KiClockIntervalRequests;
  v7 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( a1 < *(_DWORD *)(v6 + 28) )
      {
        v8 = *(_QWORD *)v6;
        if ( (qword_140CEC088 & 1) != 0 )
        {
          if ( !v8 )
            break;
          v8 ^= v6;
        }
        if ( !v8 )
          break;
      }
      else
      {
        v8 = *(_QWORD *)(v6 + 8);
        if ( (qword_140CEC088 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_18;
          v8 ^= v6;
        }
        if ( !v8 )
        {
LABEL_18:
          v7 = 1;
          break;
        }
      }
      v6 = v8;
    }
  }
  RtlRbInsertNodeEx((unsigned __int64 *)&KiClockIntervalRequests, v6, v7, a3);
  *(_BYTE *)(a3 + 24) = 1;
  v11 = KiSetClockIntervalToMinimumRequested(v10, v9);
  if ( a2 )
    KePseudoHrTimeIncrement = a1;
  v12 = *(_DWORD *)(a3 + 32);
  if ( v12 )
    PoTraceSystemTimerResolutionKernel(a1, v12, 1);
  return v11;
}
