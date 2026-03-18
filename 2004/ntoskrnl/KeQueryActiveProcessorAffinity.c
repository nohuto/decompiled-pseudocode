/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x1403C0430
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407A6EC8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407A7090 (PpmRegisterPerfStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408DEC60 (PpmInstallPlatformIdleStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x140936DA8 (EtwpGetMicroarchitecturalPmcAffinity.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x14021E8E0 (KeCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(__int64 a1)
{
  KeCopyAffinityEx(a1, (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
