/*
 * XREFs of PfSnCheckScenario @ 0x1406B7A8C
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1406B7880 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x1407085C4 (PfSnOperationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_140C4FF20 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_140C50350 & 1) == 0 || (dword_140C500B0 & 1) != 0 )
    {
      if ( dword_140C502A4 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_140C501F8 )
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
