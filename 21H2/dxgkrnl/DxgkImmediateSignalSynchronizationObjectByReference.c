/*
 * XREFs of DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C0171F94
 * Callers:
 *     ??1CFlipExBuffer@@MEAA@XZ @ 0x1C000ECA4 (--1CFlipExBuffer@@MEAA@XZ.c)
 *     ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C00126D0 (-NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ.c)
 *     ?SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z @ 0x1C0017540 (-SignalGpuFence@CFlipExBuffer@@UEAAJ_K_N@Z.c)
 *     ?InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z @ 0x1C0066F88 (-InsertCascadedTokenSignal@CFlipExBuffer@@QEAAJ_K@Z.c)
 * Callees:
 *     ?SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z @ 0x1C0171FD0 (-SignalFence@DXGSYNCOBJECT@@QEAAJ_KIW4SIGNAL_FENCE_HANDLE_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkImmediateSignalSynchronizationObjectByReference(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v8; // rax

  v3 = DXGSYNCOBJECT::SignalFence(*(_QWORD *)a1, a2, *(unsigned int *)(a1 + 8), 0LL);
  v6 = v3;
  if ( v3 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v8 + 24) = a1;
    *(_QWORD *)(v8 + 32) = v6;
    WdLogEvent5_WdError(v8);
  }
  return (unsigned int)v6;
}
