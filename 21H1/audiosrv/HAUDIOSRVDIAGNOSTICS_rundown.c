/*
 * XREFs of HAUDIOSRVDIAGNOSTICS_rundown @ 0x18012EB60
 * Callers:
 *     <none>
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x1800108E4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 */

void __fastcall HAUDIOSRVDIAGNOSTICS_rundown(__int64 a1)
{
  LPCRITICAL_SECTION v1; // rbx

  v1 = g_ADGProcess;
  if ( a1 == *(_QWORD *)&g_ADGProcess[2].LockCount )
  {
    EnterCriticalSection(g_ADGProcess);
    if ( LODWORD(v1[1].DebugInfo)-- == 1 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v1);
    LeaveCriticalSection(v1);
  }
}
