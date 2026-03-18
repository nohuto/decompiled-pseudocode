/*
 * XREFs of PsEnumProcesses @ 0x140698064
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1406C7034 (EtwpDisableTraceProviders.c)
 *     EtwpProcessThreadImageRundown @ 0x14077F968 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x1407A7F88 (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x1407AD6FC (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x1407B8EC8 (PopEtEnergyTrackerCreate.c)
 *     PopEtEnergyTrackerSnapshotProcesses @ 0x1408EF7A8 (PopEtEnergyTrackerSnapshotProcesses.c)
 *     PsShutdownSystem @ 0x140907624 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x14093B4D8 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x140943BFC (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x140698790 (PsGetNextProcess.c)
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
