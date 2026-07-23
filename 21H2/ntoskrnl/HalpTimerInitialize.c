/*
 * XREFs of HalpTimerInitialize @ 0x1403AADC4
 * Callers:
 *     HalpTimerInitializeHypervisorTimer @ 0x1403A8E94 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x1403AA2D8 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerMeasureFrequencies @ 0x1403AA668 (HalpTimerMeasureFrequencies.c)
 *     HalpTimerSelectRoles @ 0x1403AAB2C (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     HalpTimerCalibratePerformanceCounter @ 0x1403A5DB4 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerNoteHpetMaskingBehavior @ 0x1403AAFEC (HalpTimerNoteHpetMaskingBehavior.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpTimerInitialize(__int64 a1)
{
  __int64 InternalData; // rax
  int v3; // edi
  __int64 v4; // rax

  if ( (*(_DWORD *)(a1 + 184) & 2) != 0 )
  {
    v3 = 0;
  }
  else
  {
    InternalData = HalpTimerGetInternalData(a1);
    v3 = (*(__int64 (__fastcall **)(__int64))(a1 + 104))(InternalData);
    if ( v3 < 0 )
    {
      *(_DWORD *)(a1 + 256) = v3;
      HalpTimerLastProblem = 15;
      *(_DWORD *)(a1 + 252) = 15;
      *(_QWORD *)(a1 + 264) = "minkernel\\hals\\lib\\timers\\common\\timer.c";
      *(_DWORD *)(a1 + 272) = 2563;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 224) & 2) != 0 )
      {
        v4 = HalpTimerGetInternalData(a1);
        _InterlockedExchange64((volatile __int64 *)(a1 + 200), (*(__int64 (__fastcall **)(__int64))(a1 + 112))(v4));
        HalpTimerCalibratePerformanceCounter(a1, 0LL);
      }
      if ( *(_DWORD *)(a1 + 228) == 3 )
        HalpTimerNoteHpetMaskingBehavior();
    }
  }
  *(_DWORD *)(a1 + 184) |= (v3 >> 31) + 2;
  return (unsigned int)v3;
}
