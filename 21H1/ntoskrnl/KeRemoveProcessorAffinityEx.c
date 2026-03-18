/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1402778F0
 * Callers:
 *     HalpInterruptSendIpi @ 0x14026E120 (HalpInterruptSendIpi.c)
 *     PpmIdleExecuteTransition @ 0x1402702D0 (PpmIdleExecuteTransition.c)
 *     KxFlushEntireTb @ 0x140277720 (KxFlushEntireTb.c)
 *     KeSynchronizeAddressPolicy @ 0x1402C13BC (KeSynchronizeAddressPolicy.c)
 *     PpmParkUnblockIdle @ 0x140300380 (PpmParkUnblockIdle.c)
 *     KxFlushNonGlobalTb @ 0x1403038D4 (KxFlushNonGlobalTb.c)
 *     KiCheckKeepAlive @ 0x140307400 (KiCheckKeepAlive.c)
 *     KeSynchronizeSecurityDomain @ 0x14030CD8C (KeSynchronizeSecurityDomain.c)
 *     KxFlushSingleTb @ 0x14034C2CC (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140358FBC (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequest @ 0x140359160 (KiIpiSendRequest.c)
 *     PpmPerfApplyProcessorStates @ 0x140395450 (PpmPerfApplyProcessorStates.c)
 *     HalpNmiReboot @ 0x1404CD868 (HalpNmiReboot.c)
 *     KeBugCheck2 @ 0x140511010 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x140517BF0 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x140518680 (KiSendFreeze.c)
 *     PpmUnlockProcessors @ 0x1405621F8 (PpmUnlockProcessors.c)
 *     RtlUpdateSwapReference @ 0x1407B505C (RtlUpdateSwapReference.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x140935B08 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     PnprQuiesceProcessors @ 0x1409AAAA4 (PnprQuiesceProcessors.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeRemoveProcessorAffinityEx(unsigned __int16 *a1, int a2)
{
  unsigned int v3; // ecx
  __int64 result; // rax
  __int64 v5; // rdx

  v3 = KiProcessorIndexToNumberMappingTable[a2];
  result = v3 >> 6;
  if ( *a1 > (unsigned int)result )
  {
    v5 = (unsigned int)result;
    result = *(_QWORD *)&a1[4 * result + 4] & ~(1LL << (v3 & 0x3F));
    *(_QWORD *)&a1[4 * v5 + 4] = result;
  }
  return result;
}
