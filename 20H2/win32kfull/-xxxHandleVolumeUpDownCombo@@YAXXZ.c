/*
 * XREFs of ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01EA61C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C0102160 (xxxDoHotKeyStuff.c)
 * Callees:
 *     ?xxxVolumeUpDownComboSupported@@YAHXZ @ 0x1C01EA6B8 (-xxxVolumeUpDownComboSupported@@YAHXZ.c)
 *     UserBeep @ 0x1C0219828 (UserBeep.c)
 */

void xxxHandleVolumeUpDownCombo(void)
{
  LARGE_INTEGER PerformanceCounter; // rax
  int v1; // r8d
  __int64 v2; // rdx

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v1 = guVolComboCount;
  if ( guVolComboCount )
  {
    if ( PerformanceCounter.QuadPart <= gliVolComboTicks )
      goto LABEL_5;
    v1 = 0;
  }
  gliVolComboTicks = PerformanceCounter.QuadPart + 2LL * gliQpcFreq;
LABEL_5:
  guVolComboCount = v1 + 1;
  if ( (unsigned int)(v1 + 1) >= 3 )
  {
    if ( (unsigned int)xxxVolumeUpDownComboSupported() )
    {
      UserBeep(494LL, 200LL);
      LOBYTE(v2) = 1;
      xxxDisplayDiagBlackScreenDetected(2LL, v2);
    }
    guVolComboCount = 0;
  }
}
