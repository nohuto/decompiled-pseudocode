/*
 * XREFs of KdpSymbol @ 0x1409BA9C0
 * Callers:
 *     KdpTrap @ 0x1409BBA20 (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x1403FE350 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x1403FE420 (KiSaveProcessorControlState.c)
 *     KdEnterDebugger @ 0x1409B8028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409B8190 (KdExitDebugger.c)
 *     KdpReportLoadSymbolsStateChange @ 0x1409B8DD0 (KdpReportLoadSymbolsStateChange.c)
 *     KdpCopyContext @ 0x1409BAB28 (KdpCopyContext.c)
 */

void __fastcall KdpSymbol(__int64 a1, __int64 a2, char a3, char a4, __int64 a5, __int64 a6)
{
  bool v9; // al
  struct _KPRCB *CurrentPrcb; // rdi
  char v11; // bp
  int v12; // edx

  if ( !a4 && !(_BYTE)KdDebuggerNotPresent )
  {
    v9 = KdEnterDebugger(a6);
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = v9;
    KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v12);
    KdpCopyContext(CurrentPrcb->Context, *(unsigned int *)(a5 + 48), a5);
    KdpReportLoadSymbolsStateChange(a1, a2, a3, (__int64)CurrentPrcb->Context);
    KdpCopyContext(a5, CurrentPrcb->Context->ContextFlags, CurrentPrcb->Context);
    KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    KdExitDebugger(v11);
  }
}
