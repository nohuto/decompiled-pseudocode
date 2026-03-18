/*
 * XREFs of ?UpdateThresholdFromMetric@@YGXHPAH0IEW4_THRESHOLD_SELECTOR@@@Z @ 0xE92D4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _UpdateDesktopThresholds@0 @ 0xA5498 (_UpdateDesktopThresholds@0.c)
 *     _UpdateWinIniInt@16 @ 0x145EB1 (_UpdateWinIniInt@16.c)
 */

int __fastcall UpdateThresholdFromMetric(int a1, int *a2, int *a3, int a4, unsigned __int8 a5, int a6)
{
  int result; // eax

  if ( a1 )
  {
    result = UpdateWinIniInt(a4, a5);
    *a2 = result;
    *a3 = result;
  }
  else
  {
    result = *a3;
  }
  if ( result )
  {
    gWinArrGlobal[a6] = a5;
    result = UpdateDesktopThresholds();
    if ( !result )
      gWinArrGlobal[a6] = a5;
  }
  return result;
}
