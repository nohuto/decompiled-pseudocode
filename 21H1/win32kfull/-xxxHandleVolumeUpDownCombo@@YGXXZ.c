/*
 * XREFs of ?xxxHandleVolumeUpDownCombo@@YGXXZ @ 0x155F5F
 * Callers:
 *     _xxxDoHotKeyStuff@16 @ 0xB182C (_xxxDoHotKeyStuff@16.c)
 * Callees:
 *     ?xxxVolumeUpDownComboSupported@@YGHXZ @ 0x15600D (-xxxVolumeUpDownComboSupported@@YGHXZ.c)
 *     _UserBeep@8 @ 0x17DF0D (_UserBeep@8.c)
 */

void __stdcall xxxHandleVolumeUpDownCombo()
{
  LARGE_INTEGER PerformanceCounter; // rax
  int v1; // edi
  __int64 v2; // rt0
  __int64 v3; // rt0

  PerformanceCounter = KeQueryPerformanceCounter(0);
  v1 = guVolComboCount;
  if ( guVolComboCount )
  {
    if ( PerformanceCounter.QuadPart > gliVolComboTicks )
    {
      HIDWORD(v3) = _gliQpcFreq[1];
      LODWORD(v3) = _gliQpcFreq[0];
      gliVolComboTicks = PerformanceCounter.QuadPart + 2 * v3;
      v1 = 0;
    }
  }
  else
  {
    HIDWORD(v2) = _gliQpcFreq[1];
    LODWORD(v2) = _gliQpcFreq[0];
    gliVolComboTicks = PerformanceCounter.QuadPart + 2 * v2;
  }
  guVolComboCount = v1 + 1;
  if ( (unsigned int)(v1 + 1) >= 3 )
  {
    if ( xxxVolumeUpDownComboSupported() )
    {
      UserBeep(494, 200);
      xxxDisplayDiagBlackScreenDetected(2, 1, 1, 0, 0);
    }
    guVolComboCount = 0;
  }
}
