/*
 * XREFs of KiSetClockInterval @ 0x14034BAAC
 * Callers:
 *     ExpUpdateTimerConfigurationWorker @ 0x14034B900 (ExpUpdateTimerConfigurationWorker.c)
 *     KiSetVirtualHeteroClockIntervalRequest @ 0x14051B4E4 (KiSetVirtualHeteroClockIntervalRequest.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14028B370 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14028C090 (RtlRbInsertNodeEx.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x1402F2E40 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x1402F3AD0 (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiSetClockInterval(unsigned int a1, char a2, __int64 a3)
{
  unsigned __int64 Root; // rdx
  BOOLEAN v7; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // esi
  int v12; // edx

  if ( *(_BYTE *)(a3 + 24) )
    RtlRbRemoveNode(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)a3);
  *(_DWORD *)(a3 + 28) = a1;
  Root = (unsigned __int64)KiClockIntervalRequests.Root;
  if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 && KiClockIntervalRequests.Root )
    Root = (unsigned __int64)&KiClockIntervalRequests ^ (unsigned __int64)KiClockIntervalRequests.Root;
  v7 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( a1 < *(_DWORD *)(Root + 28) )
      {
        v8 = *(_QWORD *)Root;
        if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
        {
          if ( !v8 )
            break;
          v8 ^= Root;
        }
        if ( !v8 )
          break;
      }
      else
      {
        v8 = *(_QWORD *)(Root + 8);
        if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_18;
          v8 ^= Root;
        }
        if ( !v8 )
        {
LABEL_18:
          v7 = 1;
          break;
        }
      }
      Root = v8;
    }
  }
  RtlRbInsertNodeEx(&KiClockIntervalRequests, (PRTL_BALANCED_NODE)Root, v7, (PRTL_BALANCED_NODE)a3);
  *(_BYTE *)(a3 + 24) = 1;
  v11 = KiSetClockIntervalToMinimumRequested(v10, v9);
  if ( a2 )
    KePseudoHrTimeIncrement = a1;
  v12 = *(_DWORD *)(a3 + 32);
  if ( v12 )
    PoTraceSystemTimerResolutionKernel(a1, v12, 1);
  return v11;
}
