/*
 * XREFs of ??0ADAPTER_DISPLAY@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C01964F4
 * Callers:
 *     ?CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z @ 0x1C017C40C (-CreateDisplayCore@ADAPTER_DISPLAY@@SAJPEAVDXGADAPTER@@PEAPEAV1@@Z.c)
 * Callees:
 *     memset @ 0x1C00274C0 (memset.c)
 */

ADAPTER_DISPLAY *__fastcall ADAPTER_DISPLAY::ADAPTER_DISPLAY(char *DeferredContext, struct DXGADAPTER *a2)
{
  ADAPTER_DISPLAY *result; // rax

  *((_QWORD *)DeferredContext + 2) = a2;
  *(_OWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 3) = 0LL;
  *((_QWORD *)DeferredContext + 4) = 0LL;
  *((_QWORD *)DeferredContext + 5) = 0LL;
  *((_DWORD *)DeferredContext + 12) = 0;
  *((_DWORD *)DeferredContext + 13) = 5;
  *((_DWORD *)DeferredContext + 14) = 23;
  *((_QWORD *)DeferredContext + 9) = DeferredContext + 64;
  *((_QWORD *)DeferredContext + 8) = DeferredContext + 64;
  *((_DWORD *)DeferredContext + 30) = -1;
  *((_DWORD *)DeferredContext + 31) = -1;
  *((_DWORD *)DeferredContext + 20) = 0;
  *((_QWORD *)DeferredContext + 11) = 0LL;
  *((_QWORD *)DeferredContext + 12) = 0LL;
  *((_QWORD *)DeferredContext + 13) = 0LL;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 32) = 3;
  *((_DWORD *)DeferredContext + 41) = -1;
  *((_QWORD *)DeferredContext + 17) = 0LL;
  *((_QWORD *)DeferredContext + 18) = 0LL;
  *((_QWORD *)DeferredContext + 19) = 0LL;
  *((_DWORD *)DeferredContext + 40) = 0;
  *((_DWORD *)DeferredContext + 42) = 43;
  *((_QWORD *)DeferredContext + 22) = 0LL;
  *((_QWORD *)DeferredContext + 23) = 0LL;
  *((_QWORD *)DeferredContext + 24) = 0LL;
  *((_DWORD *)DeferredContext + 50) = 0;
  *((_DWORD *)DeferredContext + 51) = -1;
  *((_DWORD *)DeferredContext + 52) = 1;
  *((_QWORD *)DeferredContext + 27) = 0LL;
  *((_DWORD *)DeferredContext + 62) = 0;
  DeferredContext[252] = 0;
  *((_QWORD *)DeferredContext + 32) = 0LL;
  *((_QWORD *)DeferredContext + 33) = 0LL;
  *((_QWORD *)DeferredContext + 34) = 0LL;
  *((_DWORD *)DeferredContext + 70) = 0;
  *((_DWORD *)DeferredContext + 71) = -1;
  *((_DWORD *)DeferredContext + 72) = 1;
  *((_QWORD *)DeferredContext + 37) = 0LL;
  *((_QWORD *)DeferredContext + 40) = 0LL;
  *((_QWORD *)DeferredContext + 41) = 0LL;
  *((_QWORD *)DeferredContext + 42) = 0LL;
  *((_DWORD *)DeferredContext + 86) = 0;
  *((_DWORD *)DeferredContext + 87) = 16;
  *((_DWORD *)DeferredContext + 88) = 7;
  *((_QWORD *)DeferredContext + 45) = 0LL;
  *((_QWORD *)DeferredContext + 46) = 1LL;
  *((_QWORD *)DeferredContext + 47) = 0LL;
  *((_QWORD *)DeferredContext + 48) = 0LL;
  *((_DWORD *)DeferredContext + 98) = 0;
  DeferredContext[396] = 0;
  *((_QWORD *)DeferredContext + 50) = 0LL;
  *((_QWORD *)DeferredContext + 51) = 0LL;
  *((_QWORD *)DeferredContext + 52) = 0LL;
  *((_DWORD *)DeferredContext + 106) = 0;
  *((_DWORD *)DeferredContext + 107) = 75;
  *((_DWORD *)DeferredContext + 108) = 53;
  *((_QWORD *)DeferredContext + 57) = 0LL;
  *((_QWORD *)DeferredContext + 58) = 0LL;
  *((_QWORD *)DeferredContext + 59) = 0LL;
  *((_DWORD *)DeferredContext + 120) = 0;
  *((_DWORD *)DeferredContext + 121) = -1;
  *((_DWORD *)DeferredContext + 122) = 1;
  DeferredContext[496] = 0;
  *((_QWORD *)DeferredContext + 65) = 0LL;
  *((_QWORD *)DeferredContext + 66) = 0LL;
  *((_QWORD *)DeferredContext + 67) = 0LL;
  *((_DWORD *)DeferredContext + 136) = 0;
  *((_DWORD *)DeferredContext + 137) = 76;
  *((_DWORD *)DeferredContext + 138) = 15;
  *((_QWORD *)DeferredContext + 71) = 0LL;
  *((_QWORD *)DeferredContext + 72) = 0LL;
  *((_QWORD *)DeferredContext + 73) = 0LL;
  *((_DWORD *)DeferredContext + 149) = -1;
  *((_DWORD *)DeferredContext + 148) = 0;
  *((_DWORD *)DeferredContext + 150) = 24;
  *((_QWORD *)DeferredContext + 77) = DeferredContext + 608;
  *((_QWORD *)DeferredContext + 76) = DeferredContext + 608;
  *((_QWORD *)DeferredContext + 39) = DeferredContext + 304;
  *((_QWORD *)DeferredContext + 38) = DeferredContext + 304;
  memset(DeferredContext + 760, 0, 0xA0uLL);
  KeInitializeTimerEx((PKTIMER)(DeferredContext + 632), SynchronizationTimer);
  KeInitializeDpc(
    (PRKDPC)(DeferredContext + 696),
    (PKDEFERRED_ROUTINE)ADAPTER_DISPLAY::VSyncTelemetryTimerDpc,
    DeferredContext);
  result = (ADAPTER_DISPLAY *)DeferredContext;
  *(_OWORD *)(DeferredContext + 232) = 0LL;
  return result;
}
