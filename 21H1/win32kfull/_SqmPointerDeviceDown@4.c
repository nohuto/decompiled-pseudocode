/*
 * XREFs of _SqmPointerDeviceDown@4 @ 0x159486
 * Callers:
 *     <none>
 * Callees:
 *     _IsTouchPointerDevice@4 @ 0x1591F6 (_IsTouchPointerDevice@4.c)
 */

unsigned int __stdcall SqmPointerDeviceDown(_DWORD *a1)
{
  unsigned int result; // eax
  int v2; // edx
  unsigned int v3; // eax
  unsigned int v4; // eax
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax

  result = _gSqmIsOptedIn;
  if ( _gSqmIsOptedIn )
  {
    if ( IsTouchPointerDevice(a1) )
    {
      result = *(_DWORD *)(v2 + 848);
      if ( result > 0xC8 )
        return result;
      if ( result == 200 )
      {
        v9 = 8842;
      }
      else if ( result > 8 )
      {
        v10 = result - 9;
        if ( v10 )
        {
          v11 = v10 - 1;
          if ( v11 )
          {
            v12 = v11 - 1;
            if ( v12 )
            {
              v13 = v12 - 4;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  v15 = v14 - 4;
                  if ( v15 )
                  {
                    result = v15 - 1;
                    if ( result )
                      return result;
                    v9 = 8841;
                  }
                  else
                  {
                    v9 = 8840;
                  }
                }
                else
                {
                  v9 = 8839;
                }
              }
              else
              {
                v9 = 8838;
              }
            }
            else
            {
              v9 = 8837;
            }
          }
          else
          {
            v9 = 8836;
          }
        }
        else
        {
          v9 = 8835;
        }
      }
      else if ( result == 8 )
      {
        v9 = 8834;
      }
      else
      {
        v3 = result - 1;
        if ( v3 )
        {
          v4 = v3 - 1;
          if ( v4 )
          {
            v5 = v4 - 1;
            if ( v5 )
            {
              v6 = v5 - 1;
              if ( v6 )
              {
                v7 = v6 - 1;
                if ( v7 )
                {
                  v8 = v7 - 1;
                  if ( v8 )
                  {
                    result = v8 - 1;
                    if ( result )
                      return result;
                    v9 = 8833;
                  }
                  else
                  {
                    v9 = 8832;
                  }
                }
                else
                {
                  v9 = 8831;
                }
              }
              else
              {
                v9 = 8830;
              }
            }
            else
            {
              v9 = 8829;
            }
          }
          else
          {
            v9 = 8828;
          }
        }
        else
        {
          v9 = 8827;
        }
      }
      return WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v9, 1);
    }
    result = *(_DWORD *)(v2 + 12);
    if ( result == 6 || result == 5 )
    {
      if ( ++gSqmPenDownCount == 1 )
      {
        v9 = 8843;
      }
      else if ( gSqmPenDownCount == 2 )
      {
        v9 = 8844;
      }
      else
      {
        result = gSqmPenDownCount - 3;
        if ( gSqmPenDownCount != 3 )
          return result;
        v9 = 8845;
      }
      return WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v9, 1);
    }
  }
  return result;
}
