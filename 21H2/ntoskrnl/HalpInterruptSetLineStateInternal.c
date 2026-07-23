/*
 * XREFs of HalpInterruptSetLineStateInternal @ 0x1403786FC
 * Callers:
 *     HalDisableInterrupt @ 0x140376DD0 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403785BC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRestoreClock @ 0x140386A18 (HalpInterruptRestoreClock.c)
 *     HalpInterruptRestoreController @ 0x14038B700 (HalpInterruptRestoreController.c)
 *     HalpUnmaskInterrupt @ 0x14038CD20 (HalpUnmaskInterrupt.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A3AF0 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetLineState @ 0x1403A3C48 (HalpInterruptSetLineState.c)
 *     HalpInitializeDeferredErrorVector @ 0x1403A4098 (HalpInitializeDeferredErrorVector.c)
 *     HalpInitializeCmciVector @ 0x1403A4108 (HalpInitializeCmciVector.c)
 *     HalpMaskInterrupt @ 0x1403A70E0 (HalpMaskInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403CDCDC (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404BBB00 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404BDDDC (HalpInterruptServiceActiveBoth.c)
 *     HalpConnectThermalInterrupt @ 0x1404D17F0 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptMaskLevelTriggeredLines @ 0x1404D72D0 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptMaskAcpi @ 0x14099923C (HalpInterruptMaskAcpi.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpInterruptSetLineStateInternal(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned int v4; // r10d
  __int64 result; // rax
  __int16 v7; // [rsp+20h] [rbp-8h]

  v3 = *(_DWORD *)(a3 + 12);
  v4 = v3 | 1;
  if ( (v3 & 0x30) != 0x10 )
    v4 = *(_DWORD *)(a3 + 12) & 0xFFFFFFFE;
  *(_DWORD *)(a3 + 12) = v4;
  if ( (*(_DWORD *)(a1 + 220) & 0x200) != 0 )
  {
    _disable();
    result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 112))(*(_QWORD *)(a1 + 16));
    if ( (v7 & 0x200) != 0 )
      _enable();
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 112))(*(_QWORD *)(a1 + 16));
  }
  if ( (int)result < 0 )
  {
    *(_DWORD *)(a1 + 296) = result;
    HalpInterruptLastProblem = 7;
    *(_DWORD *)(a1 + 292) = 7;
    *(_QWORD *)(a1 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\intsup.c";
    *(_DWORD *)(a1 + 312) = 3150;
  }
  return result;
}
