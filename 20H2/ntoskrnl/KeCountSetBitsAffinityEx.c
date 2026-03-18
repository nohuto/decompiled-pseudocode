/*
 * XREFs of KeCountSetBitsAffinityEx @ 0x1402EADD0
 * Callers:
 *     KiForwardTick @ 0x14027D370 (KiForwardTick.c)
 *     KeFlushProcessWriteBuffers @ 0x1402EA60C (KeFlushProcessWriteBuffers.c)
 *     PpmParkReportParkedCores @ 0x14030C580 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x14030F820 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x14030F870 (PpmParkReportUnparkedCores.c)
 *     KeSynchronizeAddressPolicy @ 0x140320DA4 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x14032E1A4 (KeSynchronizeSecurityDomain.c)
 *     PpmPerfApplyProcessorStates @ 0x1403984E0 (PpmPerfApplyProcessorStates.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1403C1944 (PpmHeteroUpdateHgsConfiguration.c)
 *     KiForceIdleUpdateSchedulerParkState @ 0x1405219D0 (KiForceIdleUpdateSchedulerParkState.c)
 *     PpmIdleInitializeConcurrency @ 0x1407B5EC8 (PpmIdleInitializeConcurrency.c)
 *     KiInitializeKernel @ 0x14099FB00 (KiInitializeKernel.c)
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
