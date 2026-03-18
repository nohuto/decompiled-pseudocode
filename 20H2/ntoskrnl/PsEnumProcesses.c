/*
 * XREFs of PsEnumProcesses @ 0x140659378
 * Callers:
 *     EtwpDisableTraceProviders @ 0x140717A88 (EtwpDisableTraceProviders.c)
 *     EtwpProcessThreadImageRundown @ 0x14078D278 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x1407B5FAC (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x1407BB63C (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x1407C7758 (PopEtEnergyTrackerCreate.c)
 *     PopEtEnergyTrackerSnapshotProcesses @ 0x1408F53B8 (PopEtEnergyTrackerSnapshotProcesses.c)
 *     PsShutdownSystem @ 0x14090D244 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x140941308 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x1409499BC (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x140659AB0 (PsGetNextProcess.c)
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
