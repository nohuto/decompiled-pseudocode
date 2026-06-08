/*
 * XREFs of SnapEnergyCountersAndTimestamp @ 0x1C0001940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LARGE_INTEGER __fastcall SnapEnergyCountersAndTimestamp(unsigned int a1, char a2, char a3)
{
  char *v4; // rbx
  LARGE_INTEGER result; // rax
  LARGE_INTEGER *v6; // r9
  LARGE_INTEGER *v7; // rbx

  v4 = (char *)WPP_MAIN_CB.Queue.ListEntry.Blink + 8 * a1;
  result = *(LARGE_INTEGER *)v4;
  v6 = *(LARGE_INTEGER **)(*(_QWORD *)v4 + 360LL);
  if ( !a2 )
  {
    result.QuadPart = __readmsr(0xC001029A);
    v6[2] = result;
  }
  if ( a3 )
  {
    result = v6[2];
    v6[4] = result;
  }
  v7 = *(LARGE_INTEGER **)(*(_QWORD *)v4 + 360LL);
  if ( !a2 )
  {
    result = KeQueryPerformanceCounter(0LL);
    v7[14] = result;
  }
  if ( a3 )
  {
    result = v7[14];
    v7[16] = result;
  }
  return result;
}
