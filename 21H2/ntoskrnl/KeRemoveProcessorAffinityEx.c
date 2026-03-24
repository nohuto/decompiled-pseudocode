/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x14033B4A0
 * Callers:
 *     HalpInterruptSendIpi @ 0x140220210 (HalpInterruptSendIpi.c)
 *     PpmIdleExecuteTransition @ 0x1402224B0 (PpmIdleExecuteTransition.c)
 *     KxFlushEntireTb @ 0x14022F980 (KxFlushEntireTb.c)
 *     KxFlushSingleTb @ 0x14026BB58 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x14027AD04 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequest @ 0x14027AED0 (KiIpiSendRequest.c)
 *     PpmParkUnblockIdle @ 0x1402B04B0 (PpmParkUnblockIdle.c)
 *     KxFlushNonGlobalTb @ 0x1402B2094 (KxFlushNonGlobalTb.c)
 *     KiCheckKeepAlive @ 0x1402B9650 (KiCheckKeepAlive.c)
 *     KeSynchronizeSecurityDomain @ 0x1402BC338 (KeSynchronizeSecurityDomain.c)
 *     KeSynchronizeAddressPolicy @ 0x1402C247C (KeSynchronizeAddressPolicy.c)
 *     PpmPerfApplyProcessorStates @ 0x140398950 (PpmPerfApplyProcessorStates.c)
 *     HalpNmiReboot @ 0x1404D2C88 (HalpNmiReboot.c)
 *     KeBugCheck2 @ 0x140516AD0 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x14051D6F0 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x14051E180 (KiSendFreeze.c)
 *     PpmUnlockProcessors @ 0x140567CF8 (PpmUnlockProcessors.c)
 *     RtlUpdateSwapReference @ 0x1407CACBC (RtlUpdateSwapReference.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x14093A3A8 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     PnprQuiesceProcessors @ 0x1409AE774 (PnprQuiesceProcessors.c)
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
