/*
 * XREFs of HalpInterruptFindLines @ 0x140375A70
 * Callers:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x140304330 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x14037583C (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRestoreClock @ 0x14038305C (HalpInterruptRestoreClock.c)
 *     HalpInterruptEnableNmi @ 0x1403A024C (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A0480 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetLineState @ 0x1403A05D8 (HalpInterruptSetLineState.c)
 *     HalpInitializeDeferredErrorVector @ 0x1403A0A28 (HalpInitializeDeferredErrorVector.c)
 *     HalpInitializeCmciVector @ 0x1403A0A98 (HalpInitializeCmciVector.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x1403C7394 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptIsCmciSupported @ 0x1403CB514 (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404B6074 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1404B70D8 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpInterruptLineToGsi @ 0x1404B7144 (HalpInterruptLineToGsi.c)
 *     HalpConnectThermalInterrupt @ 0x1404CC1D0 (HalpConnectThermalInterrupt.c)
 *     HalFixInterruptLine @ 0x1404D2374 (HalFixInterruptLine.c)
 *     HalpInterruptUnmap @ 0x14074A048 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x1409938AC (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x140375AD0 (HalpInterruptLookupController.c)
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
