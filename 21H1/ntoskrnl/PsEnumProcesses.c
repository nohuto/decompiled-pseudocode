/*
 * XREFs of PsEnumProcesses @ 0x1405EEB64
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1405F3508 (EtwpDisableTraceProviders.c)
 *     EtwpProcessThreadImageRundown @ 0x140780344 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x1407A5838 (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x1407AA59C (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x1407B5D58 (PopEtEnergyTrackerCreate.c)
 *     PopEtEnergyTrackerSnapshotProcesses @ 0x1408EE4B8 (PopEtEnergyTrackerSnapshotProcesses.c)
 *     PsShutdownSystem @ 0x140906374 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x14093A238 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x140942988 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x1405EF280 (PsGetNextProcess.c)
 */

__int64 __fastcall PsEnumProcesses(__int64 (__fastcall *a1)(__int64, __int64), __int64 a2)
{
  void *v4; // rcx
  __int64 NextProcess; // rax
  void *v6; // rbx
  int v7; // edi

  v4 = 0LL;
  while ( 1 )
  {
    NextProcess = PsGetNextProcess(v4);
    v6 = (void *)NextProcess;
    if ( !NextProcess )
      break;
    v7 = a1(NextProcess, a2);
    v4 = v6;
    if ( v7 < 0 )
    {
      ObfDereferenceObjectWithTag(v6, 0x6E457350u);
      return (unsigned int)v7;
    }
  }
  return 0LL;
}
