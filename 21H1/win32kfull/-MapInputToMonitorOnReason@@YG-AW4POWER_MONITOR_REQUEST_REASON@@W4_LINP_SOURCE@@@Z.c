/*
 * XREFs of ?MapInputToMonitorOnReason@@YG?AW4POWER_MONITOR_REQUEST_REASON@@W4_LINP_SOURCE@@@Z @ 0xAF150
 * Callers:
 *     _EditionKeepMachineUp@16 @ 0xAF03A (_EditionKeepMachineUp@16.c)
 * Callees:
 *     <none>
 */

int __fastcall MapInputToMonitorOnReason(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( a1 > 9 )
  {
    v5 = a1 - 11;
    if ( v5 )
    {
      v6 = v5 - 2;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          if ( v7 != 2 )
            return 4;
          return 35;
        }
        else
        {
          return 39;
        }
      }
      else
      {
        return 34;
      }
    }
    else
    {
      return 33;
    }
  }
  else if ( a1 == 9 )
  {
    return 38;
  }
  else
  {
    v1 = a1 - 1;
    if ( !v1 )
      return 31;
    v3 = v1 - 2;
    if ( !v3 )
      return 32;
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return 4;
      return 37;
    }
    else
    {
      return 36;
    }
  }
}
