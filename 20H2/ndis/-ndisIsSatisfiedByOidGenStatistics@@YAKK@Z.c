/*
 * XREFs of ?ndisIsSatisfiedByOidGenStatistics@@YAKK@Z @ 0x1C0039C70
 * Callers:
 *     ?ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E3@Z @ 0x1C0012F28 (-ndisQueryStatisticsOids@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@PEAKIPEAEK2E.c)
 *     ?ndisOidPostMiniportStats@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009BC30 (-ndisOidPostMiniportStats@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIsSatisfiedByOidGenStatistics(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx

  result = 0LL;
  if ( a1 <= 0x20208 )
  {
    if ( a1 == 131592 )
    {
      return 32LL;
    }
    else
    {
      v9 = a1 - 131331;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          v11 = v10 - 253;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 1;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  v15 = v14 - 1;
                  if ( v15 )
                  {
                    v16 = v15 - 1;
                    if ( v16 )
                    {
                      if ( v16 == 1 )
                        return 104LL;
                    }
                    else
                    {
                      return 80LL;
                    }
                  }
                  else
                  {
                    return 144LL;
                  }
                }
                else
                {
                  return 72LL;
                }
              }
              else
              {
                return 136LL;
              }
            }
            else
            {
              return 64LL;
            }
          }
          else
          {
            return 128LL;
          }
        }
        else
        {
          return 16LL;
        }
      }
      else
      {
        return 88LL;
      }
    }
  }
  else
  {
    v2 = a1 - 131593;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          v5 = v4 - 1;
          if ( v5 )
          {
            v6 = v5 - 13;
            if ( v6 )
            {
              v7 = v6 - 1;
              if ( v7 )
              {
                v8 = v7 - 1;
                if ( v8 )
                {
                  if ( v8 == 1 )
                    return 96LL;
                }
                else
                {
                  return 8LL;
                }
              }
              else
              {
                return 56LL;
              }
            }
            else
            {
              return 24LL;
            }
          }
          else
          {
            return 48LL;
          }
        }
        else
        {
          return 120LL;
        }
      }
      else
      {
        return 40LL;
      }
    }
    else
    {
      return 112LL;
    }
  }
  return result;
}
