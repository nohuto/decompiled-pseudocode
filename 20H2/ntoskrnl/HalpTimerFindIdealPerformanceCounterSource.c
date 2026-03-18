/*
 * XREFs of HalpTimerFindIdealPerformanceCounterSource @ 0x1403B01BC
 * Callers:
 *     HalpTimerSelectRoles @ 0x1403AFDEC (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpFindTimer @ 0x14039D818 (HalpFindTimer.c)
 *     HalpIsHvPresent @ 0x1403A1718 (HalpIsHvPresent.c)
 */

ULONG_PTR *HalpTimerFindIdealPerformanceCounterSource()
{
  int v0; // ebx
  ULONG_PTR *result; // rax

  if ( HalpTimerPlatformSourceForced )
    goto LABEL_9;
  if ( HalpIsHvPresent() )
    goto LABEL_22;
  v0 = 0x2000;
  if ( (unsigned __int8)HalpTimerDeepestIdleState > 1u )
    v0 = 24576;
  result = HalpFindTimer(5, 3, v0, 0, 0);
  if ( !result )
  {
    result = HalpFindTimer(10, 3, v0, 0, 0);
    if ( !result )
    {
LABEL_22:
      if ( !HalpHvCpuManager || qword_140C4A268 || (result = HalpFindTimer(3, 2, 24576, 0, 0)) == 0LL )
      {
        result = HalpFindTimer(8, 2, 0, 0, 0);
        if ( !result )
        {
LABEL_9:
          result = HalpFindTimer(11, 2, 24576, 0, 0);
          if ( !result )
          {
            result = HalpFindTimer(3, 2, 24576, 0, 0);
            if ( !result )
            {
              result = HalpFindTimer(6, 2, 24576, 0, 0);
              if ( !result )
              {
                result = HalpFindTimer(1, 2, 24576, 0, 0);
                if ( !result )
                {
                  if ( HalpIsHvPresent() )
                    return 0LL;
                  result = HalpFindTimer(0, 2, 24576, 0, 0);
                  if ( !result )
                    return 0LL;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}
