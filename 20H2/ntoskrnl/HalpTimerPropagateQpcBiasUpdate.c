/*
 * XREFs of HalpTimerPropagateQpcBiasUpdate @ 0x1403A54AC
 * Callers:
 *     HalpTimerCalibratePerformanceCounter @ 0x1403A53A4 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerInitSystem @ 0x1403AE600 (HalpTimerInitSystem.c)
 *     HalpTimerSelectRoles @ 0x1403AFDEC (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x140395E80 (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

void __fastcall HalpTimerPropagateQpcBiasUpdate(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rbx
  unsigned __int64 v5; // rax

  if ( a1 == HalpPerformanceCounter )
  {
    if ( !qword_140C4A3B8 )
    {
      v2 = *(_QWORD *)(a1 + 208);
      if ( qword_140C4A3B0 )
        qword_140C4A3B0(v2);
    }
    v3 = *(_DWORD *)(a1 + 228);
    if ( v3 == 5 )
    {
      if ( !*(_QWORD *)(a1 + 192) )
        return;
      v4 = *(_QWORD *)(a1 + 208);
      v5 = HalpTimerScaleCounter(abs64(v4), *(_QWORD *)(a1 + 192), 10000000LL);
      if ( v4 < 0 )
        v5 = -(__int64)v5;
      MEMORY[0xFFFFF780000003B8] = v5;
      v3 = *(_DWORD *)(a1 + 228);
    }
    if ( v3 == 11 || v3 == 8 )
      MEMORY[0xFFFFF780000003B8] = *(_QWORD *)(a1 + 208);
  }
}
