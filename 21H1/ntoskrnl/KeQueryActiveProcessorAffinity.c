/*
 * XREFs of KeQueryActiveProcessorAffinity @ 0x1403BF4A0
 * Callers:
 *     PpmCheckInitProcessors @ 0x1407A4778 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407A4940 (PpmRegisterPerfStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1408DDA00 (PpmInstallPlatformIdleStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x140935B08 (EtwpGetMicroarchitecturalPmcAffinity.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x140277930 (KeCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity(__int64 a1)
{
  KeCopyAffinityEx(a1, (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
