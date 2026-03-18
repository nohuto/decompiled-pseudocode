/*
 * XREFs of KiCheckKeepAlive @ 0x140307400
 * Callers:
 *     KeAccumulateTicks @ 0x140272200 (KeAccumulateTicks.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140277170 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402778F0 (KeRemoveProcessorAffinityEx.c)
 */

char __fastcall KiCheckKeepAlive(int a1)
{
  char v2; // di
  unsigned __int64 v3; // r8
  char v4; // dl
  unsigned __int64 v5; // r8

  v2 = 0;
  v3 = (unsigned int)KiProcessorIndexToNumberMappingTable[a1];
  v4 = v3 & 0x3F;
  v5 = v3 >> 6;
  if ( ((*(_QWORD *)&KiClockCheckPending[4 * v5 + 4] >> v4) & 1) != 0 )
  {
    if ( ((*((_QWORD *)&KiClockCheckReady + v5 + 1) >> v4) & 1) != 0 )
    {
      KeRemoveProcessorAffinityEx((unsigned __int16 *)&KiClockCheckReady, a1);
      KeRemoveProcessorAffinityEx((unsigned __int16 *)KiClockCheckPending, a1);
      return 1;
    }
    else
    {
      KeAddProcessorAffinityEx(&KiClockCheckReady, a1);
    }
  }
  return v2;
}
