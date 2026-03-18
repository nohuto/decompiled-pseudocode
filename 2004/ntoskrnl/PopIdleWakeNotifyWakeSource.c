/*
 * XREFs of PopIdleWakeNotifyWakeSource @ 0x1405768E0
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x140218DA0 (PpmExitCoordinatedIdle.c)
 * Callees:
 *     KeGetCurrentProcessorNumberEx @ 0x1402C9B50 (KeGetCurrentProcessorNumberEx.c)
 *     PopIdleWakeFinalizeWakeSource @ 0x140576038 (PopIdleWakeFinalizeWakeSource.c)
 *     PopIdleWakeStopActiveIntervalAccounting @ 0x1405769D4 (PopIdleWakeStopActiveIntervalAccounting.c)
 */

void __fastcall PopIdleWakeNotifyWakeSource(int a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v5; // rbx
  ULONG CurrentProcessorNumber; // eax

  v5 = PopIdleWakeContext;
  if ( PopIdleWakeContext && a1 == PpmDripsStateIndex && a2 >= 0 )
  {
    PopIdleWakeFinalizeWakeSource(a2, a3);
    PopIdleWakeStopActiveIntervalAccounting(v5);
    v5[10] = a2;
    *((_OWORD *)v5 + 3) = *(_OWORD *)a3;
    *((_OWORD *)v5 + 4) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)v5 + 5) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)v5 + 6) = *(_OWORD *)(a3 + 48);
    *((_OWORD *)v5 + 7) = *(_OWORD *)(a3 + 64);
    *((_OWORD *)v5 + 8) = *(_OWORD *)(a3 + 80);
    *((_OWORD *)v5 + 9) = *(_OWORD *)(a3 + 96);
    *((_OWORD *)v5 + 10) = *(_OWORD *)(a3 + 112);
    *((_QWORD *)v5 + 22) = *(_QWORD *)(a3 + 128);
    *((_QWORD *)v5 + 23) = a5;
    *((_QWORD *)v5 + 1) = a5;
    *((_QWORD *)v5 + 24) = a5 - a4;
    CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
    *v5 |= 0x10u;
    v5[50] = CurrentProcessorNumber;
  }
}
