/*
 * XREFs of ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C0170DD8
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016FBAC (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 * Callees:
 *     memset @ 0x1C0026840 (memset.c)
 *     ??0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z @ 0x1C0171204 (--0DXG_VMBUS_CHANNEL_BASE@@QEAA@W4DXGKVMB_COMMANDCHANNELTYPE@@@Z.c)
 */

DXGADAPTER *__fastcall DXGADAPTER::DXGADAPTER(char *DeferredContext, struct DXGGLOBAL *a2)
{
  KSPIN_LOCK *v3; // rcx
  __int64 v4; // rcx
  EVENT_TYPE v5; // edx
  DXGADAPTER *result; // rax

  *((_QWORD *)DeferredContext + 2) = a2;
  *(_OWORD *)DeferredContext = 0LL;
  *((_QWORD *)DeferredContext + 3) = 0LL;
  *((_DWORD *)DeferredContext + 24) = -1;
  *((_QWORD *)DeferredContext + 9) = 0LL;
  *((_QWORD *)DeferredContext + 10) = 0LL;
  *((_DWORD *)DeferredContext + 22) = 0;
  *((_DWORD *)DeferredContext + 23) = 26;
  *((_DWORD *)DeferredContext + 32) = -1;
  *((_QWORD *)DeferredContext + 13) = 0LL;
  *((_QWORD *)DeferredContext + 14) = 0LL;
  *((_DWORD *)DeferredContext + 30) = 0;
  *((_DWORD *)DeferredContext + 31) = 53;
  *((_QWORD *)DeferredContext + 17) = 0LL;
  *((_QWORD *)DeferredContext + 18) = 0LL;
  *((_DWORD *)DeferredContext + 38) = 0;
  *(_QWORD *)(DeferredContext + 156) = 30LL;
  *((_DWORD *)DeferredContext + 58) = -1;
  *((_DWORD *)DeferredContext + 731) = -1;
  *((_DWORD *)DeferredContext + 732) = -1;
  *((_QWORD *)DeferredContext + 21) = 0LL;
  *((_DWORD *)DeferredContext + 44) = 2;
  *((_DWORD *)DeferredContext + 50) = 0;
  DeferredContext[205] = 0;
  *(_DWORD *)(DeferredContext + 206) = 256;
  *((_WORD *)DeferredContext + 105) = 0;
  DeferredContext[212] = 0;
  *((_QWORD *)DeferredContext + 27) = 0LL;
  *((_QWORD *)DeferredContext + 28) = 0LL;
  *((_QWORD *)DeferredContext + 33) = 0LL;
  *((_DWORD *)DeferredContext + 643) = 1000;
  *((_QWORD *)DeferredContext + 322) = 0LL;
  DeferredContext[2585] = 0;
  *((_WORD *)DeferredContext + 1295) = 0;
  *((_DWORD *)DeferredContext + 650) = 0;
  *((_DWORD *)DeferredContext + 652) = 0;
  *((_WORD *)DeferredContext + 1311) = 256;
  *(_WORD *)(DeferredContext + 2627) = 0;
  *((_QWORD *)DeferredContext + 334) = 0LL;
  *((_QWORD *)DeferredContext + 335) = 0LL;
  *((_QWORD *)DeferredContext + 336) = 0LL;
  *((_DWORD *)DeferredContext + 692) = 0;
  *((_QWORD *)DeferredContext + 347) = 0LL;
  *((_QWORD *)DeferredContext + 348) = 0LL;
  *((_DWORD *)DeferredContext + 730) = 0;
  *(_QWORD *)(DeferredContext + 2932) = 0LL;
  *((_QWORD *)DeferredContext + 392) = 0LL;
  *(_DWORD *)(DeferredContext + 3213) = 0;
  *(_WORD *)(DeferredContext + 3217) = 256;
  *((_DWORD *)DeferredContext + 805) = 0;
  v3 = (KSPIN_LOCK *)(DeferredContext + 3240);
  v3[1] = 0LL;
  KeInitializeSpinLock(v3);
  *((_QWORD *)DeferredContext + 407) = 0LL;
  *((_DWORD *)DeferredContext + 864) = 0;
  *((_DWORD *)DeferredContext + 886) = 0;
  *((_QWORD *)DeferredContext + 448) = 0LL;
  DeferredContext[3592] = 0;
  *((_QWORD *)DeferredContext + 482) = 0LL;
  *((_QWORD *)DeferredContext + 483) = 0LL;
  *((_QWORD *)DeferredContext + 484) = 0LL;
  *((_QWORD *)DeferredContext + 485) = 0LL;
  *((_QWORD *)DeferredContext + 486) = 0LL;
  *((_QWORD *)DeferredContext + 487) = 0LL;
  *((_DWORD *)DeferredContext + 982) = -1;
  *((_QWORD *)DeferredContext + 488) = 0LL;
  *((_QWORD *)DeferredContext + 489) = 0LL;
  *((_DWORD *)DeferredContext + 980) = 0;
  *((_DWORD *)DeferredContext + 981) = 53;
  *((_QWORD *)DeferredContext + 493) = 0LL;
  *((_QWORD *)DeferredContext + 494) = 0LL;
  *((_QWORD *)DeferredContext + 496) = 0LL;
  *((_DWORD *)DeferredContext + 994) = 0;
  DeferredContext[4176] = 0;
  *((_DWORD *)DeferredContext + 1045) = 0;
  DXG_VMBUS_CHANNEL_BASE::DXG_VMBUS_CHANNEL_BASE(DeferredContext + 4208, 0LL);
  *(_QWORD *)(v4 + 64) = 0LL;
  *((_DWORD *)DeferredContext + 1092) = -1;
  *((_DWORD *)DeferredContext + 1110) = -1;
  *((_QWORD *)DeferredContext + 545) = 0LL;
  *((_QWORD *)DeferredContext + 540) = 32LL;
  DeferredContext[4328] = 0;
  *((_DWORD *)DeferredContext + 1083) = 0;
  *((_QWORD *)DeferredContext + 542) = 0LL;
  *((_QWORD *)DeferredContext + 547) = 0LL;
  *((_QWORD *)DeferredContext + 548) = 0LL;
  *((_QWORD *)DeferredContext + 553) = 0LL;
  *((_QWORD *)DeferredContext + 554) = 0LL;
  *((_QWORD *)DeferredContext + 556) = 0LL;
  KeInitializeEvent((PRKEVENT)DeferredContext + 2, v5, 1u);
  KeInitializeEvent((PRKEVENT)DeferredContext + 10, NotificationEvent, 1u);
  memset(DeferredContext + 272, 0, 0x628uLL);
  memset(DeferredContext + 1856, 0, 0x70uLL);
  memset(DeferredContext + 1968, 0, 0x248uLL);
  *(_OWORD *)(DeferredContext + 184) = 0LL;
  memset(DeferredContext + 2704, 0, 0x40uLL);
  KeInitializeEvent((PRKEVENT)(DeferredContext + 2648), NotificationEvent, 0);
  KeInitializeTimer((PKTIMER)DeferredContext + 52);
  KeInitializeDpc((PRKDPC)DeferredContext + 53, (PKDEFERRED_ROUTINE)DxgkpComponentIdleListTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 492);
  KeInitializeTimer((PKTIMER)(DeferredContext + 4040));
  KeInitializeDpc((PRKDPC)(DeferredContext + 4104), (PKDEFERRED_ROUTINE)DxgkpFirstFrameTimerDpc, DeferredContext);
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 521);
  *((_QWORD *)DeferredContext + 502) = DeferredContext;
  *((_QWORD *)DeferredContext + 501) = DxgkpProcessPowerPStateWork;
  *((_QWORD *)DeferredContext + 499) = 0LL;
  KeInitializeSpinLock((PKSPIN_LOCK)DeferredContext + 503);
  *((_QWORD *)DeferredContext + 552) = DeferredContext;
  *((_QWORD *)DeferredContext + 411) = DeferredContext + 3280;
  *((_QWORD *)DeferredContext + 410) = DeferredContext + 3280;
  *((_QWORD *)DeferredContext + 413) = DeferredContext + 3296;
  *((_QWORD *)DeferredContext + 412) = DeferredContext + 3296;
  *((_QWORD *)DeferredContext + 551) = ProcessDeadlockThread;
  result = (DXGADAPTER *)DeferredContext;
  *((_QWORD *)DeferredContext + 549) = 0LL;
  return result;
}
