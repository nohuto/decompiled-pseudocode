/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1402F4410
 * Callers:
 *     PpmParkUnblockIdle @ 0x14023A7D0 (PpmParkUnblockIdle.c)
 *     PpmPerfApplyProcessorStates @ 0x14023B5A0 (PpmPerfApplyProcessorStates.c)
 *     KxFlushNonGlobalTb @ 0x14023F108 (KxFlushNonGlobalTb.c)
 *     KeSynchronizeAddressPolicy @ 0x14024AC78 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x140255E2C (KeSynchronizeSecurityDomain.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KeFreezeExecution @ 0x1402DA0F0 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x1402DA81C (KiSendFreeze.c)
 *     KxFlushSingleTb @ 0x1402EA7E4 (KxFlushSingleTb.c)
 *     KiCheckKeepAlive @ 0x1402F36BC (KiCheckKeepAlive.c)
 *     KeFlushProcessWriteBuffers @ 0x1402F374C (KeFlushProcessWriteBuffers.c)
 *     KxFlushEntireTb @ 0x1402F411C (KxFlushEntireTb.c)
 *     KiIpiSendRequest @ 0x1402FFB70 (KiIpiSendRequest.c)
 *     KiForwardTick @ 0x140303740 (KiForwardTick.c)
 *     PpmIdleExecuteTransition @ 0x140306100 (PpmIdleExecuteTransition.c)
 *     HalpNmiReboot @ 0x14051FA44 (HalpNmiReboot.c)
 *     KeBugCheck2 @ 0x1405660A0 (KeBugCheck2.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x140578BB4 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 *     PpmUnlockProcessors @ 0x1405C8FE4 (PpmUnlockProcessors.c)
 *     RtlUpdateSwapReference @ 0x1408331DC (RtlUpdateSwapReference.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x1409E101C (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     PnprQuiesceProcessors @ 0x140A68BE8 (PnprQuiesceProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v2; // r9d
  __int64 result; // rax
  unsigned int v4; // edx

  v2 = KiProcessorIndexToNumberMappingTable[a2];
  result = *a1;
  v4 = v2 >> 6;
  if ( (unsigned int)result > v2 >> 6 )
  {
    result = *(_QWORD *)&a1[4 * v4 + 4] & ~(1LL << (v2 & 0x3F));
    *(_QWORD *)&a1[4 * v4 + 4] = result;
  }
  return result;
}
