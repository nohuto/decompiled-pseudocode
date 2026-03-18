/*
 * XREFs of HalpInterruptFindLines @ 0x140376880
 * Callers:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x140341100 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x14037664C (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRestoreClock @ 0x1403839AC (HalpInterruptRestoreClock.c)
 *     HalpInterruptEnableNmi @ 0x1403A09DC (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A0C10 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetLineState @ 0x1403A0D68 (HalpInterruptSetLineState.c)
 *     HalpInitializeDeferredErrorVector @ 0x1403A11B8 (HalpInitializeDeferredErrorVector.c)
 *     HalpInitializeCmciVector @ 0x1403A1228 (HalpInitializeCmciVector.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x1403C81A4 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptIsCmciSupported @ 0x1403CC2D4 (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404B6754 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1404B77B8 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpInterruptLineToGsi @ 0x1404B7824 (HalpInterruptLineToGsi.c)
 *     HalpConnectThermalInterrupt @ 0x1404CC680 (HalpConnectThermalInterrupt.c)
 *     HalFixInterruptLine @ 0x1404D2824 (HalFixInterruptLine.c)
 *     HalpInterruptUnmap @ 0x14074E468 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140994EEC (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x1403768E0 (HalpInterruptLookupController.c)
 */

_QWORD *__fastcall HalpInterruptFindLines(unsigned int *a1)
{
  __int64 v1; // rax
  __int64 v2; // r10
  _DWORD *v3; // r11
  _QWORD *v4; // r9
  _QWORD *v5; // r8
  int v6; // eax
  _QWORD *v7; // rcx
  int v8; // edx

  v1 = HalpInterruptLookupController(*a1);
  if ( !v1 )
    return 0LL;
  v4 = (_QWORD *)(v1 + 240);
  v5 = *(_QWORD **)(v1 + 240);
  if ( v5 == (_QWORD *)(v1 + 240) )
    return 0LL;
  v6 = *(_DWORD *)(v2 + 4);
  while ( 1 )
  {
    v7 = v5;
    v5 = (_QWORD *)*v5;
    v8 = *((_DWORD *)v7 + 5);
    if ( v8 <= v6 && *((_DWORD *)v7 + 6) > v6 )
      break;
    if ( v5 == v4 )
      return 0LL;
  }
  if ( v3 )
    *v3 = v6 - v8;
  return v7;
}
