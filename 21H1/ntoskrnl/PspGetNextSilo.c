/*
 * XREFs of PspGetNextSilo @ 0x1406158F4
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x140312AD0 (EtwpAdjustTraceBuffers.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140787014 (EtwpUpdateGlobalGroupMasks.c)
 *     PsStartSiloMonitor @ 0x1407AE7D0 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x140901810 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x1409019D4 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x140906374 (PsShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x140906E60 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x1402D9650 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x140615A40 (PspGetNextJob.c)
 */

void *__fastcall PspGetNextSilo(void *a1, char a2)
{
  __int64 NextJob; // rax
  void *v4; // r8

  while ( 1 )
  {
    NextJob = PspGetNextJob(a1);
    v4 = (void *)NextJob;
    if ( !NextJob )
      return 0LL;
    if ( (*(_DWORD *)(NextJob + 1320) & 0x40000000) != 0 && (!a2 || PsIsServerSilo(NextJob)) )
      break;
    a1 = v4;
  }
  return v4;
}
