/*
 * XREFs of KeCountSetBitsAffinityEx @ 0x140359670
 * Callers:
 *     KiForwardTick @ 0x140275DC0 (KiForwardTick.c)
 *     KeSynchronizeAddressPolicy @ 0x1402C13BC (KeSynchronizeAddressPolicy.c)
 *     PpmParkReportParkedCores @ 0x1402FCA20 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x140300380 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x1403003D0 (PpmParkReportUnparkedCores.c)
 *     KeSynchronizeSecurityDomain @ 0x14030CD8C (KeSynchronizeSecurityDomain.c)
 *     KeFlushProcessWriteBuffers @ 0x140358FBC (KeFlushProcessWriteBuffers.c)
 *     PpmPerfApplyProcessorStates @ 0x140395450 (PpmPerfApplyProcessorStates.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403BF334 (PpmHeteroUpdateHgsConfiguration.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x14051D9B0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmIdleInitializeConcurrency @ 0x1407A5754 (PpmIdleInitializeConcurrency.c)
 *     KiInitializeKernel @ 0x140998980 (KiInitializeKernel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeCountSetBitsAffinityEx(unsigned __int16 *a1)
{
  unsigned int v1; // eax
  unsigned int v2; // r8d
  unsigned __int64 *v3; // rcx
  __int64 v4; // r9
  unsigned __int64 v5; // rdx

  v1 = *a1;
  v2 = 0;
  if ( (_WORD)v1 )
  {
    v3 = (unsigned __int64 *)(a1 + 4);
    v4 = v1;
    do
    {
      v5 = *v3++;
      v2 += (unsigned int)((0x101010101010101LL
                          * ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                            + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
                            + ((((v5 - ((v5 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                              + (((v5 - ((v5 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24;
      --v4;
    }
    while ( v4 );
  }
  return v2;
}
