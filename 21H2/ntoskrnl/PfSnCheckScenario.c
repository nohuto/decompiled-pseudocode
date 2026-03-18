/*
 * XREFs of PfSnCheckScenario @ 0x1407DCF18
 * Callers:
 *     PfSnOperationProcess @ 0x1407D8338 (PfSnOperationProcess.c)
 *     PfSnBeginAppLaunch @ 0x1407DCCD8 (PfSnBeginAppLaunch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfSnCheckScenario(int a1, _DWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *((_DWORD *)&qword_140C54360 + a1);
  v3 = 0;
  if ( v2 )
  {
    if ( (dword_140C54790 & 1) == 0 || (dword_140C544F0 & 1) != 0 )
    {
      if ( dword_140C546E4 == 1 )
      {
        return (unsigned int)-1073741296;
      }
      else if ( qword_140C54638 )
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
