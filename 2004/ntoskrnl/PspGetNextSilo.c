/*
 * XREFs of PspGetNextSilo @ 0x140657710
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14027AF00 (EtwpAdjustTraceBuffers.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x140780310 (EtwpUpdateGlobalGroupMasks.c)
 *     PsStartSiloMonitor @ 0x1407B1930 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x140902670 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x140902834 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x140907624 (PsShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x140908110 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x14027B380 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x140657860 (PspGetNextJob.c)
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
