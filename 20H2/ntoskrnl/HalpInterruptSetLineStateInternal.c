/*
 * XREFs of HalpInterruptSetLineStateInternal @ 0x14037871C
 * Callers:
 *     HalDisableInterrupt @ 0x140376DF0 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403785DC (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRestoreClock @ 0x140385AD8 (HalpInterruptRestoreClock.c)
 *     HalpInterruptRestoreController @ 0x14038AE60 (HalpInterruptRestoreController.c)
 *     HalpUnmaskInterrupt @ 0x14038C4B0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403A30E0 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetLineState @ 0x1403A3238 (HalpInterruptSetLineState.c)
 *     HalpInitializeDeferredErrorVector @ 0x1403A3688 (HalpInitializeDeferredErrorVector.c)
 *     HalpInitializeCmciVector @ 0x1403A36F8 (HalpInitializeCmciVector.c)
 *     HalpMaskInterrupt @ 0x1403A66D0 (HalpMaskInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403CD18C (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404B9F00 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptServiceActiveBoth @ 0x1404BC1DC (HalpInterruptServiceActiveBoth.c)
 *     HalpConnectThermalInterrupt @ 0x1404CFBE0 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptMaskLevelTriggeredLines @ 0x1404D56C0 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptMaskAcpi @ 0x14099B04C (HalpInterruptMaskAcpi.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
