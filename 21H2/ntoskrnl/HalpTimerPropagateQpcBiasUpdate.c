/*
 * XREFs of HalpTimerPropagateQpcBiasUpdate @ 0x1403B54DC
 * Callers:
 *     HalpTimerCalibratePerformanceCounter @ 0x1403B53D4 (HalpTimerCalibratePerformanceCounter.c)
 *     HalpTimerInitSystem @ 0x1403BB0A0 (HalpTimerInitSystem.c)
 *     HalpTimerSelectRoles @ 0x1403BC388 (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpTimerScaleCounter @ 0x1403A572C (HalpTimerScaleCounter.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

void __fastcall HalpTimerPropagateQpcBiasUpdate(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned __int64 v4; // rax
  __int64 v5; // r11

  if ( a1 == HalpPerformanceCounter )
  {
    if ( !qword_140C4C5D8 )
    {
      v2 = *(_QWORD *)(a1 + 208);
      if ( qword_140C4C5D0 )
        qword_140C4C5D0(v2);
    }
    v3 = *(_DWORD *)(a1 + 228);
    if ( v3 == 5 )
    {
      if ( !*(_QWORD *)(a1 + 192) )
        return;
      v4 = HalpTimerScaleCounter(abs64(*(_QWORD *)(a1 + 208)), *(_QWORD *)(a1 + 192), 10000000LL);
      if ( v5 < 0 )
        v4 = -(__int64)v4;
      MEMORY[0xFFFFF780000003B8] = v4;
      v3 = *(_DWORD *)(a1 + 228);
    }
    if ( v3 == 11 || v3 == 8 )
      MEMORY[0xFFFFF780000003B8] = *(_QWORD *)(a1 + 208);
  }
}
