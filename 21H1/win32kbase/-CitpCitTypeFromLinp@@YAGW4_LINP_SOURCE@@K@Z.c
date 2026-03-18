/*
 * XREFs of ?CitpCitTypeFromLinp@@YAGW4_LINP_SOURCE@@K@Z @ 0x1C005B7C8
 * Callers:
 *     UserPowerInfoCallout @ 0x1C005E654 (UserPowerInfoCallout.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall CitpCitTypeFromLinp(int a1, char a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  v2 = a1 - 1;
  if ( v2 )
  {
    v4 = v2 - 2;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 6;
          if ( v7 )
          {
            v8 = v7 - 2;
            if ( v8 )
            {
              if ( v8 == 4 )
                LOWORD(v3) = (a2 & 8) != 0 ? 0x4000 : 256;
              else
                LOWORD(v3) = 0;
            }
            else
            {
              LOWORD(v3) = (a2 & 8) != 0 ? 0x2000 : 8;
            }
          }
          else
          {
            LOWORD(v3) = (a2 & 8) != 0 ? 4096 : 4;
          }
        }
        else
        {
          LOWORD(v3) = 32;
        }
      }
      else
      {
        LOWORD(v3) = 16;
      }
    }
    else
    {
      LOWORD(v3) = (a2 & 8) != 0 ? 2048 : 2;
    }
  }
  else if ( (a2 & 0x40) != 0 )
  {
    LOWORD(v3) = 512;
  }
  else
  {
    return (a2 & 8) != 0 ? 1024 : 1;
  }
  return v3;
}
