/*
 * XREFs of PfSnCheckScenario @ 0x14064D230
 * Callers:
 *     PfSnBeginAppLaunch @ 0x14064D024 (PfSnBeginAppLaunch.c)
 *     PfSnOperationProcess @ 0x1406F146C (PfSnOperationProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_140C4FFA0 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_140C503D0 & 1) == 0 || (dword_140C50130 & 1) != 0 )
    {
      if ( dword_140C50324 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_140C50278 )
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
