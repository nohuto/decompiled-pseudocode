/*
 * XREFs of ViKeLogCriticalRegionStackTrace @ 0x14059C5C8
 * Callers:
 *     VerifierKeEnterCriticalRegion @ 0x1409D7AA0 (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x1409D7D20 (VerifierKeLeaveCriticalRegion.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14032C8F0 (RtlCaptureStackBackTrace.c)
 */

void ViKeLogCriticalRegionStackTrace()
{
  unsigned __int64 v0; // rbx
  USHORT v1; // ax

  if ( VfKeCriticalRegionTraces )
  {
    v0 = VfKeCriticalRegionTraces
       + ((unsigned __int64)(_InterlockedIncrement(&VfKeCriticalRegionTracesIndex) & (unsigned int)(VfKeCriticalRegionTracesLength
                                                                                                  - 1)) << 6);
    *(_QWORD *)v0 = KeGetCurrentThread();
    v1 = RtlCaptureStackBackTrace(0, 7u, (PVOID *)(v0 + 8), 0LL);
    if ( v1 < 7u )
      *(_QWORD *)(v0 + 8LL * v1 + 8) = 0LL;
  }
}
