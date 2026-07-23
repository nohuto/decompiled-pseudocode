/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1403461F0
 * Callers:
 *     PpmParkUnblockIdle @ 0x14022E810 (PpmParkUnblockIdle.c)
 *     KxFlushNonGlobalTb @ 0x140230244 (KxFlushNonGlobalTb.c)
 *     KiCheckKeepAlive @ 0x140237860 (KiCheckKeepAlive.c)
 *     KeSynchronizeSecurityDomain @ 0x14023A8C4 (KeSynchronizeSecurityDomain.c)
 *     KeSynchronizeAddressPolicy @ 0x14024091C (KeSynchronizeAddressPolicy.c)
 *     KxFlushSingleTb @ 0x140259AF8 (KxFlushSingleTb.c)
 *     KeFlushProcessWriteBuffers @ 0x140268CA4 (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequest @ 0x140268E70 (KiIpiSendRequest.c)
 *     HalpInterruptSendIpi @ 0x1402C4B10 (HalpInterruptSendIpi.c)
 *     PpmIdleExecuteTransition @ 0x1402C6DB0 (PpmIdleExecuteTransition.c)
 *     KxFlushEntireTb @ 0x1402D41D0 (KxFlushEntireTb.c)
 *     PpmPerfApplyProcessorStates @ 0x140398AA0 (PpmPerfApplyProcessorStates.c)
 *     HalpNmiReboot @ 0x1404D2EC8 (HalpNmiReboot.c)
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x14051D930 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x14051E3C0 (KiSendFreeze.c)
 *     PpmUnlockProcessors @ 0x140567F38 (PpmUnlockProcessors.c)
 *     RtlUpdateSwapReference @ 0x1407CAFDC (RtlUpdateSwapReference.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x14093A578 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     PnprQuiesceProcessors @ 0x1409AF6A4 (PnprQuiesceProcessors.c)
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
