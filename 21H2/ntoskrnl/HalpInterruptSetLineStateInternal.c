/*
 * XREFs of HalpInterruptSetLineStateInternal @ 0x140251FD8
 * Callers:
 *     HalpInterruptSetDestinationInternal @ 0x140251EA0 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRestoreClock @ 0x1403915EC (HalpInterruptRestoreClock.c)
 *     HalpInterruptRestoreController @ 0x140396364 (HalpInterruptRestoreController.c)
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 *     HalpMaskInterrupt @ 0x140397D10 (HalpMaskInterrupt.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B0670 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetLineState @ 0x1403B07C8 (HalpInterruptSetLineState.c)
 *     HalpInitializeDeferredErrorVector @ 0x1403B0C40 (HalpInitializeDeferredErrorVector.c)
 *     HalpInitializeCmciVector @ 0x1403B0CB0 (HalpInitializeCmciVector.c)
 *     HalpUnmaskInterrupt @ 0x1403B6180 (HalpUnmaskInterrupt.c)
 *     HalpInterruptRemapFixedLines @ 0x1403B9214 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140508364 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptServiceActiveBoth @ 0x14050A60C (HalpInterruptServiceActiveBoth.c)
 *     HalpConnectThermalInterrupt @ 0x14051DB60 (HalpConnectThermalInterrupt.c)
 *     HalpInterruptMaskLevelTriggeredLines @ 0x140524190 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptMaskAcpi @ 0x140A521EC (HalpInterruptMaskAcpi.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpInterruptSetProblemEx @ 0x14051E038 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpInterruptSetLineStateInternal(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  unsigned int v4; // r10d
  int v5; // ebx
  int v6; // r8d
  __int16 v8; // [rsp+30h] [rbp-8h]

  v3 = *(_DWORD *)(a3 + 12);
  v4 = v3 | 1;
  v5 = a1;
  if ( (v3 & 0x30) != 0x10 )
    v4 = *(_DWORD *)(a3 + 12) & 0xFFFFFFFE;
  *(_DWORD *)(a3 + 12) = v4;
  if ( (*(_DWORD *)(a1 + 228) & 0x200) != 0 )
  {
    _disable();
    v6 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 112))(*(_QWORD *)(a1 + 16));
    if ( (v8 & 0x200) != 0 )
      _enable();
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(a1 + 112))(*(_QWORD *)(a1 + 16));
  }
  if ( v6 < 0 )
    HalpInterruptSetProblemEx(v5, 7, v6, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 3173);
  return (unsigned int)v6;
}
