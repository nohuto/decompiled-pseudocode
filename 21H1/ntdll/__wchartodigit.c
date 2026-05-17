/*
 * XREFs of __wchartodigit @ 0x4B2FCED1
 * Callers:
 *     _wcstoxq @ 0x4B2F7C71 (_wcstoxq.c)
 *     wcstoxlX @ 0x4B2FAA19 (wcstoxlX.c)
 * Callees:
 *     <none>
 */

int __cdecl _wchartodigit(unsigned __int16 a1)
{
  int v2; // edx
  unsigned __int16 v3; // cx

  if ( a1 < 0x30u )
    return -1;
  if ( a1 < 0x3Au )
    return a1 - 48;
  v2 = 65296;
  if ( a1 >= 0xFF10u )
  {
    v3 = -230;
LABEL_38:
    if ( a1 < v3 )
      return a1 - v2;
    return -1;
  }
  v2 = 1632;
  if ( a1 >= 0x660u )
  {
    if ( a1 < 0x66Au )
      return a1 - v2;
    v2 = 1776;
    if ( a1 >= 0x6F0u )
    {
      if ( a1 < 0x6FAu )
        return a1 - v2;
      v2 = 2406;
      if ( a1 >= 0x966u )
      {
        if ( a1 < 0x970u )
          return a1 - v2;
        v2 = 2534;
        if ( a1 >= 0x9E6u )
        {
          if ( a1 < 0x9F0u )
            return a1 - v2;
          v2 = 2662;
          if ( a1 >= 0xA66u )
          {
            if ( a1 < 0xA70u )
              return a1 - v2;
            v2 = 2790;
            if ( a1 >= 0xAE6u )
            {
              if ( a1 < 0xAF0u )
                return a1 - v2;
              v2 = 2918;
              if ( a1 >= 0xB66u )
              {
                if ( a1 < 0xB70u )
                  return a1 - v2;
                v2 = 3174;
                if ( a1 >= 0xC66u )
                {
                  if ( a1 < 0xC70u )
                    return a1 - v2;
                  v2 = 3302;
                  if ( a1 >= 0xCE6u )
                  {
                    if ( a1 < 0xCF0u )
                      return a1 - v2;
                    v2 = 3430;
                    if ( a1 >= 0xD66u )
                    {
                      if ( a1 < 0xD70u )
                        return a1 - v2;
                      v2 = 3664;
                      if ( a1 >= 0xE50u )
                      {
                        if ( a1 < 0xE5Au )
                          return a1 - v2;
                        v2 = 3792;
                        if ( a1 >= 0xED0u )
                        {
                          if ( a1 < 0xEDAu )
                            return a1 - v2;
                          v2 = 3872;
                          if ( a1 >= 0xF20u )
                          {
                            if ( a1 < 0xF2Au )
                              return a1 - v2;
                            v2 = 4160;
                            if ( a1 >= 0x1040u )
                            {
                              if ( a1 < 0x104Au )
                                return a1 - v2;
                              v2 = 6112;
                              if ( a1 >= 0x17E0u )
                              {
                                if ( a1 < 0x17EAu )
                                  return a1 - v2;
                                v2 = 6160;
                                if ( a1 >= 0x1810u )
                                {
                                  v3 = 6170;
                                  goto LABEL_38;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return -1;
}
