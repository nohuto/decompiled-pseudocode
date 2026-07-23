/*
 * XREFs of HalpTimerFindIdealClockSource @ 0x1403AB1B4
 * Callers:
 *     HalpTimerSelectRoles @ 0x1403AAB2C (HalpTimerSelectRoles.c)
 * Callees:
 *     HalpFindTimer @ 0x14039D5A8 (HalpFindTimer.c)
 */

ULONG_PTR *HalpTimerFindIdealClockSource()
{
  char v0; // bl
  ULONG_PTR *Timer; // rcx
  int v2; // eax
  ULONG_PTR *v4; // rax
  ULONG_PTR *v5; // rax
  ULONG_PTR *v6; // rax
  ULONG_PTR *v7; // rax
  ULONG_PTR *v8; // rax

  v0 = HalpTimerPlatformClockSourceForced;
  if ( !HalpTimerPlatformClockSourceForced )
  {
    Timer = HalpFindTimer(8, 96, 24576, 3840, 0);
    if ( Timer )
      goto LABEL_8;
  }
  Timer = HalpFindTimer(11, 544, 0, 80, 0);
  if ( Timer )
    goto LABEL_8;
  if ( !v0 && !HalpHvPresent && (__int64 (__fastcall **)())HalpProfileInterface[0] != DefaultProfileInterface )
  {
    Timer = HalpFindTimer(0, 33, 24576, 3840, 0);
    if ( Timer )
      goto LABEL_8;
  }
  Timer = HalpFindTimer(3, 352, 0, 0, 0);
  if ( Timer )
    goto LABEL_8;
  Timer = HalpFindTimer(3, 48, 0, 256, 0);
  if ( Timer )
    goto LABEL_8;
  Timer = HalpFindTimer(3, 96, 0, 3840, 0);
  if ( Timer )
    goto LABEL_8;
  Timer = HalpFindTimer(3, 48, 0, 3840, 0);
  if ( Timer )
    goto LABEL_8;
  Timer = HalpFindTimer(2, 304, 0, 0, 0);
  if ( Timer )
    goto LABEL_8;
  Timer = HalpFindTimer(6, 96, 0, 3840, 0);
  if ( Timer )
    goto LABEL_8;
  v4 = HalpFindTimer(0, 32864, 24576, 3840, 0);
  Timer = v4;
  if ( !v4 || v4[24] < 0x7D0 )
  {
    v5 = HalpFindTimer(0, 32816, 24576, 3840, 0);
    Timer = v5;
    if ( !v5 || v5[24] < 0x7D0 )
    {
      v6 = HalpFindTimer(0, 608, 57344, 0, 0);
      Timer = v6;
      if ( !v6 || v6[24] < 0x7D0 )
      {
        v7 = HalpFindTimer(0, 96, 57344, 3840, 0);
        Timer = v7;
        if ( !v7 || v7[24] < 0x7D0 )
        {
          v8 = HalpFindTimer(0, 48, 57344, 3840, 0);
          Timer = v8;
          if ( !v8 || v8[24] < 0x7D0 )
            Timer = 0LL;
        }
      }
    }
  }
  if ( Timer )
  {
LABEL_8:
    v2 = *((_DWORD *)Timer + 56);
    if ( (v2 & 0x50) != 0 )
      return (ULONG_PTR *)(-(__int64)((v2 & 0x20) != 0) & (unsigned __int64)Timer);
    else
      return 0LL;
  }
  return Timer;
}
