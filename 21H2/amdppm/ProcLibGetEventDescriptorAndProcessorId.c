/*
 * XREFs of ProcLibGetEventDescriptorAndProcessorId @ 0x1C00034A4
 * Callers:
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C0003860 (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C001E008 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceProcessorRundown @ 0x1C001F000 (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C001F3AC (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C001F63C (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C001FB0C (ProcLibTraceBiosCStatesRundown.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C001FD54 (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceSummary @ 0x1C001FED0 (ProcLibTraceSummary.c)
 *     ProcLibTraceSummary2 @ 0x1C00201CC (ProcLibTraceSummary2.c)
 *     ProcLibTraceCap @ 0x1C0021124 (ProcLibTraceCap.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0001AF0 (ProcLibGetProcessorNumber.c)
 */

__int64 __fastcall ProcLibGetEventDescriptorAndProcessorId(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  __int64 v8; // rax
  struct _PROCESSOR_NUMBER v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  v6 = *(_DWORD *)(a1 + 80);
  if ( v6 == 1 )
  {
    *(_DWORD *)a4 = *(_DWORD *)(a1 + 72);
    v8 = a5;
    *(_DWORD *)(a5 + 8) = 4;
  }
  else
  {
    if ( v6 == 2 || (int)ProcLibGetProcessorNumber(a1, &v10) < 0 )
      return 0LL;
    a3 = a2;
    *(_WORD *)a4 = v10.Group;
    *(_BYTE *)(a4 + 2) = v10.Number;
    v8 = a5;
    *(_DWORD *)(a5 + 8) = 3;
  }
  *(_DWORD *)(v8 + 12) = 0;
  *(_QWORD *)v8 = a4;
  return a3;
}
