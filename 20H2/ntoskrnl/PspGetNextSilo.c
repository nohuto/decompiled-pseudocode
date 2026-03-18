/*
 * XREFs of PspGetNextSilo @ 0x140665070
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x1403212B0 (EtwpAdjustTraceBuffers.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x14078E1F8 (EtwpUpdateGlobalGroupMasks.c)
 *     PsStartSiloMonitor @ 0x1407BF870 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x140908280 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x140908444 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x14090D244 (PsShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x14090DD30 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x14023CE40 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x1406651C0 (PspGetNextJob.c)
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
