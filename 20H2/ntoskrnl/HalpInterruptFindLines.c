/*
 * XREFs of HalpInterruptFindLines @ 0x140378810
 * Callers:
 *     HalpInterruptGetHighestPriorityInterrupt @ 0x140311C90 (HalpInterruptGetHighestPriorityInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403785DC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRestoreClock @ 0x140385AD8 (HalpInterruptRestoreClock.c)
 *     HalpInterruptEnableNmi @ 0x1403A2EAC (HalpInterruptEnableNmi.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A30E0 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetLineState @ 0x1403A3238 (HalpInterruptSetLineState.c)
 *     HalpInitializeDeferredErrorVector @ 0x1403A3688 (HalpInitializeDeferredErrorVector.c)
 *     HalpInitializeCmciVector @ 0x1403A36F8 (HalpInitializeCmciVector.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x1403CADE4 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpInterruptIsCmciSupported @ 0x1403CEEF4 (HalpInterruptIsCmciSupported.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404B9C74 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptIsDeferredErrorSupported @ 0x1404BACD8 (HalpInterruptIsDeferredErrorSupported.c)
 *     HalpInterruptLineToGsi @ 0x1404BAD44 (HalpInterruptLineToGsi.c)
 *     HalpConnectThermalInterrupt @ 0x1404CFBE0 (HalpConnectThermalInterrupt.c)
 *     HalFixInterruptLine @ 0x1404D5DB4 (HalFixInterruptLine.c)
 *     HalpInterruptUnmap @ 0x14075D048 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x14099B04C (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x140378870 (HalpInterruptLookupController.c)
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
