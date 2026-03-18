/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0023BB0
 * Callers:
 *     ACPIMapNamedTable @ 0x1C00019E0 (ACPIMapNamedTable.c)
 *     ACPIReleaseGlobalLock @ 0x1C00239A4 (ACPIReleaseGlobalLock.c)
 *     ACPIAsyncAcquireGlobalLock @ 0x1C0023A70 (ACPIAsyncAcquireGlobalLock.c)
 *     ACPIDevicePowerProcessPhase2SystemSubPhase4 @ 0x1C0050840 (ACPIDevicePowerProcessPhase2SystemSubPhase4.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C005A1F0 (OSNotifyDeviceWakeCallBack.c)
 *     LinkNodepRunSrsWorker @ 0x1C006C500 (LinkNodepRunSrsWorker.c)
 *     IrqArbpUnreferenceArbitrationList @ 0x1C009A974 (IrqArbpUnreferenceArbitrationList.c)
 *     IrqArbpFindSuitableRangeMsi @ 0x1C009D410 (IrqArbpFindSuitableRangeMsi.c)
 *     IrqArbpAssignIrqFromLinkNode @ 0x1C00B6B6C (IrqArbpAssignIrqFromLinkNode.c)
 *     ACPIGlobalInitialize @ 0x1C00BC3C4 (ACPIGlobalInitialize.c)
 *     ACPILoadProcessFACS @ 0x1C00BD604 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessRSDT @ 0x1C00BD9F8 (ACPILoadProcessRSDT.c)
 *     ACPILoadProcessDSDT @ 0x1C00BF044 (ACPILoadProcessDSDT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v7; // rdi
  unsigned int v9; // esi
  int v10; // eax
  char *v12; // rcx
  int v13; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  v7 = (unsigned __int64)a3 >> 16;
  v9 = a2;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v7 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) )
  {
    v12 = (char *)WPP_GLOBAL_Control + 80 * v7;
    if ( (unsigned __int8)v12[41] >= a2 )
      pfnWppTraceMessage(*((_QWORD *)v12 + 3), 43LL, a5, a4, va, 8LL, 0LL);
  }
  LOWORD(v13) = a4;
  return WppAutoLogTrace(a1, v9, a3, a5, v13, va);
}
