/*
 * XREFs of HalpInterruptFindLines @ 0x1403787F0
 * Callers:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x1402329F0 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403785BC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRestoreClock @ 0x140386A18 (HalpInterruptRestoreClock.c)
 *     HalpInterruptEnableNmi @ 0x1403A38BC (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A3AF0 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetLineState @ 0x1403A3C48 (HalpInterruptSetLineState.c)
 *     HalpInitializeDeferredErrorVector @ 0x1403A4098 (HalpInitializeDeferredErrorVector.c)
 *     HalpInitializeCmciVector @ 0x1403A4108 (HalpInitializeCmciVector.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x1403CB924 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptIsCmciSupported @ 0x1403CF9D4 (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404BB874 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1404BC8D8 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpInterruptLineToGsi @ 0x1404BC944 (HalpInterruptLineToGsi.c)
 *     HalpConnectThermalInterrupt @ 0x1404D17F0 (HalpConnectThermalInterrupt.c)
 *     HalFixInterruptLine @ 0x1404D79C4 (HalFixInterruptLine.c)
 *     HalpInterruptUnmap @ 0x1407619F8 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x14099923C (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x140378850 (HalpInterruptLookupController.c)
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
