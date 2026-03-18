/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x14021E8A0
 * Callers:
 *     HalpInterruptSendIpi @ 0x1402150D0 (HalpInterruptSendIpi.c)
 *     PpmIdleExecuteTransition @ 0x140217280 (PpmIdleExecuteTransition.c)
 *     KxFlushEntireTb @ 0x14021E6D0 (KxFlushEntireTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1402FCFDC (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequest @ 0x1402FD180 (KiIpiSendRequest.c)
 *     KeSynchronizeAddressPolicy @ 0x1402FDE9C (KeSynchronizeAddressPolicy.c)
 *     KxFlushSingleTb @ 0x14031CF8C (KxFlushSingleTb.c)
 *     PpmParkUnblockIdle @ 0x14033CC80 (PpmParkUnblockIdle.c)
 *     KxFlushNonGlobalTb @ 0x1403406A4 (KxFlushNonGlobalTb.c)
 *     KiCheckKeepAlive @ 0x140345200 (KiCheckKeepAlive.c)
 *     KeSynchronizeSecurityDomain @ 0x140349FA8 (KeSynchronizeSecurityDomain.c)
 *     PpmPerfApplyProcessorStates @ 0x140396020 (PpmPerfApplyProcessorStates.c)
 *     HalpNmiReboot @ 0x1404CDD18 (HalpNmiReboot.c)
 *     KeBugCheck2 @ 0x140511660 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x140518240 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x140518CD0 (KiSendFreeze.c)
 *     PpmUnlockProcessors @ 0x140562848 (PpmUnlockProcessors.c)
 *     RtlUpdateSwapReference @ 0x1407B81CC (RtlUpdateSwapReference.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x140936DA8 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     PnprQuiesceProcessors @ 0x1409AB904 (PnprQuiesceProcessors.c)
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
