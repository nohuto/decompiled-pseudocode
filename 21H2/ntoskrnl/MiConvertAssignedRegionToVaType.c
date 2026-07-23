/*
 * XREFs of MiConvertAssignedRegionToVaType @ 0x140A51824
 * Callers:
 *     MiInitializeSystemVa @ 0x140A50300 (MiInitializeSystemVa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiConvertAssignedRegionToVaType(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  if ( a1 > 7 )
  {
    v5 = a1 - 8;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( !v6 )
        return 4LL;
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 1 )
            return 0LL;
          return 12LL;
        }
        else
        {
          return 15LL;
        }
      }
      else
      {
        return 1LL;
      }
    }
    else
    {
      return 14LL;
    }
  }
  else if ( a1 == 7 )
  {
    return 2LL;
  }
  else if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      v2 = v1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          if ( v3 != 2 )
            return 0LL;
          return 4LL;
        }
        return 9LL;
      }
      else
      {
        return 8LL;
      }
    }
    else
    {
      return 6LL;
    }
  }
  else
  {
    return 5LL;
  }
}
