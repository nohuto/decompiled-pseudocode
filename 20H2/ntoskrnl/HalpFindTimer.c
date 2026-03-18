/*
 * XREFs of HalpFindTimer @ 0x14039D818
 * Callers:
 *     HalpTscAdvSynchLeader @ 0x14039D054 (HalpTscAdvSynchLeader.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1403AE154 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpTimerSaveProcessorFrequency @ 0x1403AE950 (HalpTimerSaveProcessorFrequency.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x1403AF598 (HalpTimerInitializeEarlyStallSource.c)
 *     HalpInitializeTimers @ 0x1403AF688 (HalpInitializeTimers.c)
 *     HalpTimerSelectRoles @ 0x1403AFDEC (HalpTimerSelectRoles.c)
 *     HalpTimerFindBestAlwaysOnTimer @ 0x1403B011C (HalpTimerFindBestAlwaysOnTimer.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x1403B01BC (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalpTimerNoteHpetMaskingBehavior @ 0x1403B02AC (HalpTimerNoteHpetMaskingBehavior.c)
 *     HalpTimerFindIdealClockSource @ 0x1403B0474 (HalpTimerFindIdealClockSource.c)
 *     HalpTimerFindIdealWatchdog @ 0x1403B055C (HalpTimerFindIdealWatchdog.c)
 *     HalpTimerConfigureQpcBypass @ 0x1403CD3C4 (HalpTimerConfigureQpcBypass.c)
 *     HalpTscSynchronization @ 0x1403CDC30 (HalpTscSynchronization.c)
 *     HalpTimerQueryCycleCounter @ 0x1403CE450 (HalpTimerQueryCycleCounter.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x1404C1BF0 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *__fastcall HalpFindTimer(int a1, int a2, int a3, int a4, char a5)
{
  ULONG_PTR *v9; // r8
  ULONG_PTR *v10; // rdx
  ULONG_PTR *v11; // rbp
  ULONG_PTR *v12; // rbx
  ULONG_PTR *v13; // r9
  int v14; // eax
  int v15; // r11d
  ULONG_PTR v17; // rax
  ULONG_PTR v18; // rcx

  if ( !(_DWORD)HalpRegisteredTimerCount )
    return 0LL;
  v9 = (ULONG_PTR *)HalpRegisteredTimers;
  v10 = 0LL;
  while ( v9 != &HalpRegisteredTimers )
  {
    v11 = v9;
    v12 = v9;
    v13 = v9;
    v9 = (ULONG_PTR *)*v9;
    v14 = *((_DWORD *)v11 + 46);
    if ( ((v14 & 0x100) == 0 || (a5 & 4) == 0)
      && (v14 & 1) == 0
      && ((v14 & 4) == 0 || (a5 & 1) != 0)
      && (!a1 || a1 == *((_DWORD *)v13 + 57)) )
    {
      v15 = *((_DWORD *)v13 + 56);
      if ( (a2 & v15) == a2 && (v15 & a3) == 0 && (!a4 || (v15 & a4) != 0) )
      {
        if ( v10 )
        {
          v17 = v11[24];
          v18 = v10[24];
          if ( (a5 & 2) != 0 )
          {
            if ( v17 >= v18 )
              v12 = v10;
            v10 = v12;
          }
          else if ( v17 > v18 )
          {
            v10 = v13;
          }
        }
        else
        {
          v10 = v13;
        }
      }
    }
  }
  if ( (a5 & 4) != 0 && v10 )
    *((_DWORD *)v10 + 46) |= 0x100u;
  return v10;
}
