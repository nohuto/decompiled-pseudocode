/*
 * XREFs of PpmPerfInitialize @ 0x140A6FD7C
 * Callers:
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 * Callees:
 *     PopInitializeTimer @ 0x1407C444C (PopInitializeTimer.c)
 */

__int64 PpmPerfInitialize()
{
  __int64 v0; // rcx
  _BYTE *v1; // rax
  int v2; // ecx
  unsigned int v3; // eax

  qword_140CFC4F0 = (__int64)&PpmPerfDomainHead;
  v0 = 2LL;
  PpmPerfDomainHead = (__int64)&PpmPerfDomainHead;
  dword_140C1ED5C = 50;
  dword_140C1F80C = 50;
  v1 = &unk_140C1F810;
  do
  {
    *(v1 - 2736) = 1;
    *v1 = 1;
    *(v1 - 2720) = 70;
    v1[16] = 70;
    *(v1 - 2722) = 30;
    v1[14] = 30;
    *(v1 - 2734) = 100;
    v1[2] = 100;
    *(v1 - 2732) = 100;
    v1[4] = 100;
    ++v1;
    --v0;
  }
  while ( v0 );
  v2 = PpmPerfQosTransitionHysteresisOverride;
  stru_140C24590.WorkerRoutine = (void (__fastcall *)(void *))PpmMediaBufferingWorker;
  dword_140C1ED80 = 2;
  PpmPerfLatencyBoostWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PpmPerfLatencySensitivityHintWorker;
  dword_140C1F830 = 2;
  v3 = PpmPerfQosTransitionHysteresisOverride;
  dword_140C1ED7C = 100;
  dword_140C1F82C = 100;
  if ( PpmPerfQosTransitionHysteresisOverride == -1 )
    v3 = PpmPerfQosTransitionHysteresis;
  PpmMediaBufferingWork = 0LL;
  stru_140C24590.Parameter = 0LL;
  stru_140C24590.List.Flink = 0LL;
  PpmPerfLatencyBoostWorkItem.Parameter = 0LL;
  PpmPerfLatencyBoostWorkItem.List.Flink = 0LL;
  if ( v3 > 0x1F4 )
  {
    if ( PpmPerfQosTransitionHysteresisOverride == -1 )
      v2 = PpmPerfQosTransitionHysteresis;
  }
  else
  {
    v2 = 500;
  }
  PpmPerfQosIdleExpirationTimeout = (unsigned int)(10 * v2);
  return PopInitializeTimer(
           (__int64)&PpmPerfTelemetryTimer,
           (__int64)PpmPerfTelemetryCallback,
           0LL,
           (__int64)PpmPerfTelemetryWorker,
           0LL);
}
