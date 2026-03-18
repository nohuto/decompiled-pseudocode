/*
 * XREFs of KdpSymbol @ 0x140A6F61C
 * Callers:
 *     KdpTrap @ 0x140A6F1FC (KdpTrap.c)
 * Callees:
 *     KiRestoreProcessorControlState @ 0x14041F650 (KiRestoreProcessorControlState.c)
 *     KiSaveProcessorControlState @ 0x14041F720 (KiSaveProcessorControlState.c)
 *     KdpCopyContext @ 0x140A6F708 (KdpCopyContext.c)
 *     KdEnterDebugger @ 0x140A6F7A0 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x140A6F900 (KdExitDebugger.c)
 *     KdpReportLoadSymbolsStateChange @ 0x140A6FA44 (KdpReportLoadSymbolsStateChange.c)
 */

void __fastcall KdpSymbol(__int64 a1, __int64 a2, char a3, char a4, __int64 a5, __int64 a6, __int64 a7)
{
  char v10; // al
  struct _KPRCB *CurrentPrcb; // rsi
  char v12; // r14
  int v13; // edx
  __int64 v14; // r8
  int v15; // ebx
  __int64 v16; // rcx

  if ( !a4 && !(_BYTE)KdDebuggerNotPresent )
  {
    v10 = KdEnterDebugger(a6, a7);
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = v10;
    KiSaveProcessorControlState((__int64)&CurrentPrcb->ProcessorState, v13);
    KdpCopyContext(CurrentPrcb->Context, CurrentPrcb->ContextFlagsInit & *(_DWORD *)(a5 + 48), a5);
    LOBYTE(v14) = a3;
    KdpReportLoadSymbolsStateChange(a1, a2, v14, CurrentPrcb->Context);
    v15 = *(_DWORD *)(a5 + 48);
    KdpCopyContext(a5, CurrentPrcb->ContextFlagsInit & v15, CurrentPrcb->Context);
    *(_DWORD *)(a5 + 48) = v15;
    KiRestoreProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
    LOBYTE(v16) = v12;
    KdExitDebugger(v16);
  }
}
