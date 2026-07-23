/*
 * XREFs of PfSnCheckScenario @ 0x14067ABA8
 * Callers:
 *     PfSnOperationProcess @ 0x1406193A4 (PfSnOperationProcess.c)
 *     PfSnBeginAppLaunch @ 0x14067A99C (PfSnBeginAppLaunch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_140C50160 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_140C50590 & 1) == 0 || (dword_140C502F0 & 1) != 0 )
    {
      if ( dword_140C504E4 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_140C50438 )
      {
        *a2 = v2;
      }
      else
      {
        return (unsigned int)-1073741127;
      }
    }
    else
    {
      return (unsigned int)-1073741725;
    }
  }
  else
  {
    return (unsigned int)-1073741399;
  }
  return v3;
}
