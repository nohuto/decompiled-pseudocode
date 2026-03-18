/*
 * XREFs of KeRemoveProcessorAffinityEx @ 0x1402BF930
 * Callers:
 *     HalpInterruptSendIpi @ 0x14027FB40 (HalpInterruptSendIpi.c)
 *     PpmIdleExecuteTransition @ 0x140281CF0 (PpmIdleExecuteTransition.c)
 *     KxFlushEntireTb @ 0x1402EA300 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x1402EA4D0 (KxFlushNonGlobalTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1402EA60C (KeFlushProcessWriteBuffers.c)
 *     KiIpiSendRequest @ 0x1402EA7B0 (KiIpiSendRequest.c)
 *     PpmParkUnblockIdle @ 0x14030F820 (PpmParkUnblockIdle.c)
 *     KiCheckKeepAlive @ 0x140316044 (KiCheckKeepAlive.c)
 *     KeSynchronizeAddressPolicy @ 0x140320DA4 (KeSynchronizeAddressPolicy.c)
 *     KeSynchronizeSecurityDomain @ 0x14032E1A4 (KeSynchronizeSecurityDomain.c)
 *     KxFlushSingleTb @ 0x140353C18 (KxFlushSingleTb.c)
 *     PpmPerfApplyProcessorStates @ 0x1403984E0 (PpmPerfApplyProcessorStates.c)
 *     HalpNmiReboot @ 0x1404D12B8 (HalpNmiReboot.c)
 *     KeBugCheck2 @ 0x140514F90 (KeBugCheck2.c)
 *     KeFreezeExecution @ 0x14051BC10 (KeFreezeExecution.c)
 *     KiSendFreeze @ 0x14051C6A0 (KiSendFreeze.c)
 *     PpmUnlockProcessors @ 0x140566228 (PpmUnlockProcessors.c)
 *     RtlUpdateSwapReference @ 0x1407C6A5C (RtlUpdateSwapReference.c)
 *     EtwpGetMicroarchitecturalPmcAffinity @ 0x14093CBD8 (EtwpGetMicroarchitecturalPmcAffinity.c)
 *     PnprQuiesceProcessors @ 0x1409B1874 (PnprQuiesceProcessors.c)
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
