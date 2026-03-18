/*
 * XREFs of KeQueryActiveProcessorAffinity2 @ 0x1403CF350
 * Callers:
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 *     PpmCheckInitProcessors @ 0x140849690 (PpmCheckInitProcessors.c)
 *     PpmInstallPlatformIdleStates @ 0x14098AAF0 (PpmInstallPlatformIdleStates.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1409E101C (EtwpGetMicroarchitecturalPmcAffinity.c)
 * Callees:
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity2(__int64 a1)
{
  KiCopyAffinityEx(a1, *(_WORD *)(a1 + 2), (unsigned __int16 *)KeActiveProcessors);
  return (unsigned int)KeNumberProcessors_0;
}
